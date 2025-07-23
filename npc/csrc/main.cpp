#include "Vtop.h"  // Verilator自动生成的顶层模块头文件（前缀V）
#include "verilated.h"
#include "verilated_vcd_c.h"  // 用于生成波形

int main(int argc, char**argv) {
    // 初始化Verilator上下文
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);

    // 实例化top顶层模块
    Vtop* top = new Vtop(ctx);

    // 配置波形跟踪（生成waveform.vcd，可用gtkwave查看）
    VerilatedVcdC* vcd = new VerilatedVcdC;
    ctx->traceEverOn(true);
    top->trace(vcd, 99);  // 跟踪深度99
    vcd->open("waveform.vcd");

    // 仿真参数
    int cycles = 0;
    const int MAX_CYCLES = 50;  // 仿真50个时钟周期

    // 仿真主循环
    while (!ctx->gotFinish() && cycles < MAX_CYCLES) {
        // 生成时钟信号（0→1→0为一个周期）
        top->clk = 0;
        top->reset = (cycles < 2);  // 前2个周期复位（高电平有效）
        ctx->timeInc(1);  // 时间+1ns
        top->eval();      // 评估组合逻辑
        vcd->dump(ctx->time());  // 记录波形

        top->clk = 1;     // 时钟高电平
        ctx->timeInc(1);
        top->eval();
        vcd->dump(ctx->time());

        cycles++;
    }

    // 清理资源
    vcd->close();
    delete top;
    delete vcd;
    delete ctx;
    return 0;
}