#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"gpu.c"
	.option nopic
	.attribute arch, "rv32i2p1_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.text.__am_gpu_init,"ax",@progbits
	.align	2
	.globl	__am_gpu_init
	.hidden	__am_gpu_init
	.type	__am_gpu_init, @function
__am_gpu_init:
.LFB6:
	.cfi_startproc
	ret
	.cfi_endproc
.LFE6:
	.size	__am_gpu_init, .-__am_gpu_init
	.section	.text.__am_gpu_config,"ax",@progbits
	.align	2
	.globl	__am_gpu_config
	.hidden	__am_gpu_config
	.type	__am_gpu_config, @function
__am_gpu_config:
.LFB7:
	.cfi_startproc
	li	a5,-1610612736
	addi	a5,a5,256
	lw	a5,0(a5)
	li	a3,1
	sw	zero,12(a0)
	slli	a4,a5,16
	srli	a4,a4,16
	srli	a5,a5,16
	sh	a3,0(a0)
	sw	a5,4(a0)
	sw	a4,8(a0)
	ret
	.cfi_endproc
.LFE7:
	.size	__am_gpu_config, .-__am_gpu_config
	.section	.text.__am_gpu_fbdraw,"ax",@progbits
	.align	2
	.globl	__am_gpu_fbdraw
	.hidden	__am_gpu_fbdraw
	.type	__am_gpu_fbdraw, @function
__am_gpu_fbdraw:
.LFB8:
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	lw	a4,16(a0)
	sw	s1,36(sp)
	li	a5,-1610612736
	.cfi_offset 9, -12
	lw	s1,4(a0)
	lw	a1,256(a5)
	sw	s2,32(sp)
	sw	s4,24(sp)
	sw	s5,20(sp)
	sw	s6,16(sp)
	sw	s7,12(sp)
	sw	ra,44(sp)
	.cfi_offset 18, -16
	.cfi_offset 20, -24
	.cfi_offset 21, -28
	.cfi_offset 22, -32
	.cfi_offset 23, -36
	.cfi_offset 1, -4
	lw	s4,0(a0)
	lw	s2,12(a0)
	lw	s5,8(a0)
	mv	s7,a0
	add	s6,s1,a4
	ble	a4,zero,.L5
	srli	a1,a1,16
	mv	a0,s1
	sw	s0,40(sp)
	sw	s3,28(sp)
	.cfi_offset 8, -8
	.cfi_offset 19, -20
	sub	s3,a1,s2
	call	__mulsi3
	add	a1,a0,s4
	slli	a1,a1,2
	slli	s3,s3,2
	add	s0,s4,s2
	sub	a1,a1,s5
	li	a7,0
.L6:
	bgt	s2,zero,.L20
	addi	s1,s1,1
	add	a7,a7,s2
	add	a1,a1,s3
	blt	s1,s6,.L6
.L19:
	lw	s0,40(sp)
	.cfi_restore 8
	lw	s3,28(sp)
	.cfi_restore 19
.L5:
	lbu	a5,20(s7)
	beq	a5,zero,.L4
	li	a5,-1610612736
	li	a4,1
	sw	a4,260(a5)
.L4:
	lw	ra,44(sp)
	.cfi_restore 1
	lw	s1,36(sp)
	.cfi_restore 9
	lw	s2,32(sp)
	.cfi_restore 18
	lw	s4,24(sp)
	.cfi_restore 20
	lw	s5,20(sp)
	.cfi_restore 21
	lw	s6,16(sp)
	.cfi_restore 22
	lw	s7,12(sp)
	.cfi_restore 23
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
.L20:
	.cfi_def_cfa_offset 48
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	.cfi_offset 9, -12
	.cfi_offset 18, -16
	.cfi_offset 19, -20
	.cfi_offset 20, -24
	.cfi_offset 21, -28
	.cfi_offset 22, -32
	.cfi_offset 23, -36
	li	a6,-1593835520
.L8:
	slli	a5,a7,2
	add	a5,s5,a5
	mv	a3,s4
.L7:
	lw	a2,0(a5)
	add	a4,a1,a5
	add	a4,a6,a4
	addi	a3,a3,1
	sw	a2,0(a4)
	addi	a5,a5,4
	blt	a3,s0,.L7
	addi	s1,s1,1
	add	a7,a7,s2
	add	a1,a1,s3
	bgt	s6,s1,.L8
	j	.L19
	.cfi_endproc
.LFE8:
	.size	__am_gpu_fbdraw, .-__am_gpu_fbdraw
	.section	.text.__am_gpu_status,"ax",@progbits
	.align	2
	.globl	__am_gpu_status
	.hidden	__am_gpu_status
	.type	__am_gpu_status, @function
__am_gpu_status:
.LFB9:
	.cfi_startproc
	li	a5,1
	sb	a5,0(a0)
	ret
	.cfi_endproc
.LFE9:
	.size	__am_gpu_status, .-__am_gpu_status
	.globl	__mulsi3
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
