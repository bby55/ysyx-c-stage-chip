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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
   int reg_num = ARRLEN(cpu.gpr);
  for (int i = 0; i < reg_num; i++) {
    if (ref_r->gpr[i] != cpu.gpr[i]) {
      printf("\n");
      printf("\033[1;31m----------!Difftest!----------\n\033[0m");
      printf("\033[1;31m//////////////////////////////\n\033[0m");   
      printf("\033[1;31m//  \033[0m\033[1;33mref_r->gpr[%d] = 0x%x  \033[1;31m//\033[0m\n",i,ref_r->gpr[i]);
      printf("\033[1;31m//  \033[0m\033[1;35m cpu ->gpr[%d] = 0x%x  \033[1;31m//\033[0m\n",i,cpu.gpr[i]);
      printf("\033[1;31m//////////////////////////////\n\033[0m");
      printf("\n");
      return false;
    }

  }
  if (ref_r->pc != cpu.pc) {
    printf("\n");
    printf("\033[1;31m----------!Difftest!----------\n\033[0m");
    printf("\033[1;31m//////////////////////////////\n\033[0m");   
    printf("\033[1;31m//  \033[0m\033[1;33mref_r->pc = 0x%x  \033[1;31m//\033[0m\n",ref_r->pc);
    printf("\033[1;31m//  \033[0m\033[1;35m cpu ->pc = 0x%x  \033[1;31m//\033[0m\n",cpu.pc);
    printf("\033[1;31m//////////////////////////////\n\033[0m");
    printf("\n");
    return false;
  }

  if (ref_r->csr.mstatus != cpu.csr.mstatus) {
        printf("mstatus is different! ref: 0x%08x, current: 0x%08x\n", ref_r->csr.mstatus, cpu.csr.mstatus);
        return false;
    }
    if (ref_r->csr.mtvec != cpu.csr.mcause) {
        printf("mcause is different! ref: 0x%08x, current: 0x%08x\n", ref_r->csr.mcause, cpu.csr.mcause);
        //return false;
    }
    if (ref_r->csr.mepc != cpu.csr.mepc) {
        printf("mepc is different! ref: 0x%08x, current: 0x%08x\n", ref_r->csr.mepc, cpu.csr.mepc);
        return false;
    }
    if (ref_r->csr.mcause != cpu.csr.mtvec) {
        printf("mtvec is different! ref: 0x%08x, current: 0x%08x\n", ref_r->csr.mtvec, cpu.csr.mtvec);
        return false;
    }
    return true;
}

void isa_difftest_attach() {
}
