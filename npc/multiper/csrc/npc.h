#ifndef NPC_H
#define NPC_H

// 头文件引入（公共依赖，所有文件无需重复引入）
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <dlfcn.h>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <iostream>
#include <unistd.h>  // 补充unlink所需头文件
// 第三方头文件（按需引入，保证编译）
#include "VysyxSoCFull.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <svdpi.h>
#include "/home/ysyxbby/ysyx-workbench/nemu/src/isa/riscv32/include/isa-def.h"

// 编译宏定义
#define LOAD_ROM     0
#define LOAD_MROM    1
#define LOAD_FLASH   2
#define LOAD_MEM_TYPE LOAD_FLASH
// #define TRACE_DISABLED 1 
// #define ENABLE_DIFFTEST 1
// #define AUTO_RUN_ON_START 1
#define ENABLE_NVBOARD 1
// 硬件地址定义
#define DEVICE_BASE 0x20000000
#define SERIAL_PORT (DEVICE_BASE + 0x00003f8)
#define TIMER_LO    (DEVICE_BASE + 0x0000048)
#define TIMER_HI    (DEVICE_BASE + 0x000004c)
#define RTC_SECOND  (DEVICE_BASE + 0x0000074)
#define KBD_ADDR    (DEVICE_BASE + 0x0000060)
#define VGA_ADDR    (DEVICE_BASE + 0x0000100)
#define FB_ADDR     (DEVICE_BASE + 0x0100000)
#define RAM_SIZE 33554432

// 存储大小定义
#define ROM_SIZE 33554432
#define MMROM_SIZE 4096
#define FLASH_SIZE 1024*4096
#define PSRAM_SIZE 134217727

// 复位配置 
#define RESET_TOTAL_CYCLES 10  // 复位持续10个周期

// 调试相关定义
#define IRINGBUF_SIZE 16
#define MAX_INST_TO_PRINT 10
#define MAX_BREAKPOINTS 32
#define CYCLES_PER_US 13  // 每微秒对应的时钟周期数

// 断点类型枚举
typedef enum {
    BP_PERMANENT,
    BP_ONESHOT
} BreakpointType;

// NPC运行状态枚举
typedef enum {
    NPC_STOP,
    NPC_RUNNING,
    NPC_END,
    NPC_ABORT,
    NPC_QUIT
} NPCStateEnum;

// 断点结构体
typedef struct {
    uint32_t pc;
    BreakpointType type;
    bool enabled;
} Breakpoint;

// 指令追踪结构体
typedef struct {
    uint32_t pc;
    uint32_t inst;
    char disasm[64];
} InstTrace;

// NPC状态结构体
typedef struct {
    NPCStateEnum state;  // 核心成员：NPC状态
    uint64_t pc;         // 程序计数器
    bool interrupt;      // 中断标志
    uint64_t exec_steps; // 已执行步数
} NPCState;

// ===================== 全局变量声明（仅声明，不定义） =====================
// 核心硬件对象（main.cpp中定义）
extern VerilatedContext* ctx;
extern VysyxSoCFull* top;
extern VerilatedVcdC* tfp;

// 复位控制（main.cpp中定义）
extern uint32_t reset_cycle_cnt;
extern bool reset_finished;
extern bool is_reset;

// NPC运行状态（main.cpp中定义）
extern NPCState npc_state;

// CPU核心状态（cpu_exec.c中定义）
extern riscv32_CPU_state cpu_state;

// 存储数组（mem_ops.c中定义）
extern uint32_t rom[ROM_SIZE];
extern uint32_t ram[RAM_SIZE];
extern uint32_t mrom[MMROM_SIZE];
extern uint32_t flash[FLASH_SIZE];
extern uint8_t psram[PSRAM_SIZE];

// 断点管理（debug_cmds.c中定义）
extern Breakpoint breakpoints[MAX_BREAKPOINTS];
extern int breakpoint_count;

// 指令追踪（cpu_exec.c中定义）
extern InstTrace iringbuf[IRINGBUF_SIZE];
extern int iringbuf_idx;
extern int iringbuf_count;

// 步数统计（cpu_exec.c中定义）
extern uint64_t total_steps;
extern uint64_t start_step;
extern bool is_counting_for_break;

