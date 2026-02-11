#include "npc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ==============================================
// 本模块定义的全局变量（npc.h中extern声明）
// ==============================================
uint32_t rom[ROM_SIZE] = {0};
uint32_t ram[RAM_SIZE] = {0};
uint32_t mrom[MMROM_SIZE] = {0};
uint32_t flash[FLASH_SIZE] = {0};
uint8_t psram[PSRAM_SIZE] = {0};
// ==============================================
// 存储bin文件加载函数
// ==============================================
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

bool load_mrom_bin(const char* filename) {
    FILE* fp = fopen(filename, "rb");
    if (!fp) { perror("MROM bin打开失败"); return false; }
    size_t count = 0;
    uint32_t word;
    while (count < MMROM_SIZE && fread(&word, 1, 4, fp) == 4) {
        mrom[count++] = word;
    }
    fclose(fp);
    printf("[INFO] 加载MROM: %zu条指令\n", count);
    return true;
}

bool load_flash_bin(const char* filename) {
    FILE* fp = fopen(filename, "rb");
    if (!fp) { perror("FLASH bin打开失败"); return false; }
    size_t count = 0;
    uint32_t word;
    while (count < FLASH_SIZE && fread(&word, 1, 4, fp) == 4) {
        flash[count++] = word;
    }
    fclose(fp);
    printf("[INFO] 加载FLASH: %zu条指令\n", count);
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

// ==============================================
// 存储初始化函数（拼接.bin后缀，调用对应加载函数）
// ==============================================
bool init_rom(const char* base) {
    char bin[256];
    snprintf(bin, sizeof(bin), "%s.bin", base);
    if (load_rom_bin(bin)) return true;
    fprintf(stderr, "ROM初始化失败\n");
    return false;
}

bool init_mrom(const char* base) {
    char bin[256];
    snprintf(bin, sizeof(bin), "%s.bin", base);
    if (load_mrom_bin(bin)) return true;
    fprintf(stderr, "MROM初始化失败\n");
    return false;
}

bool init_flash(const char* base) {
    char bin[256];
    snprintf(bin, sizeof(bin), "%s.bin", base);
    if (load_flash_bin(bin)) return true;
    fprintf(stderr, "FLASH初始化失败\n");
    return false;
}

bool init_ram(const char* base) {
    char bin[256];
    snprintf(bin, sizeof(bin), "%s.bin", base);
    if (load_ram_bin(bin)) return true;
    fprintf(stderr, "RAM初始化失败\n");
    return false;
}

// ==============================================
// 统一存储初始化入口（按宏选择，调用对应初始化函数）
// ==============================================
bool init_selected_mem(const char* base) {
    printf("[INFO] 选择加载存储类型: %s\n", 
           LOAD_MEM_TYPE == LOAD_ROM ? "ROM" : 
           LOAD_MEM_TYPE == LOAD_MROM ? "MROM" : "FLASH");
    #if LOAD_MEM_TYPE == LOAD_ROM
        return init_rom(base);
    #elif LOAD_MEM_TYPE == LOAD_MROM
        return init_mrom(base);
    #elif LOAD_MEM_TYPE == LOAD_FLASH
        return init_flash(base);
    #else
        fprintf(stderr, "错误：无效的存储类型宏LOAD_MEM_TYPE\n");
        return false;
    #endif
}