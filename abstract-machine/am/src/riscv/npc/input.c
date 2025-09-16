#include <am.h>
#include "../riscv.h"

#define KEYDOWN_MASK 0x8000
#define DEVICE_BASE 0xa0000000
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  kbd->keydown = 0;
  kbd->keycode = AM_KEY_NONE;

  uint32_t kn = inl(KBD_ADDR);
  kbd->keydown = (kn & KEYDOWN_MASK ? true : false);
  kbd->keycode = kn & ~KEYDOWN_MASK;

}
