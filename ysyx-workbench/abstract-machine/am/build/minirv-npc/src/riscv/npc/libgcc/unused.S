#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"unused.c"
	.option nopic
	.attribute arch, "rv32e2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 4
	.text
	.section	.rodata.__muldf3.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"AM Panic: "
	.align	2
.LC1:
	.string	"Not implement"
	.align	2
.LC2:
	.string	" @ /home/ysyxbby/ysyx-workbench/abstract-machine/am/src/riscv/npc/libgcc/unused.c:4  \n"
	.section	.text.__muldf3,"ax",@progbits
	.align	2
	.globl	__muldf3
	.hidden	__muldf3
	.type	__muldf3, @function
__muldf3:
.LFB0:
	.cfi_startproc
	addi	sp,sp,-8
	.cfi_def_cfa_offset 8
	sw	s0,0(sp)
	sw	ra,4(sp)
	.cfi_offset 8, -8
	.cfi_offset 1, -4
	lla	s0,.LC0
	li	a0,65
.L2:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L2
	lla	s0,.LC1
	li	a0,78
.L3:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L3
	lla	s0,.LC2
	li	a0,32
.L4:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L4
	li	a0,1
	call	halt
	.cfi_endproc
.LFE0:
	.size	__muldf3, .-__muldf3
	.section	.rodata.__fixdfdi.str1.4,"aMS",@progbits,1
	.align	2
.LC3:
	.string	" @ /home/ysyxbby/ysyx-workbench/abstract-machine/am/src/riscv/npc/libgcc/unused.c:5  \n"
	.section	.text.__fixdfdi,"ax",@progbits
	.align	2
	.globl	__fixdfdi
	.hidden	__fixdfdi
	.type	__fixdfdi, @function
__fixdfdi:
.LFB1:
	.cfi_startproc
	addi	sp,sp,-8
	.cfi_def_cfa_offset 8
	sw	s0,0(sp)
	sw	ra,4(sp)
	.cfi_offset 8, -8
	.cfi_offset 1, -4
	lla	s0,.LC0
	li	a0,65
.L11:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L11
	lla	s0,.LC1
	li	a0,78
.L12:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L12
	lla	s0,.LC3
	li	a0,32
.L13:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L13
	li	a0,1
	call	halt
	.cfi_endproc
.LFE1:
	.size	__fixdfdi, .-__fixdfdi
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
