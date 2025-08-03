/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include <cpu/cpu.h>  // 包含cpu_exec等执行相关函数

// 假设NEMU中CPU状态通过全局变量cpu维护，定义如下（根据实际NEMU结构调整）
extern CPU_state cpu;

// 寄存器状态结构体（需与NPC侧定义一致）
struct diff_regs {
  word_t gpr[32];  // 通用寄存器（RV32默认32个）
  word_t pc;       // 程序计数器
};
void init_mem();
__EXPORT void difftest_init(int port) {
  // 初始化内存和ISA
  init_mem();
  init_isa();

  // 初始化CPU状态（重置为启动状态）
  cpu.pc = RESET_VECTOR;  // 重置PC到启动地址（通常为0x80000000）
  for (int i = 0; i < 32; i++) {
    cpu.gpr[i] = 0;  // 通用寄存器初始化为0
  }
  Log("REF initialized: pc = 0x%08x", cpu.pc);
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  struct diff_regs *regs = (struct diff_regs *)dut;

  if (direction == DIFFTEST_TO_REF) {
    // DUT -> REF：将NPC的寄存器状态同步到NEMU
    for (int i = 0; i < 32; i++) {
      cpu.gpr[i] = regs->gpr[i];  // 同步通用寄存器
    }
    cpu.pc = regs->pc;  // 同步PC
  } else {
    // REF -> DUT：将NEMU的寄存器状态同步到NPC
    for (int i = 0; i < 32; i++) {
      regs->gpr[i] = cpu.gpr[i];
    }
    regs->pc = cpu.pc;
  }
}

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    // DUT -> REF：将NPC的内存数据写入NEMU物理内存
    for (size_t i = 0; i < n; i++) {
      paddr_write(addr + i, 1, *((uint8_t *)buf + i));  // 按字节写入
    }
  } else {
    // REF -> DUT：将NEMU的内存数据读取到NPC
    for (size_t i = 0; i < n; i++) {
      *((uint8_t *)buf + i) = paddr_read(addr + i, 1);  // 按字节读取
    }
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  // 让NEMU执行n条指令（依赖NEMU的cpu_exec函数）
  cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  // 暂不实现中断功能
  assert(0 && "difftest_raise_intr not implemented");
}