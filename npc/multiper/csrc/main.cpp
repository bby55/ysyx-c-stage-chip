#include "npc.h"
#include "welcome.h"
#include <fstream>
#include <dlfcn.h>
#include <cstdio>
#include <cinttypes>
#include "verilated.h"
#include "VysyxSoCFull.h"
#include "verilated_vcd_c.h"
#include <nvboard.h>
#ifdef ENABLE_DIFFTEST
// 全局函数指针（补充类型声明）
difftest_init_t difftest_init = NULL;
difftest_memcpy_t difftest_memcpy = NULL;
difftest_regcpy_t difftest_regcpy = NULL;
difftest_exec_t difftest_exec = NULL;
#endif

// ===================== 全局变量定义（main.cpp专属） =====================
VerilatedContext* ctx = NULL;
VysyxSoCFull* top = NULL;
VerilatedVcdC* tfp = NULL;
uint32_t reset_cycle_cnt = 0;
bool reset_finished = false;
bool is_reset = true;
NPCState npc_state = { .state = NPC_STOP };
void nvboard_bind_all_pins(VysyxSoCFull* top);
void print_performance_stats();
// 关闭波形文件函数
static void close_waveform() {
    if (tfp != NULL) {
        tfp->close();
        delete tfp; 
        tfp = NULL;
        printf("[INFO] 波形文件已关闭\n");
    }
}

#ifdef ENABLE_NVBOARD
static void nvboard_cleanup() {
    if (top != NULL) {
        nvboard_quit();
        printf("[INFO] nvboard已退出\n");
    }
}
#endif

