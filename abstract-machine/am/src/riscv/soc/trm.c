#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"
#include <stdio.h>
#include <stdint.h>
#include </home/ysyxbby/ysyx-workbench/abstract-machine/am/src/riscv/soc/include/soc.h>
extern char _heap_start;
int main(const char *args);




void uart_init() {
  outb(LCR_ADDR, inb(LCR_ADDR) | 0x80);
  outb(LSB_ADDR, 0x01); 
  outb(LCR_ADDR, inb(LCR_ADDR) & 0x7f);
  outb(MSB_ADDR, 0x00); 
  outb(LCR_ADDR, 0x03);
  outb(FCR_ADDR, 0x07);
  outb(MCR_ADDR, 0x03); 
  outb(LER_ADDR, 0x00);
}


extern char _flash_start;
extern char _psram_start;
extern char _psram_end;
extern char _sdram_start;
extern char _data_lma_start;  // .data段ROM烧录起始地址
extern char _data_vma_start;  // .data段PSRAM运行起始地址
extern char _data_vma_end;    // .data段PSRAM运行结束地址
extern char _bss_vma_start;   // .bss段PSRAM起始地址
extern char _bss_vma_end;     // .bss段PSRAM结束地址
extern char _fbl_lma_start;
extern char _fbl_lma_end;
extern char _fbl_len;
extern char _sbl_lma_start;
extern char _sbl_lma_end;
extern char _sbl_lma_start;
extern char _sbl_vma_end;
extern char _sbl_len;
extern char _text_lma_start;
extern char _text_lma_end;
extern char _text_len;


#define FLASH_SIZE 0x10000000
#define FLASH_END  ((uintptr_t)&_flash_start + FLASH_SIZE)
#define PSRAM_SIZE 0x1000000
#define PSRAM_END  ((uintptr_t)&_psram_start + PSRAM_SIZE)
#define SDRAM_SIZE 0x1000000
#define SDRAM_END  ((uintptr_t)&_sdram_start + SDRAM_SIZE)

Area heap = RANGE(&_heap_start, &_psram_end);

static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER);


void putch(char ch) {
  while ((inb(LSR_ADDR) & 0x20) == 0) {}
  outb(THR_ADDR, ch);
}


void halt(int code) {
    asm volatile("mv a0, %0; ebreak" : : "r"(code));
    while(1){}
}


void _trm_init() {
  // const char *src = &_data_lma_start;
  // char *dst = &_data_vma_start;
  // if (dst < &_data_vma_end) {
  //   while (dst < &_data_vma_end) *dst++ = *src++;
  // } 

  // dst = &_bss_vma_start;
  // while (dst < &_bss_vma_end) {
  //   *dst++ = 0;
  // }

  uart_init();
  // uint32_t mvendorid;
  // uint32_t marchid;
  // asm volatile ("csrr %0, 0xf11" : "=r"(mvendorid));
  // asm volatile ("csrr %0, 0xf12" : "=r"(marchid));
  // printf("vendor: %d, arch: ysyx_%x\n", mvendorid, marchid);
  int ret = main(mainargs);
  halt(ret);
}