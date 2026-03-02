#include "npc.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <unistd.h>  // for unlink
#include <nvboard.h>

// ===================== 全局变量定义（exec.c专属） =====================
riscv32_CPU_state cpu_state = {0};
InstTrace iringbuf[IRINGBUF_SIZE] = {0};
int iringbuf_idx = 0;
int iringbuf_count = 0;
uint64_t total_steps = 0;          // 总有效指令数
uint64_t start_step = 0;
bool is_counting_for_break = false;
uint64_t total_cycles = 0;         // 新增：总时钟周期数（关键统计量）

// 差分测试全局变量
#ifdef ENABLE_DIFFTEST
riscv32_CPU_state ref_nemu;
riscv32_CPU_state npc_before;
riscv32_CPU_state npc;
#endif // ENABLE_DIFFTEST

// 波形控制全局变量（唯一定义）
const uint64_t WAVE_MAX_CYCLES = 10000000;  // 波形最大周期数（1万）
uint64_t wave_total_cycles = 0;         // 累计波形周期数
uint64_t wave_cycle_cnt = 0;            // 兼容main.cpp的计数器
bool wave_file_reopened = false;        // 兼容main.cpp的标记
bool wave_reset_flag = false;           // 波形重置标记

// ===================== 波形控制函数 =====================
// 重置波形文件：删除旧文件，重新创建
static void reset_waveform_file() {
    if (tfp == NULL) return;

    // 1. 关闭当前波形文件
    tfp->close();
    delete tfp;
    tfp = NULL;
    // printf("[INFO] 波形周期超过%lu，关闭旧波形文件\n", WAVE_MAX_CYCLES);

    // 2. 删除旧波形文件
    if (unlink("waveform.vcd") == 0) {
        // printf("[INFO] 成功删除旧波形文件: waveform.vcd\n");
    } else {
        fprintf(stderr, "[WARNING] 删除旧波形文件失败: %m\n");
    }

    // 3. 重新初始化波形文件
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // 重新绑定顶层模块trace
    tfp->open("waveform.vcd");
    // printf("[INFO] 重新创建波形文件: waveform.vcd，从当前周期继续记录\n");

    // 4. 重置计数器
    wave_total_cycles = 0;
    wave_cycle_cnt = 0;
    wave_reset_flag = false;
    wave_file_reopened = true;
}

// 波形写入封装函数：包含周期检查
static void write_waveform_with_check(uint64_t time) {
    if (tfp == NULL) return;

    // 检查是否需要重置波形
    if (wave_total_cycles >= WAVE_MAX_CYCLES) {
        reset_waveform_file();
        return;
    }

    // 写入当前时间点的波形
    tfp->dump(time);
}

// ===================== 差分测试函数 =====================
#ifdef ENABLE_DIFFTEST
// 准备NPC执行前的基准状态
void prepare_npc_before_state(riscv32_CPU_state &npc_before, int is_nemu, uint32_t n_pc, uint32_t pc, const uint32_t *gpr) {
    if (is_nemu <= 1) {
        memset(&npc_before, 0, sizeof(riscv32_CPU_state));
        npc_before.pc = 0x30000000;
        memcpy(npc_before.gpr, gpr, sizeof(npc_before.gpr));
        npc_before.csr = cpu_state.csr;
    } else {
        memcpy(npc_before.gpr, gpr, sizeof(npc_before.gpr));
        npc_before.pc = (pc == 0) ? 0x30000000 : pc;
        npc_before.csr = cpu_state.csr;
    }
}

// 将NPC执行前状态同步到NEMU
void sync_npc_to_nemu(riscv32_CPU_state &npc_before) {
    difftest_regcpy(&npc_before, true);
}

// 让NEMU执行单步指令
void execute_nemu_step() {
    difftest_exec(1);
}

// 获取NEMU执行后的状态
void get_nemu_result(riscv32_CPU_state &ref_nemu) {
    difftest_regcpy(&ref_nemu, false);
}

// 对比NPC和NEMU的执行结果
bool check_diff_result(const riscv32_CPU_state &npc, const riscv32_CPU_state &ref_nemu, int is_nemu, uint32_t pc) {
    if (is_nemu <= 1) return false;
    bool has_error = false;

    // 检查通用寄存器
    for (int i = 0; i < 16; ++i) {
        if (npc.gpr[i] != ref_nemu.gpr[i]) {
            if (!has_error && npc.pc != 0xa0000010) {
                printf("\n❌ DiffTest FAILED at PC = 0x%08x\n", pc);
                has_error = true;
                printf("x%-2d: NPC = 0x%08x, NEMU = 0x%08x\n", i, npc.gpr[i], ref_nemu.gpr[i]);
            }
        }
    }

    // 检查PC
    if (npc.pc != ref_nemu.pc) {
        if (!has_error) {
            printf("\n❌ DiffTest FAILED at PC = 0x%08x\n", pc);
            has_error = true;
        }
        printf("PC : NPC = 0x%08x, NEMU = 0x%08x\n", npc.pc, ref_nemu.pc);
    }

    // 检查CSR寄存器
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

    // 有错误则终止执行
    if (has_error) {
        npc_state.state = NPC_ABORT;
        return true;
    }
    return false;
}
#endif // ENABLE_DIFFTEST

