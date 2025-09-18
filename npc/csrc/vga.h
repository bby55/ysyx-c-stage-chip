#include "autoconf.h"
#include "common.h"
#include "port-io.h"
#include <SDL2/SDL.h>

#define SCREEN_W (MUXDEF(CONFIG_VGA_SIZE_800x600, 800, 400))
#define SCREEN_H (MUXDEF(CONFIG_VGA_SIZE_800x600, 600, 300))

static void *vmem = NULL;
static uint32_t *vgactl_port_base = NULL;
static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

#define IO_SPACE_MAX (32 * 1024 * 1024)
static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;
#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-NEMU", str(__GUEST_ISA__));
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
      SCREEN_H * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
  SDL_RenderPresent(renderer);
}

static uint32_t screen_width() {
  return MUXDEF(CONFIG_TARGET_AM, io_read(AM_GPU_CONFIG).width, SCREEN_W);
}

static uint32_t screen_height() {
  return MUXDEF(CONFIG_TARGET_AM, io_read(AM_GPU_CONFIG).height, SCREEN_H);
}

static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)

static inline bool in_pmem(paddr_t addr) {
  return addr - CONFIG_MBASE < CONFIG_MSIZE;
}

static void report_mmio_overlap(const char *name1, paddr_t l1, paddr_t r1,
    const char *name2, paddr_t l2, paddr_t r2) {
  
}

// static inline void update_screen() {
//   SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
//   SDL_RenderClear(renderer);
//   SDL_RenderCopy(renderer, texture, NULL, NULL);
//   SDL_RenderPresent(renderer);
// }

// void vga_update_screen() {
//   // TODO: call `update_screen()` when the sync register is non-zero,
//   // then zero out the sync register
//   uint32_t sync = vgactl_port_base[1];
//   if (sync == 1) {
//     update_screen();
//     vgactl_port_base[1] = 0;
//   }

// }

void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len, io_callback_t callback) {
  assert(nr_map < NR_MAP);
  paddr_t left = addr, right = addr + len - 1;
  if (in_pmem(left) || in_pmem(right)) {
    report_mmio_overlap(name, left, right, "pmem", PMEM_LEFT, PMEM_RIGHT);
  }
  for (int i = 0; i < nr_map; i++) {
    if (left <= maps[i].high && right >= maps[i].low) {
      report_mmio_overlap(name, left, right, maps[i].name, maps[i].low, maps[i].high);
    }
  }

  maps[nr_map] = (IOMap){ .name = name, .low = addr, .high = addr + len - 1,
    .space = space, .callback = callback };
  nr_map ++;
}

void init_vga() {
   printf("chenpang78\n");
   if (io_space == NULL) {  // 避免重复分配
    // 分配 32MB 内存给 io_space（对应 IO_SPACE_MAX 的大小）
    io_space = (uint8_t *)malloc(IO_SPACE_MAX);
    if (io_space == NULL) {  // 检查内存分配是否成功（防止 malloc 失败）
      fprintf(stderr, "Error: 无法分配 IO 空间（大小：%d MB）\n", IO_SPACE_MAX / 1024 / 1024);
      exit(1);  // 分配失败直接退出，避免后续非法操作
    }
    p_space = io_space;  // p_space 指向内存池起点，准备分配内存
  }
   vgactl_port_base = (uint32_t *)new_space(8);

    printf("chenpang666\n");
   vgactl_port_base[0] = (screen_width() << 16) | screen_height();
  printf("chenpang6969\n");

  add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8, NULL);


  vmem = new_space(screen_size());
  add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);
  
  init_screen();
  
  memset(vmem, 0, screen_size());
  
  printf("chenpang69\n");
}