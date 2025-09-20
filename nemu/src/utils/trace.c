#include "../../include/common.h"
#include "../../include/symbol.h"
#include "../../include/isa.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#define MAX_IRINGBUF 16

static int call_depth = 0;

typedef struct {
  word_t pc;
  uint32_t inst;
} ItraceNode;


ItraceNode iringbuf[MAX_IRINGBUF];
int p_cur = 0;
bool full = false;

void trace_inst(uint32_t pc, uint32_t inst) {
  iringbuf[p_cur].pc = pc;
  iringbuf[p_cur].inst = inst;
  p_cur = (p_cur + 1) % MAX_IRINGBUF;
  full = full || p_cur == 0;
}

void display_inst() {
  if (!full && !p_cur) return;

  int end = p_cur;
  int i = full?p_cur:0;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  char buf[128];
  char *p;
  do {
    p = buf;
    p += sprintf(buf, "%s" FMT_WORD ": %08x ", (i+1)%MAX_IRINGBUF==end?" --> ":"     ", iringbuf[i].pc, iringbuf[i].inst);
    disassemble(p, buf+sizeof(buf)-p, iringbuf[i].pc, (uint8_t *)&iringbuf[i].inst, 4);

    if ((i+1)%MAX_IRINGBUF==end) printf(ANSI_FG_RED);
    puts(buf);
  } while ((i = (i+1)%MAX_IRINGBUF) != end);
  puts(ANSI_NONE);
}

void memory_read_dis(paddr_t addr, int len)
{
    printf(ANSI_FMT(" Read in memory: ", ANSI_FG_BLUE) FMT_PADDR "  Length: %d\n", addr, len);
}

void memory_write_dis(paddr_t addr, int len, word_t data)
{
    printf(ANSI_FMT("Write in memory: ", ANSI_FG_YELLOW) FMT_PADDR "  Length: %d   Write Data: " FMT_WORD "\n", addr, len, data);
}


// static void etrace() {
//   IFDEF(CONFIG_ETRACE, {
//     printf("\n" 
//       ANSI_FMT("[ETRACE]", ANSI_FG_YELLOW) 
//       "ecall in mepc = " FMT_WORD ", mcause = " FMT_WORD "\n",
//       cpu.csrs.mepc, cpu.csrs.mcause);
//   });
// }

void ftrace_write(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);  // 初始化可变参数列表

    // 1. 输出到终端
    vprintf(fmt, args);

    // 2. 如需同时输出到日志文件，可取消以下注释
    // 需确保有全局日志文件指针，如: extern FILE *log_file;
    // if (log_file != NULL) {
    //   vfprintf(log_file, fmt, args);
    // }

    va_end(args);  // 清理可变参数列表
}

/*
 * 函数名: find_symbol_func
 * 功能: 根据目标地址查找对应的函数符号
 * 参数:
 *   target - 要查找的目标地址
 *   exact  - 是否精确匹配（true=精确匹配地址，false=地址在函数范围内即匹配）
 * 返回值: 找到的符号在symbol_tables中的索引，未找到返回-1
 */
int find_symbol_func(paddr_t target, bool exact) {
    // 检查符号表是否存在
    if (symbol_tables == NULL || symbol_tables_size == 0) {
        return -1;
    }

    // 遍历符号表查找匹配的函数符号
    for (size_t i = 0; i < symbol_tables_size; i++) {
        const symbol_table *sym = &symbol_tables[i];
        
        // 只处理函数类型的符号
        if (ELF32_ST_TYPE(sym->info) != STT_FUNC) {
            continue;
        }

        // 跳过空名称的符号
        if (sym->name[0] == '\0') {
            continue;
        }

        // 精确匹配：目标地址等于函数起始地址
        if (exact) {
            if (sym->addr == target) {
                return (int)i;
            }
        }
        // 模糊匹配：目标地址在函数地址范围内
        else {
            if (target >= sym->addr && target < sym->addr + sym->size) {
                return (int)i;
            }
        }
    }

    // 未找到匹配的符号
    return -1;
}


void trace_func_call(paddr_t pc, paddr_t target) {
  if (symbol_tables == NULL) return;  // 修正变量名

  ++call_depth;

  if (call_depth <= 2) return; // 忽略初始化相关函数

  int i = find_symbol_func(target, true);
  ftrace_write(FMT_PADDR ": %*scall [%s@" FMT_PADDR "]\n",
    pc,
    (call_depth-3)*2, "",
    i>=0?symbol_tables[i].name:"???",  // 修正变量名
    target
  );
}

void trace_func_ret(paddr_t pc) {
  if (symbol_tables == NULL) return;  // 修正变量名
  
  if (call_depth <= 2) return;

  int i = find_symbol_func(pc, false);
  ftrace_write(FMT_PADDR ": %*sret [%s]\n",
    pc,
    (call_depth-3)*2, "",
    i>=0?symbol_tables[i].name:"???"  // 修正变量名
  );
  
  --call_depth;
}