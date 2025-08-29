#include "../../include/common.h"

#define MAX_IRINGBUF 16

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



