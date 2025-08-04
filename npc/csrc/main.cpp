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
#include <dlfcn.h>

// 定义函数指针类型
typedef void (*difftest_init_t)(int);
typedef void (*difftest_memcpy_t)(uint64_t, void*, size_t, bool);
typedef void (*difftest_regcpy_t)(void*, bool);
typedef void (*difftest_exec_t)(uint64_t);

// 定义全局函数指针
difftest_init_t difftest_init;
difftest_memcpy_t difftest_memcpy;
difftest_regcpy_t difftest_regcpy;
difftest_exec_t difftest_exec;

struct CPUState {
    uint32_t gpr[32];
    uint32_t pc;
} __attribute__((packed));

#define DEVICE_BASE 0x20000000
#define SERIAL_PORT (DEVICE_BASE + 0x00003f8)
#define TIMER_LO    (DEVICE_BASE + 0x0000048)
#define TIMER_HI    (DEVICE_BASE + 0x000004c)
#define RTC_SECOND  (DEVICE_BASE + 0x0000074)

static struct tm *rtc_tm;
static time_t rtc_timep;
static uint64_t virtual_us = 0;
static uint32_t cycle_counter = 0;
static const uint32_t CYCLES_PER_US = 13;
static VerilatedVcdC* tfp = NULL;

// Verilator 上下文和模块全局化
static VerilatedContext* ctx = NULL;
static Vtop* top = NULL;
static bool is_reset = true;
static bool is_mtrace = false; // 默认关闭mtrace

#define ROM_SIZE 4194304
#define RAM_SIZE 4194304
static uint32_t rom[ROM_SIZE];
static uint32_t ram[RAM_SIZE];
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
static uint32_t ref[32];
static uint32_t pc;
static uint32_t npc;
static uint32_t instr;
static int is_print = 0;

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

void putch(int c) {
    *(volatile uint8_t *)SERIAL_PORT = c & 0xff;
}


extern "C" void ebreak(int exit_code, int exit_pc) {
    if (tfp != NULL) {
        tfp->close();
        delete tfp;
    }
    if (exit_code == 0) {
        printf("Exit PC: %x\n", exit_pc);
        printf("[DPI] ebreak: \033[1;32m HIT GOOD TRAP \033[0m\n");        
    } else {
        printf("Exit PC: %x\n", exit_pc);
        printf("[DPI] ebreak: \033[1;31m HIT BAD TRAP \033[0m\n");
    }
    npc_state.state = NPC_END;
    exit(0);
    print_iringbuf();
}



// 环形缓冲区
#define IRINGBUF_SIZE 16
static InstTrace iringbuf[IRINGBUF_SIZE];
static int iringbuf_idx = 0;
static int iringbuf_count = 0;

extern "C" int rom_read(int raddr) {
    uint32_t aligned_addr = raddr & ~0x3u;
    uint32_t rom_idx = aligned_addr >> 2;
    if (rom_idx >= ROM_SIZE) {
        fprintf(stderr, "ROM越界: 0x%x\n", aligned_addr);
        return 0;
    }
    return rom[rom_idx];
}

extern "C" int pmem_read(int raddr, int valid) {

    uint32_t data = 0;
    if (raddr == SERIAL_PORT) data = 0;
    if (raddr == TIMER_LO) data = (uint32_t)(virtual_us & 0xFFFFFFFF);
    if (raddr == TIMER_HI) data = (uint32_t)(virtual_us >> 32);
    if (raddr == RTC_SECOND) data = rtc_tm->tm_sec;
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
    if (waddr == TIMER_LO || waddr == TIMER_HI) return;
    int addr = (waddr & ~0x3u) >> 2;
    uint32_t new_val = ram[addr];
    if (wmask == 0x1) new_val = (new_val & ~0xFF) | (wdata & 0xFF);
    else if (wmask == 0x2) new_val = (new_val & ~0xFF00) | (wdata & 0xFF00);
    else if (wmask == 0x4) new_val = (new_val & ~0xFF0000) | (wdata & 0xFF0000);
    else if (wmask == 0x8) new_val = (new_val & ~0xFF000000) | (wdata & 0xFF000000);
    else new_val = wdata;
    if(is_mtrace) printf("\033[1;32mMtrace: 成功在地址: 0x%x 存入数据 0x%x\n\033[0m", waddr+0x80000000, new_val);
    ram[addr] = new_val;
}