// 时间相关（utils.c中定义）
extern struct tm *rtc_tm;
extern time_t rtc_timep;
extern uint64_t virtual_us;
extern uint32_t cycle_counter;

// 调试标志（debug_cmds.c中定义）
extern bool is_mtrace;
extern int is_nemu;
extern int is_print;
extern bool g_print_step;

// 全局临时变量（DPI交互用，dpi_interface.c中定义）
extern uint32_t n_pc;
extern uint32_t instr;

// 波形控制相关（exec.c中定义）
extern const uint64_t WAVE_MAX_CYCLES;
extern uint64_t wave_total_cycles;
extern uint64_t wave_cycle_cnt;
extern bool wave_file_reopened;
extern bool wave_reset_flag;

extern uint64_t total_cycles;
// 寄存器名称数组
extern const char *regs[];

// ===================== 差分测试相关声明 =====================
#ifdef ENABLE_DIFFTEST
typedef void (*difftest_init_t)(int);
typedef void (*difftest_memcpy_t)(uint64_t, void*, size_t, bool);
typedef void (*difftest_regcpy_t)(void*, bool);
typedef void (*difftest_exec_t)(uint64_t);

extern difftest_init_t __attribute__((weak)) difftest_init;
extern difftest_memcpy_t __attribute__((weak)) difftest_memcpy;
extern difftest_regcpy_t __attribute__((weak)) difftest_regcpy;
extern difftest_exec_t __attribute__((weak)) difftest_exec;

extern riscv32_CPU_state ref_nemu;
extern riscv32_CPU_state npc_before;
extern riscv32_CPU_state npc;

void prepare_npc_before_state(riscv32_CPU_state &npc_before, int is_nemu, uint32_t n_pc, uint32_t pc, const uint32_t *gpr);
void sync_npc_to_nemu(riscv32_CPU_state &npc_before);
void execute_nemu_step();
void get_nemu_result(riscv32_CPU_state &ref_nemu);
bool check_diff_result(const riscv32_CPU_state &npc, const riscv32_CPU_state &ref_nemu, int is_nemu, uint32_t pc);
#endif // ENABLE_DIFFTEST

#ifdef ENABLE_NVBOARD
void nvboard_bind_all_pins(VysyxSoCFull* top);
#endif 

// ===================== 函数声明 =====================
// --- mem_ops.c 存储操作 ---
bool load_rom_bin(const char* filename);
bool load_mrom_bin(const char* filename);
bool load_flash_bin(const char* filename);
bool load_ram_bin(const char* filename);
bool init_rom(const char* base);
bool init_mrom(const char* base);
bool init_flash(const char* base);
bool init_ram(const char* base);
bool init_selected_mem(const char* base);

// --- dpi_interface.c DPI接口 ---
extern "C" int rom_read(int raddr);
extern "C" void flash_read(int32_t addr, int32_t *data);
extern "C" void mrom_read(int32_t addr, int32_t *data);
extern "C" int pmem_read(int raddr, int valid);
extern "C" void pmem_write(int waddr, int wdata, char wmask, int pc);
extern "C" void display(int instr, int pc, int npc, int update_en);
extern "C" void display_ref(int rf0, int rf1, int rf2, int rf3, int rf4, int rf5, int rf6, int rf7,
                            int rf8, int rf9, int rf10, int rf11, int rf12, int rf13, int rf14, int rf15);
extern "C" void ebreak(int exit_code, int exit_pc);
extern "C" void set_csr_values(int mcause, int mepc, int mstatus, int mtvec);

// --- utils.c 工具函数 ---
void putch(int c);
void update_rtc();
void update_virtual_time();
const char* disassemble(uint32_t inst);
void printf_ref();
void print_iringbuf();
void update_instruction_trace(uint32_t pc, uint32_t instr, InstTrace *iringbuf, int &iringbuf_idx, int &iringbuf_count);

// --- debug_cmds.c 调试命令 ---
char* rl_gets();
void sdb_mainloop();
bool check_breakpoint(uint32_t current_pc);
int add_breakpoint(uint32_t pc_addr, BreakpointType type);
void print_breakpoints();

// --- cpu_exec.c CPU执行 ---
void cpu_exec(uint64_t n);



#endif // NPC_H