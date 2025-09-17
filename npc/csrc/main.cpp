#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <svdpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
#include <fstream>
#include <iostream>
#include <time.h>
#include "sdb.h"
#include "vga.h"
#include <dlfcn.h>
#include <cstdlib>   // 新增：用于EXIT_SUCCESS/EXIT_FAILURE
#include <cstdint>   // 新增：用于UINT64_MAX
#include "/home/ysyxbby/ysyx-workbench/nemu/src/isa/riscv32/include/isa-def.h"

#ifdef ENABLE_DIFFTEST
typedef void (*difftest_init_t)(int);
typedef void (*difftest_memcpy_t)(uint64_t, void*, size_t, bool);
typedef void (*difftest_regcpy_t)(void*, bool);
typedef void (*difftest_exec_t)(uint64_t);

difftest_init_t difftest_init;
difftest_memcpy_t difftest_memcpy;
difftest_regcpy_t difftest_regcpy;
difftest_exec_t difftest_exec;
#endif // ENABLE_DIFFTEST

static riscv32_CPU_state cpu_state;

#define DEVICE_BASE 0x20000000
#define SERIAL_PORT (DEVICE_BASE + 0x00003f8)
#define TIMER_LO    (DEVICE_BASE + 0x0000048)
#define TIMER_HI    (DEVICE_BASE + 0x000004c)
#define RTC_SECOND  (DEVICE_BASE + 0x0000074)
#define KBD_ADDR    (DEVICE_BASE + 0x0000060)
#define VGA_ADDR    (DEVICE_BASE + 0x0000100)
#define FB_ADDR    (DEVICE_BASE + 0x0100000)

// 步数统计变量
static uint64_t total_steps = 0;         // 总执行步数
static uint64_t start_step = 0;          // 每次"c"命令的起始步数
static bool is_counting_for_break = false; // 是否处于断点计数状态

typedef enum {
    BP_PERMANENT,
    BP_ONESHOT
} BreakpointType;

typedef struct {
    uint32_t pc;
    BreakpointType type;
    bool enabled;
} Breakpoint;

#define MAX_BREAKPOINTS 32
static Breakpoint breakpoints[MAX_BREAKPOINTS] = {0};
static int breakpoint_count = 0;

static struct tm *rtc_tm;
static time_t rtc_timep;
static uint64_t virtual_us = 0;
static uint32_t cycle_counter = 0;
static const uint32_t CYCLES_PER_US = 13;

static VerilatedContext* ctx = NULL;
static Vtop* top = NULL;
static bool is_reset = true;
static bool is_mtrace = false;
static int is_nemu = 0;
#define ROM_SIZE 33554432
#define RAM_SIZE 33554432
static uint32_t rom[ROM_SIZE];
static uint32_t ram[RAM_SIZE];
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

static uint32_t n_pc;
static uint32_t instr;
static int is_print = 0;

static bool check_breakpoint(uint32_t current_pc) {
    for (int i = 0; i < breakpoint_count; i++) {
        if (breakpoints[i].enabled && breakpoints[i].pc == current_pc) {
            printf("\n\033[1;31m====== 命中断点 ======\033[0m\n");
            printf("地址: 0x%08x | 类型: %s | 编号: %d\n",
                   breakpoints[i].pc,
                   breakpoints[i].type == BP_PERMANENT ? "永久" : "单次",
                   i+1);
            
            // 使用PRIu64宏修复格式警告
            if (is_counting_for_break) {
                uint64_t steps_used = total_steps - start_step;
                printf("执行步数: %" PRIu64 " 步 (从上次'c'命令开始)\n", steps_used);
                is_counting_for_break = false; // 重置计数状态
            }

#ifndef BATCH_MODE  // 批处理模式不显示命令提示
            printf("提示: 输入 'c' 继续执行 | 'si [步数]' 单步执行\n");
#endif

            printf("\033[1;31m======================\033[0m\n\n");

            if (breakpoints[i].type == BP_ONESHOT) {
                breakpoints[i].enabled = false;
                printf("单次断点已自动禁用\n");
            }
            return true;
        }
    }
    return false;
}

void print_breakpoints() {
    if (breakpoint_count == 0) {
        printf("没有设置任何断点\n");
        return;
    }
    printf("\033[1;34m====== 当前断点列表 ======\033[0m\n");
    printf("%-4s %-12s %-8s %-6s\n", "编号", "地址(PC)", "类型", "状态");
    printf("----------------------------------------\n");
    for (int i = 0; i < breakpoint_count; i++) {
        printf("%-4d 0x%08x     %-8s %-6s\n",
               i+1,
               breakpoints[i].pc,
               breakpoints[i].type == BP_PERMANENT ? "永久" : "单次",
               breakpoints[i].enabled ? "启用" : "禁用");
    }
    printf("========================================\n");
}

static int add_breakpoint(uint32_t pc_addr, BreakpointType type) {
    if (pc_addr % 4 != 0) {
        printf("警告: PC地址 0x%08x 未按4字节对齐，可能无法命中断点\n", pc_addr);
    }
    for (int i = 0; i < breakpoint_count; i++) {
        if (breakpoints[i].pc == pc_addr && breakpoints[i].enabled) {
            printf("已存在启用的断点: 0x%08x（编号: %d）\n", pc_addr, i+1);
            return -1;
        }
    }
    if (breakpoint_count >= MAX_BREAKPOINTS) {
        printf("已达到最大断点数量 (%d)\n", MAX_BREAKPOINTS);
        return -1;
    }
    breakpoints[breakpoint_count].pc = pc_addr;
    breakpoints[breakpoint_count].type = type;
    breakpoints[breakpoint_count].enabled = true;
    breakpoint_count++;
    printf("已设置断点 | 编号: %d | 地址: 0x%08x | 类型: %s\n",
           breakpoint_count,
           pc_addr,
           type == BP_PERMANENT ? "永久" : "单次");
    return 0;
}

