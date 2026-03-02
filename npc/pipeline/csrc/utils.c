#include "npc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ==============================================
// 本模块定义的全局变量（npc.h中extern声明）
// ==============================================
struct tm *rtc_tm = NULL;
time_t rtc_timep = 0;
uint64_t virtual_us = 0;
uint32_t cycle_counter = 0;

// 寄存器名称常量（全局可用）
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

// ==============================================
// 系统时间更新：RTC秒级更新
// ==============================================
void update_rtc() {
    static uint64_t last_sec = 0;
    if (virtual_us - last_sec >= 1000000) {
        time(&rtc_timep);
        rtc_tm = gmtime(&rtc_timep);
        last_sec = virtual_us;
    }
}

// ==============================================
// 虚拟时间更新：按时钟周期更新微秒
// ==============================================
void update_virtual_time() {
    cycle_counter++;
    if (cycle_counter >= CYCLES_PER_US) {
        virtual_us++;
        cycle_counter = 0;
    }
}

// ==============================================
// 寄存器状态打印：格式化输出32个通用寄存器+CSR
// ==============================================
void printf_ref() {
    printf("\033[1;34m======================================== 寄存器状态 ========================================\033[0m\n");
    printf("%-8s   %-14s  %-8s    %-14s  %-8s    %-14s  %-8s    %-14s\n",
           "名称", "值(十六进制)", "名称", "值(十六进制)", "名称", "值(十六进制)", "名称", "值(十六进制)");
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

// ==============================================
// 指令反汇编：将32位RISC-V指令转换为汇编字符串
// ==============================================
const char* disassemble(uint32_t inst) {
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
        case 0x33: // R型指令
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
        case 0x13: // I型指令
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
        case 0x03: // 加载指令
            switch (funct3) {
                case 0x0: snprintf(disasm, 64, "lb    %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x1: snprintf(disasm, 64, "lh    %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x2: snprintf(disasm, 64, "lw    %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x4: snprintf(disasm, 64, "lbu   %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                case 0x5: snprintf(disasm, 64, "lhu   %s, %d(%s)", regs[rd], imm_i, regs[rs1]); break;
                default: snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x23: // 存储指令
            switch (funct3) {
                case 0x0: snprintf(disasm, 64, "sb    %s, %d(%s)", regs[rs2], imm_s, regs[rs1]); break;
                case 0x1: snprintf(disasm, 64, "sh    %s, %d(%s)", regs[rs2], imm_s, regs[rs1]); break;
                case 0x2: snprintf(disasm, 64, "sw    %s, %d(%s)", regs[rs2], imm_s, regs[rs1]); break;
                default: snprintf(disasm, 64, "unknown");
            }
            break;
        case 0x63: // 分支指令
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
        case 0x37: snprintf(disasm, 64, "lui   %s, 0x%x", regs[rd], imm_u >> 12); break; // LUI
        case 0x17: snprintf(disasm, 64, "auipc %s, 0x%x", regs[rd], imm_u >> 12); break; // AUIPC
        case 0x6F: snprintf(disasm, 64, "jal   %s, %d", regs[rd], imm_j); break; // JAL
        case 0x67: // JALR
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
        default: snprintf(disasm, 64, "unknown");
    }
    return disasm;
}

// ==============================================
// 指令追踪打印：输出环形缓冲区中的指令执行历史
// ==============================================
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

// ==============================================
// 指令追踪更新：将指令加入环形缓冲区，实现历史记录
// ==============================================
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