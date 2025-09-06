#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"stdlib.c"
	.option nopic
	.attribute arch, "rv32e2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 4
	.text
	.section	.text.rand,"ax",@progbits
	.align	2
	.globl	rand
	.hidden	rand
	.type	rand, @function
rand:
.LFB0:
	.cfi_startproc
	lla	a3,next
	lw	a1,0(a3)
	li	a2,12288
	addi	a2,a2,57
	slli	a4,a1,8
	sub	a4,a4,a1
	slli	a4,a4,3
	add	a4,a4,a1
	slli	a4,a4,7
	add	a4,a4,a1
	slli	a4,a4,3
	sub	a4,a4,a1
	slli	a5,a4,5
	add	a5,a4,a5
	slli	a5,a5,2
	sub	a5,a5,a1
	slli	a5,a5,2
	add	a5,a5,a1
	add	a5,a5,a2
	slli	a0,a5,1
	sw	a5,0(a3)
	srli	a0,a0,17
	ret
	.cfi_endproc
.LFE0:
	.size	rand, .-rand
	.section	.text.srand,"ax",@progbits
	.align	2
	.globl	srand
	.hidden	srand
	.type	srand, @function
srand:
.LFB1:
	.cfi_startproc
	la a5, next; sw a0, 0(a5);
	ret
	.cfi_endproc
.LFE1:
	.size	srand, .-srand
	.section	.text.abs,"ax",@progbits
	.align	2
	.globl	abs
	.hidden	abs
	.type	abs, @function
abs:
.LFB2:
	.cfi_startproc
	srai	a5,a0,31
	xor	a0,a5,a0
	sub	a0,a0,a5
	ret
	.cfi_endproc
.LFE2:
	.size	abs, .-abs
	.section	.text.atoi,"ax",@progbits
	.align	2
	.globl	atoi
	.hidden	atoi
	.type	atoi, @function
atoi:
.LFB3:
	.cfi_startproc
	lbu	a3,0(a0)
	li	a5,32
	mv	a4,a0
	bne	a3,a5,.L6
	mv	a5,a3
.L7:
	lbu	a3,1(a4)
	addi	a4,a4,1
	beq	a3,a5,.L7
.L6:
	addi	a5,a3,-48
	andi	a5,a5,0xff
	li	a2,9
	li	a0,0
	bgtu	a5,a2,.L10
.L9:
	slli	a5,a0,2
	add	a5,a5,a0
	addi	a4,a4,1
	slli	a5,a5,1
	add	a5,a5,a3
	lbu	a3,0(a4)
	addi	a0,a5,-48
	addi	a5,a3,-48
	andi	a5,a5,0xff
	bleu	a5,a2,.L9
	ret
.L10:
	ret
	.cfi_endproc
.LFE3:
	.size	atoi, .-atoi
	.section	.text.malloc,"ax",@progbits
	.align	2
	.globl	malloc
	.hidden	malloc
	.type	malloc, @function
malloc:
.LFB4:
	.cfi_startproc
	la a4, init_s; lbu a4, 0(a4);
	mv	a5,a0
	lla	a3,init_s
	beq	a4,zero,.L14
	lla	a4,addr_start
	lw	a0,0(a4)
	addi	a5,a5,7
	andi	a5,a5,-8
	add	a5,a0,a5
	sw	a5,0(a4)
	ret
.L14:
	la a0, heap; lw a0, 0(a0);
	addi	a5,a5,7
	li	a4,1
	addi	a0,a0,7
	andi	a0,a0,-8
	andi	a5,a5,-8
	sb	a4,0(a3)
	add	a5,a0,a5
	lla	a4,addr_start
	sw	a5,0(a4)
	ret
	.cfi_endproc
.LFE4:
	.size	malloc, .-malloc
	.section	.text.free,"ax",@progbits
	.align	2
	.globl	free
	.hidden	free
	.type	free, @function
free:
.LFB5:
	.cfi_startproc
	ret
	.cfi_endproc
.LFE5:
	.size	free, .-free
	.section	.sbss.init_s,"aw",@nobits
	.type	init_s, @object
	.size	init_s, 1
init_s:
	.zero	1
	.section	.sbss.addr_start,"aw",@nobits
	.align	2
	.type	addr_start, @object
	.size	addr_start, 4
addr_start:
	.zero	4
	.section	.sdata.next,"aw"
	.align	2
	.type	next, @object
	.size	next, 4
next:
	.word	1
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
