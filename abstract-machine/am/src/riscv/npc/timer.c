#include <am.h>

#define DEVICE_BASE 0xa0000000
#define RTC_ADDR    (DEVICE_BASE + 0x0000048)

static inline uint8_t  inb(uintptr_t addr) { return *(volatile uint8_t  *)addr; }
static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }

void __am_timer_init() {
}
void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t mcycle;
  uint32_t mcycleh;
  asm volatile ("csrr %0, 0xb80" : "=r"(mcycleh));
  asm volatile ("csrr %0, 0xb00" : "=r"(mcycle));
  uptime->us = (((uint64_t)mcycleh << 32) | mcycle) / 4;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
