#include <isa.h>
#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/ifetch.h>
#include <memory/paddr.h>
#include <difftest-def.h>

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    for (size_t i = 0; i < n; i++) {
      //printf("0x%x\n",((uint32_t *)buf)[i]);
      paddr_write(addr + i, 1, ((uint8_t *)buf)[i]);
    }
  } else {
    for (size_t i = 0; i < n; i++) {
      ((uint8_t *)buf)[i] = paddr_read(addr + i, 1);
    }
  }
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {

  CPU_state *npc_cpu = (CPU_state *)dut;
  if (direction == DIFFTEST_TO_REF) {
    memcpy(&cpu.gpr, &npc_cpu->gpr, sizeof(cpu.gpr));
    cpu.pc = npc_cpu->pc;
  } else {
    memcpy(&npc_cpu->gpr, &cpu.gpr, sizeof(cpu.gpr));
    npc_cpu->pc = cpu.pc;
  }
}

__EXPORT void difftest_exec(uint64_t n) {
    static int skip_count = 1; // 延缓两个周期
    Decode s;
    if (skip_count > 0) {
        Log("difftest_exec: skipping cycle %d, cpu.pc = " FMT_WORD, skip_count, cpu.pc);
        skip_count--;
        return;
    }
    for (uint64_t i = 0; i < n; i++) {
        s.pc = cpu.pc;
        printf("s%x\n",s.pc);
        s.snpc = s.pc;
        isa_exec_once(&s);
        if(s.dnpc != s.snpc){
          cpu.pc = s.dnpc;
        }
        else{
          cpu.pc = s.pc + 4;
        }
        //printf("cpu%x\n",cpu.pc);
    }
}


__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}
  void init_mem();

__EXPORT void difftest_init(int port) {
  init_mem();
  init_isa();
}