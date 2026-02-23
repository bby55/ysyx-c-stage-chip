#include <am.h>
#include <klib-macros.h>
#include <stdio.h>
#include <stdint.h>


#define UART_BASE 0x10000000
#define TX_ADDR	 (UART_BASE + 0x0)
#define UART_RX	 (UART_BASE + 0x0)
#define THR_ADDR (UART_BASE + 0x0)
#define LER_ADDR (UART_BASE + 0x1)
#define IIR_ADDR (UART_BASE + 0x2)
#define FCR_ADDR (UART_BASE + 0x2)
#define LCR_ADDR (UART_BASE + 0x3)
#define MCR_ADDR (UART_BASE + 0x4)
#define LSR_ADDR (UART_BASE + 0x5)
#define MSR_ADDR (UART_BASE + 0x6)
#define LSB_ADDR (UART_BASE + 0x0)
#define MSB_ADDR (UART_BASE + 0x1)

#define PS2_KBD_ADDR         0x10011000
#define PS2_KBD_REG_SCANCODE 0x0

#define VGA_FB_ADDR          0x21000000
#define VGA_CTL_ADDR         0x211FFFF0
#define VGA_SYNC_ADDR        (VGA_CTL_ADDR + 4)