extern "C" void display(int instr, int pc, int npc) {
    ::instr = instr;
    ::pc = pc;
    ::npc = npc;
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
    ::ref[0] = rf0;
    ::ref[1] = rf1;
    ::ref[2] = rf2;
    ::ref[3] = rf3;
    ::ref[4] = rf4;
    ::ref[5] = rf5;
    ::ref[6] = rf6;
    ::ref[7] = rf7;
    ::ref[8] = rf8;
    ::ref[9] = rf9;
    ::ref[10] = rf10;
    ::ref[11] = rf11;
    ::ref[12] = rf12;
    ::ref[13] = rf13;
    ::ref[14] = rf14;
    ::ref[15] = rf15;
    ::ref[16] = rf16;
    ::ref[17] = rf17;
    ::ref[18] = rf18;
    ::ref[19] = rf19;
    ::ref[20] = rf20;
    ::ref[21] = rf21;
    ::ref[22] = rf22;
    ::ref[23] = rf23;
    ::ref[24] = rf24;
    ::ref[25] = rf25;
    ::ref[26] = rf26;
    ::ref[27] = rf27;
    ::ref[28] = rf28;
    ::ref[29] = rf29;
    ::ref[30] = rf30;
    ::ref[31] = rf31;
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
                printf("\033[1;32m%-8s\033[0m  0x%-10.8x  ", regs[j], ref[j]);
            } else {
                printf("%-8s  0x%-10.8x  ", regs[j], ref[j]);
            }
        }
        printf("\n");
    }
    printf("---------------------------------------------------------------------------------------------\n");
    printf("\033[1;33mPC:       0x%-10.8x\033[0m\n", npc);
}