void update_rtc() {
    static uint64_t last_sec = 0;
    if (virtual_us - last_sec >= 1000000) {
        time(&rtc_timep);
        rtc_tm = gmtime(&rtc_timep);
        last_sec = virtual_us;
    }
}

void update_virtual_time() {
    cycle_counter++;
    if (cycle_counter >= CYCLES_PER_US) {
        virtual_us++;
        cycle_counter = 0;
    }
}

extern "C" void set_csr_values(int mcause, int mepc, int mstatus, int mtvec) {
    cpu_state.csr.mcause = static_cast<word_t>(mcause);
    cpu_state.csr.mepc = static_cast<word_t>(mepc);
    cpu_state.csr.mstatus = static_cast<word_t>(mstatus);
    cpu_state.csr.mtvec = static_cast<word_t>(mtvec);
}

void putch(int c) {
    *(volatile uint8_t *)SERIAL_PORT = c & 0xff;
}


extern "C" void ebreak(int exit_code, int exit_pc) {
    if (exit_code == 0) {
        printf("Exit PC: 0x%x\n", cpu_state.pc);
        printf("[DPI] ebreak: \033[1;32m HIT GOOD TRAP \033[0m\n");        
    } else {
        printf("Exit PC: 0x%x\n", cpu_state.pc);
        printf("[DPI] ebreak: \033[1;31m HIT BAD TRAP \033[0m\n");
    }
    npc_state.state = NPC_END;
    exit(0);
    print_iringbuf();
}

#define IRINGBUF_SIZE 16
static InstTrace iringbuf[IRINGBUF_SIZE];
static int iringbuf_idx = 0;
static int iringbuf_count = 0;

extern "C" int rom_read(int raddr) {
    uint32_t aligned_addr = raddr & ~0x3u;
    uint32_t rom_idx = aligned_addr >> 2;
    if (rom_idx >= ROM_SIZE) {
        fprintf(stderr, "ROM越界: 0x%x\n", aligned_addr);
        assert(0);
        return 0;
    }
    return rom[rom_idx];
}

extern "C" int pmem_read(int raddr, int valid) {
    uint32_t data = 0;
    if (raddr == SERIAL_PORT) data = 0;
    else if (raddr == KBD_ADDR) data = 0;
    else if (raddr >= VGA_ADDR && raddr <= VGA_ADDR+0x7) data = 0;
    else if (raddr >= FB_ADDR && raddr <= FB_ADDR + 0x200000)
    else if (raddr == TIMER_LO) data = (uint32_t)(virtual_us & 0xFFFFFFFF);
    else if (raddr == TIMER_HI) data = (uint32_t)(virtual_us >> 32);
    else if (raddr == RTC_SECOND) data = rtc_tm->tm_sec;
    else {
            int addr = (raddr & ~0x3u) >> 2;
            data = ram[addr];
    }
    if(is_mtrace && (valid == 0xffffffff)) printf("\033[1;32mMtrace: 成功在地址: 0x%x 取出数据 0x%x\n\033[0m", raddr+0x80000000, data);
    return data;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask, int pc) {
    if (waddr == SERIAL_PORT) {
        if (wmask & 0x1) {
            putchar(wdata & 0xff);
            fflush(stdout);
        }
        return;
    }
    if(waddr == KBD_ADDR || waddr == VGA_ADDR){
        return;
    }
    
    if (waddr == TIMER_LO || waddr == TIMER_HI) return;
    int addr = (waddr & ~0x3u) >> 2;
    uint32_t new_val = ram[addr];
    if (wmask == 0x1) new_val = (new_val & ~0xFF) | (wdata & 0xFF);
    else if (wmask == 0x2) new_val = (new_val & ~0xFF00) | (wdata & 0xFF00);
    else if (wmask == 0x4) new_val = (new_val & ~0xFF0000) | (wdata & 0xFF0000);
    else if (wmask == 0x8) new_val = (new_val & ~0xFF000000) | (wdata & 0xFF000000);
    else if (wmask == 0x3) new_val = (new_val & ~0x0000FFFF) | (wdata & 0xFFFF);
    else if (wmask == 0x0c) new_val = (new_val & ~0xFFFF0000) | (wdata & 0xFFFF0000);
    else new_val = wdata;
    if(is_mtrace) printf("\033[1;32mMtrace: 成功在地址: 0x%x 存入数据 0x%x\n\033[0m", waddr+0x80000000, new_val);
    ram[addr] = new_val;
}

extern "C" void display(int instr, int pc, int npc) {
    ::instr = instr;
    cpu_state.pc = static_cast<vaddr_t>(pc);
    ::n_pc = npc;
}

