#ifndef __SYMBOL_H__
#define __SYMBOL_H__

#include <stdint.h>
#include <stddef.h>

// 结构体定义
typedef struct {
    char name[64];
    uint32_t addr;
    unsigned char info;
    uint32_t size;
} symbol_table;

// 全局变量声明（用 extern 表示“在其他文件中定义”）
extern symbol_table *symbol_tables;
extern size_t symbol_tables_size;

// 函数声明（若其他文件需调用 parse_elf）
void analysis_elf(const char *elf_file);

#endif  // __SYMBOL_H__