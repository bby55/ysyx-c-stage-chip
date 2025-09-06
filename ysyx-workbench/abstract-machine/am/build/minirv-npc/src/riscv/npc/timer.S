#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"timer.c"
	.option nopic
	.attribute arch, "rv32e2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 4
	.text
	.section	.text.__am_timer_init,"ax",@progbits
	.align	2
	.globl	__am_timer_init
	.hidden	__am_timer_init
	.type	__am_timer_init, @function
__am_timer_init:
.LFB6:
	.cfi_startproc
	li	a4,-1610612736
	sw	zero,72(a4)
	sw	zero,76(a4)
	ret
	.cfi_endproc
.LFE6:
	.size	__am_timer_init, .-__am_timer_init
	.section	.text.__am_timer_uptime,"ax",@progbits
	.align	2
	.globl	__am_timer_uptime
	.hidden	__am_timer_uptime
	.type	__am_timer_uptime, @function
__am_timer_uptime:
.LFB7:
	.cfi_startproc
	li	a4,-1610612736
	mv	a5,a4
	addi	a5,a5,72
	addi	a4,a4,76
	lw	a4,0(a4)
	lw	a5,0(a5)
	sw	a4,4(a0)
	sw	a5,0(a0)
	ret
	.cfi_endproc
.LFE7:
	.size	__am_timer_uptime, .-__am_timer_uptime
	.section	.text.__am_timer_rtc,"ax",@progbits
	.align	2
	.globl	__am_timer_rtc
	.hidden	__am_timer_rtc
	.type	__am_timer_rtc, @function
__am_timer_rtc:
.LFB8:
	.cfi_startproc
	li	a5,1900
	sw	zero,20(a0)
	sw	zero,16(a0)
	sw	zero,12(a0)
	sw	zero,8(a0)
	sw	zero,4(a0)
	sw	a5,0(a0)
	ret
	.cfi_endproc
.LFE8:
	.size	__am_timer_rtc, .-__am_timer_rtc
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