extern "C" void display_ref(
    int rf0, int rf1, int rf2, int rf3,
    int rf4, int rf5, int rf6, int rf7,
    int rf8, int rf9, int rf10, int rf11,
    int rf12, int rf13, int rf14, int rf15,
    int rf16, int rf17, int rf18, int rf19,
    int rf20, int rf21, int rf22, int rf23,
    int rf24, int rf25, int rf26, int rf27,
    int rf28, int rf29, int rf30, int rf31
) {
    cpu_state.gpr[0] = static_cast<word_t>(rf0);
    cpu_state.gpr[1] = static_cast<word_t>(rf1);
    cpu_state.gpr[2] = static_cast<word_t>(rf2);
    cpu_state.gpr[3] = static_cast<word_t>(rf3);
    cpu_state.gpr[4] = static_cast<word_t>(rf4);
    cpu_state.gpr[5] = static_cast<word_t>(rf5);
    cpu_state.gpr[6] = static_cast<word_t>(rf6);
    cpu_state.gpr[7] = static_cast<word_t>(rf7);
    cpu_state.gpr[8] = static_cast<word_t>(rf8);
    cpu_state.gpr[9] = static_cast<word_t>(rf9);
    cpu_state.gpr[10] = static_cast<word_t>(rf10);
    cpu_state.gpr[11] = static_cast<word_t>(rf11);
    cpu_state.gpr[12] = static_cast<word_t>(rf12);
    cpu_state.gpr[13] = static_cast<word_t>(rf13);
    cpu_state.gpr[14] = static_cast<word_t>(rf14);
    cpu_state.gpr[15] = static_cast<word_t>(rf15);
    cpu_state.gpr[16] = static_cast<word_t>(rf16);
    cpu_state.gpr[17] = static_cast<word_t>(rf17);
    cpu_state.gpr[18] = static_cast<word_t>(rf18);
    cpu_state.gpr[19] = static_cast<word_t>(rf19);
    cpu_state.gpr[20] = static_cast<word_t>(rf20);
    cpu_state.gpr[21] = static_cast<word_t>(rf21);
    cpu_state.gpr[22] = static_cast<word_t>(rf22);
    cpu_state.gpr[23] = static_cast<word_t>(rf23);
    cpu_state.gpr[24] = static_cast<word_t>(rf24);
    cpu_state.gpr[25] = static_cast<word_t>(rf25);
    cpu_state.gpr[26] = static_cast<word_t>(rf26);
    cpu_state.gpr[27] = static_cast<word_t>(rf27);
    cpu_state.gpr[28] = static_cast<word_t>(rf28);
    cpu_state.gpr[29] = static_cast<word_t>(rf29);
    cpu_state.gpr[30] = static_cast<word_t>(rf30);
    cpu_state.gpr[31] = static_cast<word_t>(rf31);
}

void printf_ref() {
    printf("\033[1;34m======================================== 寄存器状态 ========================================\033[0m\n");
    printf("%-8s   %-14s  %-8s    %-14s  %-8s    %-14s  %-8s    %-14s\n",
           "名称", "值(十六进制)", 
           "名称", "值(十六进制)", 
           "名称", "值(十六进制)", 
           "名称", "值(十六进制)");
    printf("---------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < 32; i += 4) {
        int end = (i + 4 < 32) ? i + 4 : 32;
        for (int j = i; j < end; j++) {
            if (j == 0) {
                printf("\033[1;32m%-8s\033[0m  0x%-10.8x  ", regs[j], cpu_state.gpr[j]);
            } else {
                printf("%-8s  0x%-10.8x  ", regs[j], cpu_state.gpr[j]);
            }
        }
        printf("\n");
    }
    printf("---------------------------------------------------------------------------------------------\n");
    printf("\033[1;33m当前PC:   0x%-10.8x\033[0m\n", cpu_state.pc);
    printf("\033[1;33m下条PC:   0x%-10.8x\033[0m\n", n_pc);
    printf("\033[1;33mmcause:   0x%-10.8x\033[0m\n", cpu_state.csr.mcause);
    printf("\033[1;33mmepc:     0x%-10.8x\033[0m\n", cpu_state.csr.mepc);
    printf("\033[1;33mmstatus:  0x%-10.8x\033[0m\n", cpu_state.csr.mstatus);
    printf("\033[1;33mmtvec:    0x%-10.8x\033[0m\n", cpu_state.csr.mtvec);
}

