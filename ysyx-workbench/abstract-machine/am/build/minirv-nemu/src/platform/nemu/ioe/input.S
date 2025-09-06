#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"input.c"
	.option nopic
	.attribute arch, "rv32i2p1_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.text.__am_input_keybrd,"ax",@progbits
	.align	2
	.globl	__am_input_keybrd
	.hidden	__am_input_keybrd
	.type	__am_input_keybrd, @function
__am_input_keybrd:
.LFB6:
	.cfi_startproc
	li	a5,-1610612736
	sw	zero,4(a0)
	addi	a5,a5,96
	lw	a5,0(a5)
	li	a3,-32768
	addi	a3,a3,-1
	srli	a4,a5,15
	andi	a4,a4,1
	and	a5,a5,a3
	sb	a4,0(a0)
	sw	a5,4(a0)
	ret
	.cfi_endproc
.LFE6:
	.size	__am_input_keybrd, .-__am_input_keybrd
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