// 反汇编函数
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
        case 0x33: // R-type
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
        case 0x13: // I-type (运算)
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
        case 0x03: // I-type (加载)
            switch (funct3) {
                case 0x0: snprintf(disasm, 64, "lb    %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x1: snprintf(disasm, 64, "lh    %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x2: snprintf(disasm, 64, "lw    %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x4: snprintf(disasm, 64, "lbu   %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x5: snprintf(disasm, 64, "lhu   %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                default: snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x23: // S-type
            switch (funct3) {
                case 0x0: snprintf(disasm, 64, "sb    %s, %d(%s)", regs[rs2], imm_s, regs[rs1]); break;
                case 0x1: snprintf(disasm, 64, "sh    %s, %d(%s)", regs[rs2], imm_s, regs[rs1]); break;
                case 0x2: snprintf(disasm, 64, "sw    %s, %d(%s)", regs[rs2], imm_s, regs[rs1]); break;
                default: snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x63: // B-type
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
        case 0x37: // U-type (lui)
            snprintf(disasm, 64, "lui   %s, 0x%x", regs[rd], imm_u >> 12); break;
        case 0x17: // U-type (auipc)
            snprintf(disasm, 64, "auipc %s, 0x%x", regs[rd], imm_u >> 12); break;
        case 0x6F: // J-type (jal)
            snprintf(disasm, 64, "jal   %s, %d", regs[rd], imm_j); break;
        case 0x67: // I-type (jalr)
            if (funct3 == 0x0) {
                if (inst == 0x00008067) snprintf(disasm, 64, "ret");
                else snprintf(disasm, 64, "jalr  %s, %s, %d", regs[rd], regs[rs1], imm_i);
            } else {
                snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x73: // 系统指令
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

static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table[] = {
    { "help", "Display information about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NPC", cmd_q },
    { "si", "Execute the program one or more steps", cmd_si },
    { "info", "Printf the reg and pc", cmd_info },
    { "x", "scan the pmem", cmd_x },
    { "itrace", "Print the instruction ring buffer", cmd_itrace },
    { "mtrace", "Print the memory trace", cmd_mtrace}
};

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
    char *arg = strtok(NULL, " ");
    int i;
    if (arg == NULL) {
        for (i = 0; i < NR_CMD; i++) {
            printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    } else {
        for (i = 0; i < NR_CMD; i++) {
            if (strcmp(arg, cmd_table[i].name) == 0) {
                printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
        printf("Unknown command '%s'\n", arg);
    }
    return 0;
}

static int cmd_q(char *args) {
    npc_state.state = NPC_QUIT;
    return -1;
}

static int cmd_c(char *args) {
    npc_state.state = NPC_RUNNING;
    return 0;
}

static bool g_print_step = false;
#define MAX_INST_TO_PRINT 10

void cpu_exec(uint64_t n) {
    if (npc_state.state == NPC_END || npc_state.state == NPC_ABORT || npc_state.state == NPC_QUIT) {
        printf("程序执行已结束。请退出 NEMU 并重新运行。\n");
        return;
    }
    npc_state.state = NPC_RUNNING;
    g_print_step = (n <= MAX_INST_TO_PRINT && is_print);

    uint64_t steps = 0;
    int cycles = 0;
    while (steps < n && !ctx->gotFinish() && npc_state.state != NPC_END) {
        top->reset = is_reset && (cycles < 1);
        top->clk = 0;
        ctx->timeInc(1);
        top->eval();
        if (tfp != NULL) tfp->dump(ctx->time());
        top->clk = 1;
        ctx->timeInc(1);
        top->eval();
        if (tfp != NULL) tfp->dump(ctx->time());
        cycles++;
        steps++;
        update_virtual_time();
        update_rtc();

        CPUState npc;
        for (int i = 0; i < 32; i++) {
            npc.gpr[i] = ref[i];
        }
        npc.pc = pc;
        printf("[DEBUG] npc addr = %p, size = %zu\n", &npc, sizeof(npc));
        printf("sizeof(CPUState) = %zu\n", sizeof(CPUState));
        difftest_regcpy(&npc, true);

        if (g_print_step) {
            const char* disasm = disassemble(instr);
            printf("\033[1;33mPC: 0x%x\033[0m    \033[1;34minstr:  0x%x  %s\033[0m\n", pc, instr, disasm);
            free((void*)disasm);
        }

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
        printf("Please input 'info r'\n");
        return 0;
    }
    if (strcmp(args, "r") == 0) {
        printf_ref();
    }
    return 0;
}

static int cmd_x(char *args) {
    char *arg1 = strtok(NULL, " ");
    if (arg1 == NULL) {
        printf("Usage: x N EXPR\n");
        return 0;
    }
    char *arg2 = strtok(NULL, " ");
    if (arg2 == NULL) {
        printf("Usage: x N EXPR\n");
        return 0;
    }
    char *endptr1;
    u_int32_t n = strtol(arg1, &endptr1, 0);
    u_int32_t expr = strtol(arg2, NULL, 16);

    if (*endptr1 != '\0') {
        printf("\033[1;31m无效地址格式: %s（十六进制需以0x开头）\033[0m\n", arg1);
        return 0;
    }
    if (n < 0x80000000 || n >= 0x90000000) {
        printf("\033[1;31m地址 0x%08x 超出RAM范围(0x80000000 ~ 0x8FFFFFFF)!\033[0m\n", n);
        return 0;
    }

    printf("\033[1;34m=======内存扫描=======\033[0m\n");
    printf("----------------------\n");
    printf("%-10s    %-10s\n", 
           "地址", "数值");
    printf("----------------------\n");

    for (int i = 0; i < expr; i++) {
        uint32_t address = n + i * 4 ;
        uint32_t data = pmem_read(address-0x80000000, 0);
        printf("0x%08x  0x%08x\n", address, data);
    }

    printf("----------------------\n");
    return 0;
}

static int cmd_itrace(char *args) {
    print_iringbuf();
    return 0;
}

static int cmd_mtrace(char *args){
    if(args == NULL){
        printf("Please input 'mtrace on/off' \n");
        return 0;
    }
    if(strcmp(args, "on") == 0){
        is_mtrace = true;
        printf("Mtrace is successfully turned on\n");
    }
    else if(strcmp(args, "off") == 0){
        is_mtrace = false;
        printf("Mtrace is successfully turned off\n");
    }
    return 0;
}

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
            printf("未知命令: %s\n", cmd);
        }

        if (npc_state.state == NPC_RUNNING) {
            int cycles = 0;
            while (!ctx->gotFinish() && npc_state.state != NPC_END) {
                top->reset = (cycles < 1);
                top->clk = 0;
                ctx->timeInc(1);
                top->eval();
                if (tfp != NULL) tfp->dump(ctx->time());
                top->clk = 1;
                ctx->timeInc(1);
                top->eval();
                if (tfp != NULL) tfp->dump(ctx->time());
                cycles++;
                update_virtual_time();
                update_rtc();
            }
            printf("仿真完成，返回命令提示符。\n");
            if (npc_state.state != NPC_END) {
                npc_state.state = NPC_STOP;
            }
        }

        if (npc_state.state == NPC_QUIT) {
            break;
        }
    }
}

int main(int argc, char** argv) {
    welcome();

    void* handle = dlopen("/home/ysyxbby/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so", RTLD_LAZY);
    if (!handle) { printf("dlopen failed\n"); return 1; }
    difftest_init_t  difftest_init  = (difftest_init_t)dlsym(handle, "difftest_init");
    difftest_memcpy_t difftest_memcpy = (difftest_memcpy_t)dlsym(handle, "difftest_memcpy");
    difftest_regcpy_t difftest_regcpy = (difftest_regcpy_t)dlsym(handle, "difftest_regcpy");
    difftest_exec_t  difftest_exec  = (difftest_exec_t)dlsym(handle, "difftest_exec");
    difftest_init(0);  // 初始化 NEMU
    CPUState ref;
    difftest_regcpy(&ref, false);  // 把 NEMU 的寄存器拷到 ref
    static bool first = true;
    if (first) {
    // 第一次：把整个内存同步给 NEMU
    difftest_memcpy(0x80000000, ram, sizeof(ram), true);  // true = NPC -> REF
    first = false;
    }

    time(&rtc_timep);
    rtc_tm = gmtime(&rtc_timep);
    const char* rom_base = "/home/ysyxbby/ysyx-workbench/npc/rom/text";
    if (!init_rom(rom_base)) return 1;
    if (!init_ram(rom_base)) return 1;
    ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    tfp = new VerilatedVcdC;
    ctx->traceEverOn(true);  // 启用波形跟踪
    top = new Vtop(ctx);     // 只创建一次Vtop实例
    top->trace(tfp, 99);     // 关联波形跟踪到该实例
    tfp->open("waveform.vcd");  // 打开波形文件
    npc_state.state = NPC_STOP;
    sdb_mainloop();

    if (tfp != NULL) {
        tfp->close();
        delete tfp;
    }

    if (npc_state.state == NPC_QUIT) {
        printf("程序已退出。\n");
    }
    delete top;
    delete ctx;
    return 0;
}