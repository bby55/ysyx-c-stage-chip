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

#define DEVICE_BASE 0x20000000
#define SERIAL_PORT (DEVICE_BASE + 0x00003f8)  // 串口地址：0xa00003f8
#define TIMER_LO    (DEVICE_BASE + 0x0000048)  // 定时器低32位
#define TIMER_HI    (DEVICE_BASE + 0x000004c)  // 定时器高32位
#define RTC_SECOND  (DEVICE_BASE + 0x0000074)  // RTC秒（供测试读取）

static struct tm *rtc_tm;
static time_t rtc_timep;

static uint64_t virtual_us = 0;
static uint32_t cycle_counter = 0;
static const uint32_t CYCLES_PER_US = 13;
void update_rtc() {
    static uint64_t last_sec = 0;
    if (virtual_us - last_sec >= 1000000) {  // 每1秒更新
        time(&rtc_timep);
        rtc_tm = gmtime(&rtc_timep);  // 获取GMT时间
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

// ebreak处理
extern "C" void ebreak(int exit_code) {
    if(exit_code == 0) {
        printf("[DPI] ebreak: \033[32m GOOD TRAP \033[0m\n");
    } else {
        printf("[DPI] ebreak: \033[31m BAD TRAP \033[0m\n");
    }
    exit(0);
}

// ROM/RAM定义与读取
#define ROM_SIZE 4194304
#define RAM_SIZE 4194304
static uint32_t rom[ROM_SIZE];
static uint32_t ram[RAM_SIZE];
extern "C" int rom_read(int raddr) {
    uint32_t aligned_addr = raddr & ~0x3u;
    uint32_t rom_idx = aligned_addr >> 2;
    if (rom_idx >= ROM_SIZE) {
        fprintf(stderr, "ROM越界: 0x%x\n", aligned_addr);
        return 0;
    }
    return rom[rom_idx];
}

// 内存/设备读取（核心修复）
extern "C" int pmem_read(int raddr, int valid, int pc) {
    if (raddr == SERIAL_PORT) {
        return 0; 
    }

    if (raddr == TIMER_LO) {
        return (uint32_t)(virtual_us & 0xFFFFFFFF);  // 低32位
    } else if (raddr == TIMER_HI) {
        return (uint32_t)(virtual_us >> 32);  // 高32位
    }
    if (raddr == RTC_SECOND) {
        return rtc_tm->tm_sec;
    }

    int addr = (raddr & ~0x3u) >> 2;
    return ram[addr];
}

extern "C" void pmem_write(int waddr, int wdata, char wmask, int pc) {
    if (waddr == SERIAL_PORT) {
        if (wmask & 0x1) {  // 最低字节有效
            putchar(wdata & 0xff);
            fflush(stdout);
        }
        return;
    }

    if (waddr == TIMER_LO || waddr == TIMER_HI) {
        return;
    }

    int addr = (waddr & ~0x3u) >> 2;
    uint32_t new_val = ram[addr];
    if (wmask == 0x1) new_val = (new_val & ~0xFF) | (wdata & 0xFF);
    else if (wmask == 0x2) new_val = (new_val & ~0xFF00) | (wdata & 0xFF00);
    else if (wmask == 0x4) new_val = (new_val & ~0xFF0000) | (wdata & 0xFF0000);
    else if (wmask == 0x8) new_val = (new_val & ~0xFF000000) | (wdata & 0xFF000000);
    else new_val = wdata;
    ram[addr] = new_val;
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

// 主函数
int main(int argc, char**argv) {
    time(&rtc_timep);
    rtc_tm = gmtime(&rtc_timep);

    // 加载ROM/RAM
    const char* rom_base = "/home/ysyxbby/ysyx-workbench/npc/rom/text";
    if (!init_rom(rom_base)) return 1;
    const char* ram_base = "/home/ysyxbby/ysyx-workbench/npc/rom/text";
    if (!init_ram(ram_base)) return 1;

    // Verilator初始化
    VerilatedContext* ctx = new VerilatedContext;
    ctx->commandArgs(argc, argv);
    Vtop* top = new Vtop(ctx);

    // 仿真主循环
    int cycles = 0;
    while (!ctx->gotFinish()) {
        update_virtual_time();  // 更新虚拟时间
        update_rtc();           // 每秒更新RTC

        // 时钟边沿
        top->reset = (cycles < 1);  // 初始复位
        top->clk = 0;
        ctx->timeInc(1);
        top->eval();

        top->clk = 1;
        ctx->timeInc(1);
        top->eval();

        cycles++;
    }

    // 清理
    delete top;
    delete ctx;
    return 0;
}