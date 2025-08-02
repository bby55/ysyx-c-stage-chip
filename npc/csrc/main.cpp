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

// Verilator 上下文和模块全局化
static VerilatedContext* ctx = NULL;
static Vtop* top = NULL;
static bool is_reset = true;

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

extern "C" void ebreak(int exit_code) {
    if (exit_code == 0) {
        printf("[DPI] ebreak: \033[1;32m HIT GOOD TRAP \033[0m\n");
    } else {
        printf("[DPI] ebreak: \033[1;31m HIT BAD TRAP \033[0m\n");
    }
    npc_state.state = NPC_END;
}

#define ROM_SIZE 4194304
#define RAM_SIZE 4194304
static uint32_t rom[ROM_SIZE];
static uint32_t ram[RAM_SIZE];
static uint32_t pc;
static uint32_t instr;

extern "C" int rom_read(int raddr) {
    uint32_t aligned_addr = raddr & ~0x3u;
    uint32_t rom_idx = aligned_addr >> 2;
    if (rom_idx >= ROM_SIZE) {
        fprintf(stderr, "ROM越界: 0x%x\n", aligned_addr);
        return 0;
    }
    return rom[rom_idx];
}

extern "C" int pmem_read(int raddr, int valid, int pc) {
    if (raddr == SERIAL_PORT) return 0;
    if (raddr == TIMER_LO) return (uint32_t)(virtual_us & 0xFFFFFFFF);
    if (raddr == TIMER_HI) return (uint32_t)(virtual_us >> 32);
    if (raddr == RTC_SECOND) return rtc_tm->tm_sec;
    int addr = (raddr & ~0x3u) >> 2;
    return ram[addr];
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
    ram[addr] = new_val;
}

extern "C" void display(int instr, int pc) {
    ::instr = instr;
    ::pc = pc;
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

static void welcome() {
    printf("Welcome to \033[33;41mminirv\033[0m-NPC!\n");
    printf("For help, type \"help\"\n");
}

static int cmd_help(char *args);
static int cmd_q(char *args);
static int cmd_c(char *args);
static int cmd_si(char *args);

static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table[] = {
    { "help", "Display information about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NPC", cmd_q },
    { "si", "Execute the program one or more steps", cmd_si }
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
    printf("Exiting...\n");
    npc_state.state = NPC_QUIT;
    printf("状态设为 %d (NPC_QUIT)\n", npc_state.state);
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
    g_print_step = (n < MAX_INST_TO_PRINT);

    uint64_t steps = 0;
    //uint32_t last_pc = top->io_pc; // 假设 Vtop 模块有 io_pc 输出
    int cycles = 0;
    while (steps < n && !ctx->gotFinish() && npc_state.state != NPC_END) {
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
        if(n <= 10) printf("\033[1;33mPC: 0x%x\033[0m    instr:  %x\n", pc, instr);
        
    }
    is_reset = false;
    if (npc_state.state != NPC_END) {
        npc_state.state = NPC_STOP;
    }
}

static int cmd_si(char *args) {
    int i;
    if (args == NULL) {
        cpu_exec(1);
    } else {
        i = atoi(args);
        if (i <= 0) {
            printf("无效步数: %s，请提供正整数。\n", args);
            return 0;
        }
        cpu_exec(i);
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
                top->clk = 1;
                ctx->timeInc(1);
                top->eval();
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
        printf("当前状态: %d\n", npc_state.state);
    }
}

int main(int argc, char**argv) {
    welcome();

    time(&rtc_timep);
    rtc_tm = gmtime(&rtc_timep);
    const char* rom_base = "/home/ysyxbby/ysyx-workbench/npc/rom/text";
    if (!init_rom(rom_base)) return 1;
    if (!init_ram(rom_base)) return 1;
    ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    top = new Vtop(ctx);

    npc_state.state = NPC_STOP;
    sdb_mainloop();

    if (npc_state.state == NPC_QUIT) {
        printf("程序已退出。\n");
    }
    delete top;
    delete ctx;
    return 0;
}