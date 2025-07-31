#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {

}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t wh_data = inl(VGACTL_ADDR);
  uint32_t width = wh_data & 0xFFFF;
  uint32_t height = wh_data >> 16;
  uint32_t vmemsz = width*height*4;

  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = vmemsz
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t screen_wid = 400;
  uint32_t x = ctl->x;
  uint32_t y = ctl->y;
  uint32_t w = ctl->w;
  uint32_t h = ctl->h;
  uint32_t *pixels = ctl->pixels;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (int i = y; i < y+h; i++) {
    for (int j = x; j < x+w; j++) {
      fb[screen_wid*i+j] = pixels[w*(i-y)+(j-x)];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
