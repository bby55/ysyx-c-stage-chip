#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"
#include </home/ysyxbby/ysyx-workbench/abstract-machine/am/src/riscv/soc/include/soc.h>

static uint32_t SCREEN_WIDTH  = 640;
static uint32_t SCREEN_HEIGHT = 480;

void __am_gpu_init(){
//   uint32_t *fb = (uint32_t *)(uintptr_t)VGA_FB_ADDR;
//   for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i ++){
//     fb[i] = 0;
//   } 
//   outl(VGA_SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, 
    .has_accel = false,
    .width = SCREEN_WIDTH, 
    .height = SCREEN_HEIGHT,
    .vmemsz = SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(uint32_t)
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t x = ctl->x, y = ctl->y;
  uint32_t w = ctl->w, h = ctl->h;
  if((w==0 || h==0) && !ctl->sync) return;
  uint32_t *pixels = ctl->pixels;
  uint32_t *fb = (uint32_t *)(uintptr_t)VGA_FB_ADDR;

  for (int i = y; i < y+h; i ++){
    for(int j = x; j < x+w; j++){
      fb[i*SCREEN_WIDTH + j] = pixels[(i-y)*w+(j-x)];
    }
  }
  if(ctl->sync) {
    outl(VGA_SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
    status->ready = true;
} 