static const char* disassemble(uint32_t inst) {
    char* disasm = (char*)malloc(64);
    uint32_t opcode = inst & 0x7F;
    uint32_t rd = (inst >> 7) & 0x1F;
    uint32_t rs1 = (inst >> 15) & 0x1F;
    uint32_t rs2 = (inst >> 20) & 0x1F;
    uint32_t funct3 = (inst >> 12) & 0x7;
    uint32_t funct7 = inst >> 25;
    int32_t imm_i = (int32_t)(inst >> 20);
    int32_t imm_s = ((inst >> 25) << 5) | ((inst >> 7) & 0x1F);
    imm_s = (imm_s << 20) >> 20;
    int32_t imm_b = ((inst >> 31) << 12) | ((inst >> 7) & 0x1) << 11 |
                    ((inst >> 25) & 0x3F) << 5 | ((inst >> 8) & 0xF) << 1;
    imm_b = (imm_b << 19) >> 19;
    int32_t imm_u = inst & 0xFFFFF000;
    int32_t imm_j = ((inst >> 31) << 20) | ((inst >> 12) & 0xFF) << 12 |
                    ((inst >> 20) & 0x1) << 11 | ((inst >> 21) & 0x3FF) << 1;
    imm_j = (imm_j << 11) >> 11;

    switch (opcode) {
        case 0x33:
            switch (funct3) {
                case 0x0:
                    if (funct7 == 0x00) snprintf(disasm, 64, "add   %s, %s, %s", regs[rd], regs[rs1], regs[rs2]);
                    else if (funct7 == 0x20) snprintf(disasm, 64, "sub   %s, %s, %s", regs[rd], regs[rs1], regs[rs2]);
                    else snprintf(disasm, 64, "unknown");
                    break;
                case 0x1: snprintf(disasm, 64, "sll   %s, %s, %s", regs[rd], regs[rs1], regs[rs2]); break;
                case 0x2: snprintf(disasm, 64, "slt   %s, %s, %s", regs[rd], regs[rs1], regs[rs2]); break;
                case 0x3: snprintf(disasm, 64, "sltu  %s, %s, %s", regs[rd], regs[rs1], regs[rs2]); break;
                case 0x4: snprintf(disasm, 64, "xor   %s, %s, %s", regs[rd], regs[rs1], regs[rs2]); break;
                case 0x5:
                    if (funct7 == 0x00) snprintf(disasm, 64, "srl   %s, %s, %s", regs[rd], regs[rs1], regs[rs2]);
                    else if (funct7 == 0x20) snprintf(disasm, 64, "sra   %s, %s, %s", regs[rd], regs[rs1], regs[rs2]);
                    else snprintf(disasm, 64, "unknown");
                    break;
                case 0x6: snprintf(disasm, 64, "or    %s, %s, %s", regs[rd], regs[rs1], regs[rs2]); break;
                case 0x7: snprintf(disasm, 64, "and   %s, %s, %s", regs[rd], regs[rs1], regs[rs2]); break;
                default: snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x13:
            switch (funct3) {
                case 0x0: snprintf(disasm, 64, "addi  %s, %s, %d", regs[rd], regs[rs1], imm_i); break;
                case 0x2: snprintf(disasm, 64, "slti  %s, %s, %d", regs[rd], regs[rs1], imm_i); break;
                case 0x3: snprintf(disasm, 64, "sltiu %s, %s, %d", regs[rd], regs[rs1], imm_i); break;
                case 0x4: snprintf(disasm, 64, "xori  %s, %s, %d", regs[rd], regs[rs1], imm_i); break;
                case 0x6: snprintf(disasm, 64, "ori   %s, %s, %d", regs[rd], regs[rs1], imm_i); break;
                case 0x7: snprintf(disasm, 64, "andi  %s, %s, %d", regs[rd], regs[rs1], imm_i); break;
                case 0x1:
                    if (funct7 == 0x00) snprintf(disasm, 64, "slli  %s, %s, %d", regs[rd], regs[rs1], imm_i & 0x1F);
                    else snprintf(disasm, 64, "unknown");
                    break;
                case 0x5:
                    if (funct7 == 0x00) snprintf(disasm, 64, "srli  %s, %s, %d", regs[rd], regs[rs1], imm_i & 0x1F);
                    else if (funct7 == 0x20) snprintf(disasm, 64, "srai  %s, %s, %d", regs[rd], regs[rs1], imm_i & 0x1F);
                    else snprintf(disasm, 64, "unknown");
                    break;
                default: snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x03:
            switch (funct3) {
                case 0x0: snprintf(disasm, 64, "lb    %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x1: snprintf(disasm, 64, "lh    %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x2: snprintf(disasm, 64, "lw    %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x4: snprintf(disasm, 64, "lbu   %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x5: snprintf(disasm, 64, "lhu   %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                default: snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x23:
            switch (funct3) {
                case 0x0: snprintf(disasm, 64, "sb    %s, %d(%s)", regs[rs2], imm_s, regs[rs1]); break;
                case 0x1: snprintf(disasm, 64, "sh    %s, %d(%s)", regs[rs2], imm_s, regs[rs1]); break;
                case 0x2: snprintf(disasm, 64, "sw    %s, %d(%s)", regs[rs2], imm_s, regs[rs1]); break;
                default: snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x63:
            switch (funct3) {
                case 0x0: snprintf(disasm, 64, "beq   %s, %s, %d", regs[rs1], regs[rs2], imm_b); break;
                case 0x1: snprintf(disasm, 64, "bne   %s, %s, %d", regs[rs1], regs[rs2], imm_b); break;
                case 0x4: snprintf(disasm, 64, "blt   %s, %s, %d", regs[rs1], regs[rs2], imm_b); break;
                case 0x5: snprintf(disasm, 64, "bge   %s, %s, %d", regs[rs1], regs[rs2], imm_b); break;
                case 0x6: snprintf(disasm, 64, "bltu  %s, %s, %d", regs[rs1], regs[rs2], imm_b); break;
                case 0x7: snprintf(disasm, 64, "bgeu  %s, %s, %d", regs[rs1], regs[rs2], imm_b); break;
                default: snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x37:
            snprintf(disasm, 64, "lui   %s, 0x%x", regs[rd], imm_u >> 12); break;
        case 0x17:
            snprintf(disasm, 64, "auipc %s, 0x%x", regs[rd], imm_u >> 12); break;
        case 0x6F:
            snprintf(disasm, 64, "jal   %s, %d", regs[rd], imm_j); break;
        case 0x67:
            if (funct3 == 0x0) {
                if (inst == 0x00008067) snprintf(disasm, 64, "ret");
                else snprintf(disasm, 64, "jalr  %s, %s, %d", regs[rd], regs[rs1], imm_i);
            } else {
                snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x73:
            if (inst == 0x00000073) snprintf(disasm, 64, "ecall");
            else if (inst == 0x00100073) snprintf(disasm, 64, "ebreak");
            else snprintf(disasm, 64, "unknown");
            break;
        default:
            snprintf(disasm, 64, "unknown");
    }
    return disasm;
}

void print_iringbuf() {
    printf("\033[1;34m====== Instruction Ring Buffer ======\033[0m\n");
    if (iringbuf_count == 0) {
        printf("No instructions in ring buffer.\n");
        return;
    }
    int start = (iringbuf_count < IRINGBUF_SIZE) ? 0 : iringbuf_idx;
    for (int i = 0; i < iringbuf_count; i++) {
        int idx = (start + i) % IRINGBUF_SIZE;
        bool is_last = (i == iringbuf_count - 1 && (npc_state.state == NPC_END || npc_state.state == NPC_ABORT));
        printf("%s0x%08x: %-20s  0x%08x\n",
               is_last ? "--> " : "    ",
               iringbuf[idx].pc,
               iringbuf[idx].disasm,
               iringbuf[idx].inst);
    }
    printf("\033[1;34m====================================\033[0m\n");
}

bool load_rom_bin(const char* filename) {
    FILE* fp = fopen(filename, "rb");
    if (!fp) { perror("ROM bin打开失败"); return false; }
    size_t count = 0;
    uint32_t word;
    while (count < ROM_SIZE && fread(&word, 1, 4, fp) == 4) {
        rom[count++] = word;
    }
    fclose(fp);
    printf("[INFO] 加载ROM: %zu条指令\n", count);
    return true;
}

bool load_ram_bin(const char* filename) {
    FILE* fp = fopen(filename, "rb");
    if (!fp) { perror("RAM bin打开失败"); return false; }
    size_t count = 0;
    uint32_t word;
    while (count < RAM_SIZE && fread(&word, 1, 4, fp) == 4) {
        ram[count++] = word;
    }
    fclose(fp);
    printf("[INFO] 加载RAM: %zu个数据\n", count);
    return true;
}

bool load_rom_hex(const char* filename) {
    std::ifstream file(filename);
    if (!file.is_open()) { std::cerr << "ROM hex打开失败\n"; return false; }
    std::string line;
    size_t count = 0;
    while (std::getline(file, line) && count < ROM_SIZE) {
        std::string cleaned;
        for (char c : line) if (!isspace(c)) cleaned += c;
        if (cleaned.empty() || cleaned[0] == '#') continue;
        try {
            rom[count++] = std::stoul(cleaned, nullptr, 16);
        } catch (...) { std::cerr << "解析失败: " << cleaned << "\n"; }
    }
    file.close();
    printf("[INFO] 加载ROM hex: %zu条指令\n", count);
    return true;
}

bool init_rom(const char* base) {
    std::string bin = base + std::string(".bin");
    if (load_rom_bin(bin.c_str())) return true;
    std::string hex = base + std::string(".txt");
    if (load_rom_hex(hex.c_str())) return true;
    std::cerr << "ROM初始化失败\n";
    return false;
}

bool init_ram(const char* base) {
    std::string bin = base + std::string(".bin");
    if (load_ram_bin(bin.c_str())) return true;
    std::string hex = base + std::string(".txt");
    if (load_rom_hex(hex.c_str())) return true;
    std::cerr << "RAM初始化失败\n";
    return false;
}

NPCState npc_state = { .state = NPC_STOP };

static char* rl_gets() {
    static char *line_read = NULL;
    if (line_read) {
        free(line_read);
        line_read = NULL;
    }
    line_read = readline("(npc) ");
    if (line_read && *line_read) {
        add_history(line_read);
    }
    return line_read;
}

static int cmd_help(char *args);
static int cmd_q(char *args);
static int cmd_c(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_itrace(char *args);
static int cmd_mtrace(char *args);
static int cmd_b(char *args);          
static int cmd_del_breakpoint(char *args); 
static int cmd_enable_breakpoint(char *args); 
static int cmd_disable_breakpoint(char *args);

static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table[] = {
    { "help", "显示所有支持的命令", cmd_help },
    { "c", "继续执行程序（从当前位置/断点处开始）", cmd_c },
    { "q", "退出NPC模拟器", cmd_q },
    { "si", "单步执行（可指定步数，如si 5）", cmd_si },
    { "info", "查看寄存器状态(info r)或断点(info b)", cmd_info },
    { "x", "查看内存数据（用法: x N 地址，如x 10 0x80000000）", cmd_x },
    { "itrace", "显示指令执行历史", cmd_itrace },
    { "mtrace", "开启/关闭内存访问跟踪（mtrace on/off）", cmd_mtrace},
    { "b", "设置断点（用法: b 地址 [type]，type可选permanent/oneshot，默认permanent）", cmd_b },
    { "del", "删除断点（用法: del 编号 或 del all）", cmd_del_breakpoint },
    { "enable", "启用断点（用法: enable 编号）", cmd_enable_breakpoint },
    { "disable", "禁用断点（用法: disable 编号）", cmd_disable_breakpoint }
};

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
    char *arg = strtok(NULL, " ");
    int i;
    if (arg == NULL) {
        for (i = 0; i < NR_CMD; i++) {
            printf("%-8s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    } else {
        for (i = 0; i < NR_CMD; i++) {
            if (strcmp(arg, cmd_table[i].name) == 0) {
                printf("%-8s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
        printf("未知命令 '%s'\n", arg);
    }
    return 0;
}

static int cmd_q(char *args) {
    npc_state.state = NPC_QUIT;
    return -1;
}

// "c"命令初始化步数统计
static int cmd_c(char *args) {
    start_step = total_steps;       // 记录当前总步数作为起始点
    is_counting_for_break = true;   // 标记开始统计到断点的步数
    npc_state.state = NPC_RUNNING;
    return 0;
}

static bool g_print_step = false;
#define MAX_INST_TO_PRINT 10

#ifdef ENABLE_DIFFTEST
void prepare_npc_before_state(riscv32_CPU_state &npc_before, int is_nemu, uint32_t n_pc, uint32_t pc, const word_t *gpr) {
    if (is_nemu <= 1) {
        memset(&npc_before, 0, sizeof(riscv32_CPU_state));
        npc_before.pc = 0x80000000;
    } else if (n_pc - pc != 4) {
        memcpy(npc_before.gpr, gpr, sizeof(npc_before.gpr));
        npc_before.pc = n_pc;
        npc_before.csr = cpu_state.csr;
    } else {
        memcpy(npc_before.gpr, gpr, sizeof(npc_before.gpr));
        npc_before.pc = pc + 4;
        npc_before.csr = cpu_state.csr;
    }
}

void sync_npc_to_nemu(riscv32_CPU_state &npc_before) {
    difftest_regcpy(&npc_before, true);
}

void execute_nemu_step() {
    difftest_exec(1);
}

void get_nemu_result(riscv32_CPU_state &ref_nemu) {
    difftest_regcpy(&ref_nemu, false);
}

bool check_diff_result(const riscv32_CPU_state &npc, const riscv32_CPU_state &ref_nemu, int is_nemu, uint32_t pc) {
    if (is_nemu <= 1) return false;

    bool has_error = false;

    for (int i = 0; i < 32; ++i) {
        if (npc.gpr[i] != ref_nemu.gpr[i]) {
            if (!has_error) {
                printf("\n❌ DiffTest FAILED at PC = 0x%08x\n", pc);
                has_error = true;
            }
            printf("x%-2d: NPC = 0x%08x, NEMU = 0x%08x\n", i, npc.gpr[i], ref_nemu.gpr[i]);
        }
    }

    if (npc.pc != ref_nemu.pc) {
        if (!has_error) {
            printf("\n❌ DiffTest FAILED at PC = 0x%08x\n", pc);
            has_error = true;
        }
        printf("PC : NPC = 0x%08x, NEMU = 0x%08x\n", npc.pc, ref_nemu.pc);
    }

    if (npc.csr.mcause != ref_nemu.csr.mcause) {
        if (!has_error) {
            printf("\n❌ DiffTest FAILED at PC = 0x%08x\n", pc);
            has_error = true;
        }
        printf("mcause: NPC = 0x%08x, NEMU = 0x%08x\n", npc.csr.mcause, ref_nemu.csr.mcause);
    }

    if (npc.csr.mepc != ref_nemu.csr.mepc) {
        if (!has_error) {
            printf("\n❌ DiffTest FAILED at PC = 0x%08x\n", pc);
            has_error = true;
        }
        printf("mepc: NPC = 0x%08x, NEMU = 0x%08x\n", npc.csr.mepc, ref_nemu.csr.mepc);
    }

    if (npc.csr.mstatus != ref_nemu.csr.mstatus) {
        if (!has_error) {
            printf("\n❌ DiffTest FAILED at PC = 0x%08x\n", pc);
            has_error = true;
        }
        printf("mstatus: NPC = 0x%08x, NEMU = 0x%08x\n", npc.csr.mstatus, ref_nemu.csr.mstatus);
    }

    if (npc.csr.mtvec != ref_nemu.csr.mtvec) {
        if (!has_error) {
            printf("\n❌ DiffTest FAILED at PC = 0x%08x\n", pc);
            has_error = true;
        }
        printf("mtvec: NPC = 0x%08x, NEMU = 0x%08x\n", npc.csr.mtvec, ref_nemu.csr.mtvec);
    }

    if (has_error) {
        npc_state.state = NPC_ABORT;
        return true;
    }
    return false;
}
#endif // ENABLE_DIFFTEST

void update_instruction_trace(uint32_t pc, uint32_t instr, InstTrace *iringbuf, int &iringbuf_idx, int &iringbuf_count) {
    const char* disasm_buf = disassemble(instr);
    strncpy(iringbuf[iringbuf_idx].disasm, disasm_buf, 63);
    iringbuf[iringbuf_idx].disasm[63] = '\0';
    free((void*)disasm_buf);
    iringbuf[iringbuf_idx].pc = pc;
    iringbuf[iringbuf_idx].inst = instr;
    iringbuf_idx = (iringbuf_idx + 1) % IRINGBUF_SIZE;
    if (iringbuf_count < IRINGBUF_SIZE) {
        iringbuf_count++;
    }
}

#ifdef ENABLE_DIFFTEST
static riscv32_CPU_state ref_nemu;
static riscv32_CPU_state npc_before;
static riscv32_CPU_state npc;
#endif // ENABLE_DIFFTEST

// cpu_exec中累加总步数
void cpu_exec(uint64_t n) {
    if (npc_state.state == NPC_END || npc_state.state == NPC_ABORT || npc_state.state == NPC_QUIT) {
        printf("程序执行已结束。请退出 NPC 并重新运行。\n");
        return;
    }
    npc_state.state = NPC_RUNNING;
    g_print_step = (n <= MAX_INST_TO_PRINT && is_print);

    uint64_t steps = 0;
    int cycles = 0;
    
    while (steps < n && !ctx->gotFinish() && npc_state.state != NPC_END) {
        uint32_t current_pc_before_exec = cpu_state.pc;

#ifdef ENABLE_DIFFTEST
        prepare_npc_before_state(npc_before, ::is_nemu, ::n_pc, cpu_state.pc, cpu_state.gpr);
#endif // ENABLE_DIFFTEST

        top->reset = is_reset && (cycles < 1);
        top->clk = 0;
        ctx->timeInc(1);
        top->eval();
        top->clk = 1;
        ctx->timeInc(1);
        top->eval();
        cycles++;
        steps++;
        update_virtual_time();
        update_rtc();
        ::is_nemu++;
        
        // 累加总执行步数
        total_steps++;
        
        cpu_state.pc = ::n_pc;

#ifdef ENABLE_DIFFTEST
        memcpy(npc.gpr, cpu_state.gpr, sizeof(npc.gpr));
        npc.pc = cpu_state.pc;
        npc.csr = cpu_state.csr;

        sync_npc_to_nemu(npc_before);
        execute_nemu_step();
        get_nemu_result(ref_nemu);
        
        if (check_diff_result(npc, ref_nemu, ::is_nemu, current_pc_before_exec)) {
            return;
        }
#endif // ENABLE_DIFFTEST

        if (g_print_step) {
            const char* disasm = disassemble(::instr);
            printf("\033[1;33mPC: 0x%x\033[0m    \033[1;34minstr:  0x%x  %s\033[0m\n", 
                   current_pc_before_exec, ::instr, disasm);
            free((void*)disasm);
        }

        update_instruction_trace(current_pc_before_exec, ::instr, iringbuf, iringbuf_idx, iringbuf_count);

        if (check_breakpoint(cpu_state.pc)) {
            npc_state.state = NPC_STOP;
            return;
        }
    }
    is_reset = false;
    if (npc_state.state != NPC_END) {
        npc_state.state = NPC_STOP;
    }
}

static int cmd_si(char *args) {
    int i;
    if(is_print != 0){
        if (args == NULL) {
            cpu_exec(1);
            is_print = 1;
        } else {
            i = atoi(args);
            if (i <= 0) {
                printf("无效步数: %s，请提供正整数。\n", args);
                return 0;
            }
            cpu_exec(i);
            is_print = 1;
        }
    return 0;
    }
    else{
        cpu_exec(1);
        is_print = 1;
        cpu_exec(1);
        return 0;
    }
}

static int cmd_info(char *args) {
    if (args == NULL) {
        printf("用法: info r（查看寄存器） | info b（查看断点）\n");
        return 0;
    }
    if (strcmp(args, "r") == 0) {
        printf_ref();
    } else if (strcmp(args, "b") == 0) {
        print_breakpoints();
    } else {
        printf("未知参数: %s，支持的参数: r, b\n", args);
    }
    return 0;
}

static int cmd_x(char *args) {
    char *arg1 = strtok(NULL, " ");
    if (arg1 == NULL) {
        printf("用法: x N EXPR（查看从EXPR开始的N个4字节数据）\n");
        return 0;
    }
    char *arg2 = strtok(NULL, " ");
    if (arg2 == NULL) {
        printf("用法: x N EXPR（例如: x 10 0x80000000）\n");
        return 0;
    }
    char *endptr1;
    u_int32_t n = strtol(arg1, &endptr1, 0);
    u_int32_t expr = strtol(arg2, NULL, 16);

    if (*endptr1 != '\0') {
        printf("\033[1;31m无效数量格式: %s\033[0m\n", arg1);
        return 0;
    }
    if (expr < 0x80000000 || expr >= 0x90000000) {
        printf("\033[1;31m地址 0x%08x 超出RAM范围(0x80000000 ~ 0x8FFFFFFF)!\033[0m\n", expr);
        return 0;
    }

    printf("\033[1;34m======= 内存数据 (从 0x%08x 开始) =======\033[0m\n", expr);
    printf("地址          数据\n");
    printf("------------------------\n");

    for (int i = 0; i < n; i++) {
        uint32_t address = expr + i * 4 ;
        uint32_t data = pmem_read(address-0x80000000, 0);
        printf("0x%08x  0x%08x\n", address, data);
    }

    printf("----------------------------------------\n");
    return 0;
}

static int cmd_itrace(char *args) {
    print_iringbuf();
    return 0;
}

static int cmd_mtrace(char *args){
    if(args == NULL){
        printf("用法: mtrace on（开启） | mtrace off（关闭）\n");
        return 0;
    }
    if(strcmp(args, "on") == 0){
        is_mtrace = true;
        printf("内存跟踪已开启\n");
    }
    else if(strcmp(args, "off") == 0){
        is_mtrace = false;
        printf("内存跟踪已关闭\n");
    }
    else {
        printf("无效参数: %s，支持的参数: on, off\n", args);
    }
    return 0;
}

static int cmd_b(char *args) {
    if (args == NULL) {
        printf("用法: b <pc地址> [类型]（类型: permanent/oneshot，默认permanent）\n");
        printf("示例: b 0x80000000（永久断点）\n");
        printf("      b 0x80000040 oneshot（单次断点）\n");
        return 0;
    }

    char *addr_str = strtok(args, " ");
    if (addr_str == NULL) {
        printf("请提供断点地址，用法: b <pc地址> [类型]\n");
        return 0;
    }

    char *endptr;
    uint32_t pc_addr = strtol(addr_str, &endptr, 16);
    if (*endptr != '\0' || addr_str == endptr) {
        printf("无效的地址格式: %s，请使用十六进制（如0x80000000）\n", addr_str);
        return 0;
    }

    char *type_arg = strtok(NULL, " ");
    BreakpointType type = BP_PERMANENT;
    if (type_arg != NULL) {
        if (strcmp(type_arg, "oneshot") == 0) {
            type = BP_ONESHOT;
        } else if (strcmp(type_arg, "permanent") != 0) {
            printf("无效的断点类型: %s，支持: permanent/oneshot\n", type_arg);
            return 0;
        }
    }

    add_breakpoint(pc_addr, type);
    return 0;
}

static int cmd_del_breakpoint(char *args) {
    if (args == NULL) {
        printf("用法: del <编号>（删除指定断点） | del all（删除所有断点）\n");
        return 0;
    }

    if (strcmp(args, "all") == 0) {
        breakpoint_count = 0;
        printf("已删除所有断点\n");
        return 0;
    }

    int idx = atoi(args) - 1;
    if (idx < 0 || idx >= breakpoint_count) {
        printf("无效的断点编号: %s，当前共有 %d 个断点\n", args, breakpoint_count);
        return 0;
    }

    for (int i = idx; i < breakpoint_count - 1; i++) {
        breakpoints[i] = breakpoints[i + 1];
    }
    breakpoint_count--;
    printf("已删除断点编号: %d\n", idx + 1);
    return 0;
}

static int cmd_enable_breakpoint(char *args) {
    if (args == NULL) {
        printf("用法: enable <断点编号>\n");
        return 0;
    }

    int idx = atoi(args) - 1;
    if (idx < 0 || idx >= breakpoint_count) {
        printf("无效的断点编号: %s，当前共有 %d 个断点\n", args, breakpoint_count);
        return 0;
    }

    if (breakpoints[idx].enabled) {
        printf("断点 %d 已处于启用状态\n", idx + 1);
    } else {
        breakpoints[idx].enabled = true;
        printf("已启用断点 %d（地址: 0x%08x）\n", idx + 1, breakpoints[idx].pc);
    }
    return 0;
}

static int cmd_disable_breakpoint(char *args) {
    if (args == NULL) {
        printf("用法: disable <断点编号>\n");
        return 0;
    }

    int idx = atoi(args) - 1;
    if (idx < 0 || idx >= breakpoint_count) {
        printf("无效的断点编号: %s，当前共有 %d 个断点\n", args, breakpoint_count);
        return 0;
    }

    if (!breakpoints[idx].enabled) {
        printf("断点 %d 已处于禁用状态\n", idx + 1);
    } else {
        breakpoints[idx].enabled = false;
        printf("已禁用断点 %d（地址: 0x%08x）\n", idx + 1, breakpoints[idx].pc);
    }
    return 0;
}

// sdb_mainloop中累加步数并处理未达断点情况
void sdb_mainloop() {
    for (char *str; (str = rl_gets()) != NULL; ) {
        char *str_end = str + strlen(str);
        char *cmd = strtok(str, " ");
        if (cmd == NULL) { continue; }
        char *args = cmd + strlen(cmd) + 1;
        if (args >= str_end) { args = NULL; }

        int i;
        for (i = 0; i < NR_CMD; i++) {
            if (strcmp(cmd, cmd_table[i].name) == 0) {
                cmd_table[i].handler(args);
                break;
            }
        }
        if (i == NR_CMD) {
            printf("未知命令: %s，输入 help 查看支持的命令\n", cmd);
        }

        if (npc_state.state == NPC_RUNNING) {
            int cycles = 0;
            bool breakpoint_hit = false;

            while (!ctx->gotFinish() && npc_state.state != NPC_END) {
                uint32_t current_pc_before_exec = cpu_state.pc;

#ifdef ENABLE_DIFFTEST
                prepare_npc_before_state(npc_before, ::is_nemu, ::n_pc, cpu_state.pc, cpu_state.gpr);
#endif // ENABLE_DIFFTEST

                top->reset = (cycles < 1);
                top->clk = 0;
                ctx->timeInc(1);
                top->eval();
                top->clk = 1;
                ctx->timeInc(1);
                top->eval();
                cycles++;
                update_virtual_time();
                update_rtc();
                ::is_nemu++;

                // 累加总执行步数
                total_steps++;

                cpu_state.pc = ::n_pc;

#ifdef ENABLE_DIFFTEST
                memcpy(npc.gpr, cpu_state.gpr, sizeof(npc.gpr));
                npc.pc = cpu_state.pc;
                npc.csr = cpu_state.csr;

                sync_npc_to_nemu(npc_before);
                execute_nemu_step();
                get_nemu_result(ref_nemu);
                
                if (check_diff_result(npc, ref_nemu, ::is_nemu, current_pc_before_exec)) {
                    break;
                }
#endif // ENABLE_DIFFTEST

                if (check_breakpoint(cpu_state.pc)) {
                    breakpoint_hit = true;
                    npc_state.state = NPC_STOP;
                    break;
                }
            }

            // 处理未达断点的情况
            if (is_counting_for_break && !breakpoint_hit) {
                if (npc_state.state == NPC_END) {
                    printf("\n\033[1;33m程序已结束，未到达指定断点\033[0m\n");
                } else if (npc_state.state == NPC_ABORT) {
                    printf("\n\033[1;31m程序异常终止，未到达指定断点\033[0m\n");
                }
                is_counting_for_break = false; // 重置计数状态
            }

            if(npc_state.state != NPC_ABORT) printf("已暂停，等待命令...\n");
            if (npc_state.state != NPC_END) {
                npc_state.state = NPC_STOP;
            }
        }

        if (npc_state.state == NPC_QUIT) {
            break;
        }
    }
}

void init_vga();
// 在main函数中替换原有逻辑，确保批处理模式完全自动执行
int main(int argc, char** argv) {
    welcome();
        printf("chenpang91\n");
        init_vga();
        //printf("chenpang666\n");
#ifdef ENABLE_DIFFTEST
    void* handle = dlopen("/home/ysyxbby/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so",
                      RTLD_LAZY);
    if (!handle) { printf("dlopen failed\n"); return 1; }
    difftest_init  = (difftest_init_t)dlsym(handle, "difftest_init");
    difftest_memcpy = (difftest_memcpy_t)dlsym(handle, "difftest_memcpy");
    difftest_regcpy = (difftest_regcpy_t)dlsym(handle, "difftest_regcpy");
    difftest_exec  = (difftest_exec_t)dlsym(handle, "difftest_exec");

    difftest_init(0);
    riscv32_CPU_state ref;
    difftest_regcpy(&ref, false);
#endif // ENABLE_DIFFTEST
    
    time(&rtc_timep);
    rtc_tm = gmtime(&rtc_timep);
    const char* rom_base = "/home/ysyxbby/ysyx-workbench/npc/rom/text";
    if (!init_rom(rom_base)) return 1;
    if (!init_ram(rom_base)) return 1;

#ifdef ENABLE_DIFFTEST
    static bool first = true;
    if (first) {
        difftest_memcpy(0x80000000, rom, sizeof(rom), true);
        first = false;
    }
#endif // ENABLE_DIFFTEST

    memset(&cpu_state, 0, sizeof(riscv32_CPU_state));
    cpu_state.pc = 0x80000000;
    
    ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    top = new Vtop(ctx);
    npc_state.state = NPC_STOP;

#ifdef BATCH_MODE
    // 批处理模式：完全自动执行，无需任何手动输入
    printf("\033[1;34m[批处理模式] 自动执行程序...\033[0m\n");
    
    // 直接开始执行，无需等待用户输入"c"
    npc_state.state = NPC_RUNNING;
    cpu_exec(UINT64_MAX);  // 执行最大可能的步数
    
    // 输出执行结果
    printf("\n\033[1;34m[批处理模式] 执行完成\033[0m\n");
    printf("总执行步数: %" PRIu64 "\n", total_steps);
    printf("最终PC: 0x%08x\n", cpu_state.pc);
    
    if (npc_state.state == NPC_END) {
        printf("\033[1;32m[批处理模式] 程序正常结束\033[0m\n");
    } else {
        printf("\033[1;31m[批处理模式] 程序异常终止\033[0m\n");
    }
#else
    // 交互模式：进入命令行交互
    sdb_mainloop();
#endif

    if (npc_state.state == NPC_QUIT) {
        printf("程序已退出。\n");
    }
    delete top;
    delete ctx;
    return 0;
}
    