// 主函数
int main(int argc, char** argv) {
    welcome();
#ifdef ENABLE_DIFFTEST
    // 加载NEMU动态库
    const char* nemu_so_path = "/home/ysyxbby/ysyx-workbench/nemu/build/riscv32-nemu-interpreter-so";
    void* handle = dlopen(nemu_so_path, RTLD_LAZY | RTLD_GLOBAL);
    if (!handle) { 
        fprintf(stderr, "[ERROR] dlopen failed: %s\n", dlerror()); 
        return 1; 
    }
    dlerror(); // 清空之前的错误

    // 解析差分测试函数
    difftest_init = (difftest_init_t)dlsym(handle, "difftest_init");
    char* err = dlerror();
    if (err != NULL || difftest_init == NULL) {
        fprintf(stderr, "[ERROR] dlsym difftest_init failed: %s\n", err ? err : "symbol is NULL");
        dlclose(handle);
        return 1;
    }

    difftest_memcpy = (difftest_memcpy_t)dlsym(handle, "difftest_memcpy");
    err = dlerror();
    if (err != NULL || difftest_memcpy == NULL) {
        fprintf(stderr, "[ERROR] dlsym difftest_memcpy failed: %s\n", err ? err : "symbol is NULL");
        dlclose(handle);
        return 1;
    }

    difftest_regcpy = (difftest_regcpy_t)dlsym(handle, "difftest_regcpy");
    err = dlerror();
    if (err != NULL || difftest_regcpy == NULL) {
        fprintf(stderr, "[ERROR] dlsym difftest_regcpy failed: %s\n", err ? err : "symbol is NULL");
        dlclose(handle);
        return 1;
    }

    difftest_exec = (difftest_exec_t)dlsym(handle, "difftest_exec");
    err = dlerror();
    if (err != NULL || difftest_exec == NULL) {
        fprintf(stderr, "[ERROR] dlsym difftest_exec failed: %s\n", err ? err : "symbol is NULL");
        dlclose(handle);
        return 1;
    }

    // 初始化差分测试
    if (difftest_init) {
        difftest_init(0);
    } else {
        fprintf(stderr, "[ERROR] difftest_init is NULL, cannot call\n");
        dlclose(handle);
        return 1;
    }

    // 获取初始参考状态
    riscv32_CPU_state ref;
    if (difftest_regcpy) {
        difftest_regcpy(&ref, false);
    } else {
        fprintf(stderr, "[ERROR] difftest_regcpy is NULL, cannot call\n");
        dlclose(handle);
        return 1;
    }
#endif // ENABLE_DIFFTEST

    // 初始化RTC时间
    time(&rtc_timep);
    rtc_tm = gmtime(&rtc_timep);

    // 初始化存储
    const char* mem_base = "/home/ysyxbby/ysyx-workbench/npc/rom/text";
    if (!init_selected_mem(mem_base)) return 1;

#ifdef ENABLE_DIFFTEST
    // 同步存储数据到NEMU
    static bool first = true;
    if (first) {
        #if LOAD_MEM_TYPE == LOAD_ROM
            if (difftest_memcpy) {
                difftest_memcpy(0x80000000, rom, sizeof(rom), true);
            }
        #elif LOAD_MEM_TYPE == LOAD_MROM
            if (difftest_memcpy) {
                difftest_memcpy(0x20000000, mrom, sizeof(mrom), true);
            }
        #elif LOAD_MEM_TYPE == LOAD_FLASH
            if (difftest_memcpy) {
                difftest_memcpy(0x30000000, flash, sizeof(flash), true);
            }
        #endif
        first = false;
    }
#endif 

    // 初始化CPU状态
    memset(&cpu_state, 0, sizeof(riscv32_CPU_state));
    #if LOAD_MEM_TYPE == LOAD_ROM
        cpu_state.pc = 0x80000000;
    #elif LOAD_MEM_TYPE == LOAD_MROM
        cpu_state.pc = 0x20000000;
    #elif LOAD_MEM_TYPE == LOAD_FLASH
        cpu_state.pc = 0x30000000;
    #endif

    // 初始化Verilator上下文和顶层模块
    ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    ctx->traceEverOn(true);

    // 初始化波形文件
    tfp = new VerilatedVcdC;
    top = new VysyxSoCFull(ctx);
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");
    printf("[INFO] 波形文件已创建: waveform.vcd\n");
    printf("[INFO] 波形最大周期数阈值: %lu\n", WAVE_MAX_CYCLES);

#ifdef TRACE_DISABLED
    close_waveform(); // 立即关闭，按需开启
    printf("[INFO] 波形文件已手动关闭，停止生成\n");
#endif
#ifdef ENABLE_NVBOARD
    nvboard_bind_all_pins(top);
    nvboard_init();
    printf("[INFO] nvboard已初始化\n");
    
#endif
    // 复位状态初始化
    reset_cycle_cnt = 0;
    reset_finished = false;
    wave_cycle_cnt = 0; // 初始化波形周期计数器
    wave_file_reopened = false;

    // 批处理/交互模式选择
#ifdef BATCH_MODE
    printf("\033[1;34m[批处理模式] 自动执行程序...\033[0m\n");
    npc_state.state = NPC_RUNNING;
    
    // 执行CPU核心逻辑
    cpu_exec(UINT64_MAX);
    
    // 打印执行结果
    printf("\n\033[1;34m[批处理模式] 执行完成\033[0m\n");
    printf("总执行步数: %" PRIu64 "\n", total_steps);
    printf("最终PC: 0x%08x\n", cpu_state.pc);
    
    if (npc_state.state == NPC_END) {
        printf("\033[1;32m[批处理模式] 程序正常结束\033[0m\n");
    } else {
        printf("\033[1;31m[批处理模式] 程序异常终止\033[0m\n");
    }
#else
    sdb_mainloop(); 
#endif

    // 程序退出清理
#ifdef ENABLE_DIFFTEST
    if (handle) {
        dlclose(handle); // 关闭动态库句柄
    }
#endif
    print_performance_stats();
    // 关闭波形文件
    if (tfp != NULL) {
        tfp->close();
        delete tfp;
        tfp = NULL;
    }
    #ifdef ENABLE_NVBOARD
        nvboard_cleanup();
    #endif
    // 打印退出信息
    if (npc_state.state == NPC_QUIT) {
        printf("程序已退出。\n");
    }

    // 释放资源
    delete top;
    delete ctx;
    return 0;
}