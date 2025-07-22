#include "Vcpu.h"  // Verilator自动生成的顶层模块头文件（前缀V）
#include "verilated.h"
#include "verilated_vcd_c.h"  // 用于生成波形

int main(int argc, char**argv) {
    // 初始化Verilator上下文
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);

    // 实例化CPU顶层模块
    Vcpu* cpu = new Vcpu(ctx);

    // 配置波形跟踪（生成waveform.vcd，可用gtkwave查看）
    VerilatedVcdC* vcd = new VerilatedVcdC;
    ctx->traceEverOn(true);
    cpu->trace(vcd, 99);  // 跟踪深度99
    vcd->open("waveform.vcd");

    // 仿真参数
    int cycles = 0;
    const int MAX_CYCLES = 50;  // 仿真50个时钟周期

    // 仿真主循环
    while (!ctx->gotFinish() && cycles < MAX_CYCLES) {
        // 生成时钟信号（0→1→0为一个周期）
        cpu->clk = 0;
        cpu->reset = (cycles < 2);  // 前2个周期复位（高电平有效）
        ctx->timeInc(1);  // 时间+1ns
        cpu->eval();      // 评估组合逻辑
        vcd->dump(ctx->time());  // 记录波形

        cpu->clk = 1;     // 时钟高电平
        ctx->timeInc(1);
        cpu->eval();
        vcd->dump(ctx->time());

        // 打印关键信号（方便调试）
        if (cycles >= 2) {  // 复位结束后
            printf("Cycle %d: PC = 0x%08x\n", cycles, cpu->pc);
        }

        cycles++;
    }

    // 清理资源
    vcd->close();
    delete cpu;
    delete vcd;
    delete ctx;
    return 0;
}