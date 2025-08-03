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
#include <cpu/decode.h>
#include <cpu/ifetch.h>
#include <memory/paddr.h>
#include <difftest-def.h>

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    // 从 DUT（NPC）拷贝到 REF（NEMU）
    for (size_t i = 0; i < n; i++) {
      paddr_write(addr + i, 1, ((uint8_t *)buf)[i]);
    }
  } else { // DIFFTEST_TO_DUT
    // 从 REF（NEMU）拷贝到 DUT（NPC）
    for (size_t i = 0; i < n; i++) {
      ((uint8_t *)buf)[i] = paddr_read(addr + i, 1);
    }
  }
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  CPU_state *npc_cpu = (CPU_state *)dut;
  if (direction == DIFFTEST_TO_REF) {
    // 从 DUT（NPC）拷贝寄存器到 REF（NEMU）
    memcpy(&cpu.gpr, &npc_cpu->gpr, sizeof(cpu.gpr));
    cpu.pc = npc_cpu->pc;
  } else { // DIFFTEST_TO_DUT
    // 从 REF（NEMU）拷贝寄存器到 DUT（NPC）
    memcpy(&npc_cpu->gpr, &cpu.gpr, sizeof(cpu.gpr));
    npc_cpu->pc = cpu.pc;
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  Decode s;
  for (uint64_t i = 0; i < n; i++) {
    s.pc = cpu.pc; // 设置当前 PC
    s.snpc = s.pc + 4; // 顺序下一 PC
    isa_exec_once(&s); // 执行一条指令
    cpu.pc = s.dnpc; // 更新 NEMU 的 PC
  }
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0); // 按任务要求，暂不实现
}
  void init_mem();
__EXPORT void difftest_init(int port) {
  // 初始化 NEMU 的内存和 ISA
  init_mem();
  init_isa();
}