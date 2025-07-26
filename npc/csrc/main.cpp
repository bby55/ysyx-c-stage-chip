#include "Vtop.h"  // Verilator自动生成的顶层模块头文件（前缀V）
#include "verilated.h"
#include "verilated_vcd_c.h"  // 用于生成波形
#include <svdpi.h>  // DPI-C头文件
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
#include <fstream>   
#include <iostream> 

extern "C" void ebreak() {
    printf("[DPI] ebreak instruction detected! \033[32m HIT GOOD TRAP. \033[0m\n");
    Verilated::gotFinish(true);  // 通知Verilator终止仿真
}

#define ROM_SIZE 4194304  // 只需要存储6条指令，简化大小
static uint32_t rom[ROM_SIZE];/* = {
    0x800011b7,  // rom[0]
    0x12345237,  // rom[1]
    0x4d200213,  // rom[2]
    0xfe418ea3,  // rom[3]
    0xffd1c283,  // rom[4]
    0x00028513,  // rom[5]
    0x00000073   // rom[6]
};
*/

extern "C" int rom_read(int raddr) {
    uint32_t aligned_addr = raddr & ~0x3u;
    uint32_t rom_idx = aligned_addr >> 2;

    if (rom_idx >= ROM_SIZE) {
        fprintf(stderr, "ROM读取越界：地址0x%x → 索引%u（最大支持索引%u）\n",
               aligned_addr, rom_idx, ROM_SIZE - 1);
        return 0;q

        q

    return rom[rom_idx];  // 直接返回预初始化的值
}

static uint32_t ram[4194304];

extern "C" int pmem_read(int raddr) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回
  int addr = (raddr & ~0x3u) >> 2;
  //ram[1] = 123;
  return ram[addr];
}


extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  int addr = (waddr & ~0x3u) >> 2;
  uint32_t new_val = ram[addr];
  if (wmask & 0x1) {  // 第0字节（最低8位）
        new_val = (new_val & ~0xFFu) | (wdata & 0xFFu);
    }
    if (wmask & 0x2) {  // 第1字节（8-15位）
        new_val = (new_val & ~0xFF00u) | ((wdata & 0xFF00u) << 0);
    }
    if (wmask & 0x4) {  // 第2字节（16-23位）
        new_val = (new_val & ~0xFF0000u) | ((wdata & 0xFF0000u) << 0);
    }
    if (wmask & 0x8) {  // 第3字节（24-31位）
        new_val = (new_val & ~0xFF000000u) | ((wdata & 0xFF000000u) << 0);
    }

    ram[addr] = new_val;
}

bool load_rom_bin(const char* filename) {
    FILE* fp = fopen(filename, "rb");
    if (!fp) {
        perror("无法打开二进制文件");
        return false;
    }

    // 读取整个文件内容为32位整数（小端）
    size_t count = 0;
    uint32_t word;
    while (count < ROM_SIZE && fread(&word, 1, 4, fp) == 4) {
        rom[count++] = word;  // 假设主机是小端（x86_64），否则需转换
    }

    fclose(fp);

    printf("[INFO] 从二进制文件 '%s' 成功加载 %zu 条指令到 ROM\n", filename, count);
    return true;
}

// 从文本文件加载 ROM（每行一个 32 位十六进制数，如：0x12345678 或 12345678）
bool load_rom_hex(const char* filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "无法打开文本文件: " << filename << std::endl;
        return false;
    }

    std::string line;
    size_t count = 0;
    while (std::getline(file, line) && count < ROM_SIZE) {
        // 去除空白字符
        std::string cleaned;
        for (char c : line) {
            if (!isspace(c)) cleaned += c;
        }
        if (cleaned.empty() || cleaned[0] == '#') continue; // 忽略空行和注释

        // 解析十六进制
        try {
            size_t pos;
            uint32_t value = std::stoul(cleaned, &pos, 16);
            if (pos != cleaned.size()) {
                std::cerr << "解析失败（非法字符）: " << cleaned << std::endl;
                continue;
            }
            rom[count++] = value;
        } catch (...) {
            std::cerr << "无法解析: " << cleaned << std::endl;
        }
    }
    file.close();

    printf("[INFO] 从文本文件 '%s' 成功加载 %zu 条指令到 ROM\n", filename, count);
    return true;
}

// 初始化 ROM：尝试先加载 .bin，失败则加载 .txt
bool init_rom(const char* rom_file_base) {
    // 尝试 .bin
    std::string bin_file = std::string(rom_file_base) + ".bin";
    if (load_rom_bin(bin_file.c_str())) {
        return true;
    }

    // 尝试 .txt
    std::string txt_file = std::string(rom_file_base) + ".txt";
    if (load_rom_hex(txt_file.c_str())) {
        return true;
    }

    // 都失败
    std::cerr << "错误：无法加载 ROM 文件。请确保 " << bin_file << " 或 " << txt_file << " 存在。\n";
    return false;
}

int main(int argc, char**argv) {

    const char* rom_file_base = "/home/ysyxbby/ysyx-workbench/npc/rom/text";  // 文件名前缀（不含扩展名）
    if (!init_rom(rom_file_base)) {
        std::cerr << "ROM初始化失败，退出仿真。\n";
        return 1;
    }
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
    const int MAX_CYCLES = 500;  // 仿真50个时钟周期

    // 仿真主循环
    while (!ctx->gotFinish() && cycles < MAX_CYCLES) {
    // 先更新复位信号（在时钟边沿前稳定）
    top->reset = (cycles < 1);  // 提前设置复位
    
    // 时钟低电平
    top->clk = 0;
    ctx->timeInc(1);
    top->eval();
    vcd->dump(ctx->time());

    // 时钟高电平（上升沿采样）
    top->clk = 1;
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
