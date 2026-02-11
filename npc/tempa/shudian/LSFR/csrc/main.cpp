// 核心头文件
#include <Vqjj.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <cstdio>
#include <cstdlib>
#include <cstdint>

// 全局变量：复刻原框架风格
static VerilatedContext* ctx = nullptr;
static VerilatedVcdC* tfp = nullptr;
static Vqjj* dut = nullptr;

// 配置宏定义（可自定义）
#define WAVE_FILE_NAME "waveform.vcd"  // 波形文件名
#define TRACE_DEPTH 99                 // 波形跟踪深度（捕获所有子模块信号）
#define MAX_SIM_CYCLE 100              // 最大仿真顶层时钟周期
#define RST_HOLD_CYCLE 2               // 复位保持顶层周期数
#define SUB_CYCLE_NUM 4                // 1个顶层周期=4个子周期（核心！贴合硬件）
#define TIME_UNIT_PER_SUB 1            // 每个子周期时间戳递增单位（总周期=4*1=4）

// 单顶层时钟周期执行函数：核心重构为4个子周期，贴合硬件时序
// 功能：1个顶层周期 = 4个子周期，每个子周期对应硬件cnt2的00/01/10/11节拍
static void single_cycle() {
    // 遍历4个子周期，与硬件cnt2的4个节拍一一对应
    for (uint8_t sub = 0; sub < SUB_CYCLE_NUM; sub++) {
        // 顶层时钟翻转：保证1个顶层周期内时钟完整高低沿（不影响硬件，仅仿真时序）
        dut->clk = (sub % 2 == 0) ? 0 : 1;
        
        // 仿真核心执行：eval更新所有硬件信号（包括clk1~clk4）
        dut->eval();
        
        // 波形dump：记录当前子周期的所有硬件信号（含clk1~clk4）
        if (tfp != nullptr) {
            tfp->dump(ctx->time());
        }
        
        // 时间戳递增：4个子周期×1单位=4单位/顶层周期，频率不变
        ctx->timeInc(TIME_UNIT_PER_SUB);
    }
    // 顶层时钟最终置低：保证周期完整性
    dut->clk = 0;
    dut->eval();
    if (tfp != nullptr) {
        tfp->dump(ctx->time());
    }
    ctx->timeInc(0); // 无时间增量，仅补全波形
}

// 波形初始化函数：开启跟踪并绑定硬件模块
// 波形初始化函数：开启跟踪并绑定硬件模块（修复open()返回值判断错误）
static void wave_init() {
    ctx->traceEverOn(true);
    tfp = new VerilatedVcdC;
    dut->trace(tfp, TRACE_DEPTH); // 直接跟踪硬件所有信号（含clk1~clk4）
    
    // 直接打开波形文件，VerilatedVcdC::open()返回void，无需判断返回值
    tfp->open(WAVE_FILE_NAME);
    printf("[INFO] 波形文件初始化成功：%s\n", WAVE_FILE_NAME);
}
// 复位初始化函数：高电平复位，保持指定顶层周期数
static void reset_init() {
    printf("[INFO] 开始高电平复位，保持%u个顶层时钟周期\n", RST_HOLD_CYCLE);
    dut->rst_n = 1; // 拉高新电平复位
    for (uint64_t i = 0; i < RST_HOLD_CYCLE; i++) {
        single_cycle(); // 复位期间正常执行顶层周期，确保硬件初始化
    }
    dut->rst_n = 0; // 拉低释放复位，进入工作状态
    printf("[INFO] 复位完成，电路进入正常工作状态\n");
}

// 波形清理函数：释放资源，避免文件损坏
static void wave_cleanup() {
    if (tfp != nullptr) {
        tfp->close();
        delete tfp;
        tfp = nullptr;
        printf("[INFO] 波形文件已关闭，资源释放完成\n");
    }
}

// 主函数：硬件-仿真时序统一，完整仿真流程
int main(int argc, char** argv) {
    // 1. 初始化仿真上下文
    ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);

    // 2. 创建硬件顶层模块实例
    dut = new Vqjj(ctx);

    // 3. 初始化波形跟踪（直接跟踪硬件所有信号）
    wave_init();

    // 4. 执行高电平复位，完成硬件寄存器初始化
    reset_init();

    // 5. 主仿真循环：执行指定数量的顶层时钟周期
    printf("[INFO] 开始仿真，共%u个顶层时钟周期\n", MAX_SIM_CYCLE);
    for (uint64_t cycle = 0; cycle < MAX_SIM_CYCLE; cycle++) {
        single_cycle(); // 每个循环执行1个顶层周期（含4个子周期）
        if (ctx->gotFinish()) break; // 响应Verilator结束信号
    }
    printf("[INFO] 仿真执行完成，总顶层时钟周期：%llu\n", (unsigned long long)MAX_SIM_CYCLE);

    // 6. 资源清理：波形→模块→上下文
    wave_cleanup();
    delete dut;
    delete ctx;

    return EXIT_SUCCESS;
}