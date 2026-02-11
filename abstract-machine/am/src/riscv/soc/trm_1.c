#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"
#include <stdio.h>
#include <stdint.h>

extern char _heap_start;
int main(const char *args);

#define UART_BASE 0x10000000
#define UART_RBR (UART_BASE + 0)
#define UART_THR (UART_BASE + 0)
#define UART_IER (UART_BASE + 1)
#define UART_IIR (UART_BASE + 2)
#define UART_FCR (UART_BASE + 2)
#define UART_LCR (UART_BASE + 3)
#define UART_MCR (UART_BASE + 4)
#define UART_LSR (UART_BASE + 5)
#define UART_MSR (UART_BASE + 6)
#define UART_SCR (UART_BASE + 7)


void uart_init() {
    outb(UART_LCR, 0x80);
    outb(UART_RBR, 0x36);
    outb(UART_IER, 0x00);
    outb(UART_LCR, 0x03);
    outb(UART_FCR, 0x07);
    outb(UART_MCR, 0x03);
    outb(UART_IER, 0x00);
}


extern char _mrom_start;
extern char _sram_start;
extern char _data_lma_start;  // .data段ROM烧录起始地址
extern char _data_vma_start;  // .data段SRAM运行起始地址
extern char _data_vma_end;    // .data段SRAM运行结束地址
extern char _bss_vma_start;   // .bss段SRAM起始地址
extern char _bss_vma_end;     // .bss段SRAM结束地址


#define MROM_SIZE 0x1000
#define MROM_END  ((uintptr_t)&_mrom_start + MROM_SIZE)
#define SRAM_SIZE 0x2000
#define SRAM_END  ((uintptr_t)&_sram_start + SRAM_SIZE)

Area heap = RANGE(&_heap_start, SRAM_END);

static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER);


void putch(char ch) {
  while ((inb(UART_LSR) & 0x20) == 0);  
  outb(UART_THR, ch);
}


void halt(int code) {
    asm volatile("mv a0, %0; ebreak" : : "r"(code));
    while(1){}
}


void _trm_init() {
  const char *src = &_data_lma_start;
  char *dst = &_data_vma_start;
  if (dst < &_data_vma_end) {
    while (dst < &_data_vma_end) *dst++ = *src++;
  }

  dst = &_bss_vma_start;
  while (dst < &_bss_vma_end) {
    *dst++ = 0;
  }

  uart_init();
  int ret = main(mainargs);
  halt(ret);
}