// ===================== CPU核心执行函数 =====================
void cpu_exec(uint64_t n) {
    // 执行前状态检查：已结束则直接返回
    if (npc_state.state == NPC_END || npc_state.state == NPC_ABORT || npc_state.state == NPC_QUIT) {
        printf("程序执行已结束。请退出 NPC 并重新运行。\n");
        return;
    }

    npc_state.state = NPC_RUNNING;
    g_print_step = (n <= MAX_INST_TO_PRINT && is_print);

    uint64_t steps = 0;                // 本轮有效指令执行步数
    int cycles = 0;                    // 本轮时钟周期数
    uint64_t remaining_steps = n;      // 剩余需要执行的有效步数

    // 初始化波形计数器
    if (wave_total_cycles == 0) {
        printf("[INFO] 波形周期控制已启用，最大周期数: %lu\n", WAVE_MAX_CYCLES);
    }

    // 主循环：复位未完成 或 未执行完指定步数
    while ((!reset_finished) || (steps < remaining_steps && !ctx->gotFinish() && npc_state.state != NPC_END)) {
        uint32_t current_pc_before_exec = cpu_state.pc;
        bool is_valid_instr = false;

        // 差分测试：准备执行前状态
#ifdef ENABLE_DIFFTEST
        prepare_npc_before_state(npc_before, ::is_nemu, ::n_pc, current_pc_before_exec, cpu_state.gpr);
#endif // ENABLE_DIFFTEST

        // 复位控制：前10个周期置1，之后置0
        if (!reset_finished) {
            top->reset = 1;
            if (reset_cycle_cnt < RESET_TOTAL_CYCLES) {
                reset_cycle_cnt++;
            } else {
                reset_finished = true;
                top->reset = 0;
            }
        } else {
            top->reset = 0;
        }

        // 模拟时钟翻转：低电平→高电平
        top->clock = 0;
        ctx->timeInc(1);
        top->eval();
        write_waveform_with_check(ctx->time());  // 写入低电平波形
        
        top->clock = 1;
        ctx->timeInc(1);
        top->eval();
        write_waveform_with_check(ctx->time());  // 写入高电平波形

        #ifdef ENABLE_NVBOARD
        nvboard_update();
        #endif
        // 时间更新和统计
        cycles++;
        total_cycles++;                // 新增：累加总周期数（全局）
        wave_total_cycles++;           // 累计波形周期数
        wave_cycle_cnt++;              // 兼容main.cpp的计数器
        update_virtual_time();
        update_rtc();
        ::is_nemu++;

        // 同步硬件PC到软件CPU状态
        cpu_state.pc = ::n_pc;

        // 有效指令判断：PC变化则为有效指令（RISC-V单步4字节）
        if (reset_finished && (cpu_state.pc != current_pc_before_exec)) {
            is_valid_instr = true;
            steps++; // 本轮有效步数+1
            total_steps++; // 新增：累加总有效指令数（全局）

            // 差分测试：执行后状态对比
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
        }

        // 调试打印：复位阶段/有效指令阶段的状态信息
        if (g_print_step) {
            const char* disasm = disassemble(::instr);
            if (!reset_finished) {
                printf("\033[1;31m[复位阶段] 周期: %d PC: 0x%x\033[0m\n", reset_cycle_cnt, current_pc_before_exec);
            } else if (is_valid_instr) {
                printf("\033[1;33mPC: 0x%x -> 0x%x    \033[1;34minstr: 0x%x  %s\033[0m\n", 
                       current_pc_before_exec, cpu_state.pc, ::instr, disasm);
            }
            free((void*)disasm);
        }

        // 指令追踪：仅有效指令加入环形缓冲区
        if (is_valid_instr) {
            update_instruction_trace(current_pc_before_exec, ::instr, iringbuf, iringbuf_idx, iringbuf_count);
        }

        // 断点检测：有效指令执行后检查是否命中
        if (reset_finished && is_valid_instr && check_breakpoint(cpu_state.pc)) {
            npc_state.state = NPC_STOP;
            printf("[INFO] 命中断点 0x%x，执行暂停\n", cpu_state.pc);
            return;
        }

        // 打印波形进度（每1000周期）
        // if (wave_total_cycles % 1000 == 0 && wave_total_cycles > 0) {
        //     printf("[INFO] 当前波形周期数: %lu/%lu\n", wave_total_cycles, WAVE_MAX_CYCLES);
        // }
    }

    // 循环结束：恢复停止状态，打印执行结果
    is_reset = false;
    if (npc_state.state != NPC_END) {
        npc_state.state = NPC_STOP;
        if (reset_finished) {
            printf("[INFO] 执行完成：共执行%lu条有效指令，总时钟周期%d，累计波形周期%lu\n", 
                   steps, cycles, wave_total_cycles);
        }
    }
}

// ===================== 性能统计函数 =====================
void print_performance_stats() {
    // 避免除零错误：如果总指令数为0，直接返回
    if (total_steps == 0) {
        // 无指令时也用蓝色提示
        printf("\n\033[1;34m[性能统计] 无有效指令执行，无法计算IPC\033[0m");
        return;
    }

    // 计算核心指标
    double ipc = (double)total_steps / total_cycles;          // IPC = 总指令数 / 总周期数
    double cycles_per_instr = (double)total_cycles / total_steps;  // 平均每条指令的周期数

    // 格式化打印（蓝色字体，保留4位小数，更易读）
    // ANSI转义序列说明：\033[1;34m 是高亮蓝色，\033[0m 恢复默认样式
    printf("\n\033[1;34m[性能统计]\033[0m");
    printf("\n\033[1;34m总有效指令数: %lu\033[0m", total_steps);
    printf("\n\033[1;34m总时钟周期数: %lu\033[0m", total_cycles);
    printf("\n\033[1;34mIPC: %.4f\033[0m", ipc);
    printf("\n\033[1;34m平均每条指令周期数: %.4f\033[0m\n", cycles_per_instr);
}