#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"stdio.c"
	.option nopic
	.attribute arch, "rv32i2p1_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.text.vsprintf,"ax",@progbits
	.align	2
	.globl	vsprintf
	.hidden	vsprintf
	.type	vsprintf, @function
vsprintf:
.LFB2:
	.cfi_startproc
	addi	sp,sp,-96
	.cfi_def_cfa_offset 96
	sw	s3,76(sp)
	sw	ra,92(sp)
	lbu	a4,0(a1)
	.cfi_offset 19, -20
	.cfi_offset 1, -4
	mv	s3,a0
	beq	a4,zero,.L15
	sw	s4,72(sp)
	sw	s5,68(sp)
	sw	s6,64(sp)
	sw	s10,48(sp)
	sw	s1,84(sp)
	sw	s2,80(sp)
	sw	s7,60(sp)
	.cfi_offset 20, -24
	.cfi_offset 21, -28
	.cfi_offset 22, -32
	.cfi_offset 26, -48
	.cfi_offset 9, -12
	.cfi_offset 18, -16
	.cfi_offset 23, -36
	mv	s6,a2
	mv	a5,a0
	li	s10,37
	li	s4,100
	li	s5,115
	j	.L14
.L25:
	sb	a4,0(a5)
	mv	s2,a1
	addi	a5,a5,1
.L4:
	lbu	a4,1(s2)
	addi	a1,s2,1
	beq	a4,zero,.L24
.L14:
	addi	s2,a1,1
	bne	a4,s10,.L25
	lbu	a4,1(a1)
	beq	a4,s4,.L5
	beq	a4,s5,.L6
	bne	a4,s10,.L7
	sb	s10,0(a5)
	lbu	a4,1(s2)
	addi	a5,a5,1
	addi	a1,s2,1
	bne	a4,zero,.L14
.L24:
	lw	s1,84(sp)
	.cfi_remember_state
	.cfi_restore 9
	lw	s2,80(sp)
	.cfi_restore 18
	lw	s4,72(sp)
	.cfi_restore 20
	lw	s5,68(sp)
	.cfi_restore 21
	lw	s6,64(sp)
	.cfi_restore 22
	lw	s7,60(sp)
	.cfi_restore 23
	lw	s10,48(sp)
	.cfi_restore 26
	sb	zero,0(a5)
	lw	ra,92(sp)
	.cfi_restore 1
	sub	a0,a5,s3
	lw	s3,76(sp)
	.cfi_restore 19
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
.L5:
	.cfi_restore_state
	lw	s1,0(s6)
	addi	a4,s6,4
	sw	a4,12(sp)
	addi	s7,a5,1
	blt	s1,zero,.L26
	bne	s1,zero,.L27
	li	a4,48
	sb	a4,0(a5)
	lw	s6,12(sp)
	mv	a5,s7
	j	.L4
.L7:
	sb	a4,0(a5)
	addi	a5,a5,1
	j	.L4
.L6:
	lw	a4,0(s6)
	addi	a2,s6,4
	mv	s6,a2
	bge	a4,zero,.L4
	lbu	a3,0(a4)
	beq	a3,zero,.L4
.L13:
	addi	a4,a4,1
	sb	a3,0(a5)
	lbu	a3,0(a4)
	addi	a5,a5,1
	bne	a3,zero,.L13
	mv	s6,a2
	j	.L4
.L26:
	sw	s0,88(sp)
	sw	s8,56(sp)
	sw	s9,52(sp)
	sw	s11,44(sp)
	li	a4,45
	neg	s1,s1
	sb	a4,0(a5)
	.cfi_offset 8, -8
	.cfi_offset 24, -40
	.cfi_offset 25, -44
	.cfi_offset 27, -52
.L9:
	li	s0,0
	addi	s11,sp,16
	li	s9,9
.L11:
	li	a1,10
	mv	a0,s1
	call	__umodsi3
	addi	s0,s0,1
	addi	a0,a0,48
	add	s8,s11,s0
	sb	a0,-1(s8)
	li	a1,10
	mv	a0,s1
	mv	s6,s1
	call	__udivsi3
	mv	s1,a0
	bgtu	s6,s9,.L11
	mv	a5,s8
	mv	a4,s7
.L12:
	lbu	a3,-1(a5)
	addi	a5,a5,-1
	addi	a4,a4,1
	sb	a3,-1(a4)
	bne	s11,a5,.L12
	add	a5,s7,s0
	lw	s6,12(sp)
	lw	s0,88(sp)
	.cfi_restore 8
	lw	s8,56(sp)
	.cfi_restore 24
	lw	s9,52(sp)
	.cfi_restore 25
	lw	s11,44(sp)
	.cfi_restore 27
	j	.L4
.L15:
	.cfi_restore 9
	.cfi_restore 18
	.cfi_restore 20
	.cfi_restore 21
	.cfi_restore 22
	.cfi_restore 23
	.cfi_restore 26
	mv	a5,a0
	sb	zero,0(a5)
	lw	ra,92(sp)
	.cfi_restore 1
	lw	s3,76(sp)
	.cfi_restore 19
	li	a0,0
	addi	sp,sp,96
	.cfi_def_cfa_offset 0
	jr	ra
.L27:
	.cfi_def_cfa_offset 96
	.cfi_offset 1, -4
	.cfi_offset 9, -12
	.cfi_offset 18, -16
	.cfi_offset 19, -20
	.cfi_offset 20, -24
	.cfi_offset 21, -28
	.cfi_offset 22, -32
	.cfi_offset 23, -36
	.cfi_offset 26, -48
	sw	s0,88(sp)
	sw	s8,56(sp)
	sw	s9,52(sp)
	sw	s11,44(sp)
	.cfi_offset 8, -8
	.cfi_offset 24, -40
	.cfi_offset 25, -44
	.cfi_offset 27, -52
	mv	s7,a5
	j	.L9
	.cfi_endproc
.LFE2:
	.size	vsprintf, .-vsprintf
	.section	.text.printf,"ax",@progbits
	.align	2
	.globl	printf
	.hidden	printf
	.type	printf, @function
printf:
.LFB0:
	.cfi_startproc
	addi	sp,sp,-1088
	.cfi_def_cfa_offset 1088
	addi	t1,sp,1060
	sw	a1,1060(sp)
	sw	a2,1064(sp)
	mv	a1,a0
	mv	a2,t1
	addi	a0,sp,16
	sw	s2,1040(sp)
	sw	ra,1052(sp)
	sw	a3,1068(sp)
	sw	a4,1072(sp)
	sw	a5,1076(sp)
	sw	a6,1080(sp)
	sw	a7,1084(sp)
	sw	t1,12(sp)
	.cfi_offset 18, -48
	.cfi_offset 1, -36
	call	vsprintf
	mv	s2,a0
	ble	a0,zero,.L28
	sw	s0,1048(sp)
	.cfi_offset 8, -40
	addi	s0,sp,16
	sw	s1,1044(sp)
	.cfi_offset 9, -44
	add	s1,s0,a0
.L30:
	lbu	a0,0(s0)
	addi	s0,s0,1
	call	putch
	bne	s0,s1,.L30
	lw	s0,1048(sp)
	.cfi_restore 8
	lw	s1,1044(sp)
	.cfi_restore 9
.L28:
	lw	ra,1052(sp)
	.cfi_restore 1
	mv	a0,s2
	lw	s2,1040(sp)
	.cfi_restore 18
	addi	sp,sp,1088
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	printf, .-printf
	.section	.text.sprintf,"ax",@progbits
	.align	2
	.globl	sprintf
	.hidden	sprintf
	.type	sprintf, @function
sprintf:
.LFB3:
	.cfi_startproc
	addi	sp,sp,-64
	.cfi_def_cfa_offset 64
	addi	t1,sp,40
	sw	a2,40(sp)
	mv	a2,t1
	sw	ra,28(sp)
	.cfi_offset 1, -36
	sw	a3,44(sp)
	sw	a4,48(sp)
	sw	a5,52(sp)
	sw	a6,56(sp)
	sw	a7,60(sp)
	sw	t1,12(sp)
	call	vsprintf
	lw	ra,28(sp)
	.cfi_restore 1
	addi	sp,sp,64
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3:
	.size	sprintf, .-sprintf
	.section	.rodata.snprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"AM Panic: "
	.align	2
.LC1:
	.string	"Not implemented"
	.align	2
.LC2:
	.string	" @ /home/ysyxbby/ysyx-workbench/abstract-machine/klib/src/stdio.c:190  \n"
	.section	.text.snprintf,"ax",@progbits
	.align	2
	.globl	snprintf
	.hidden	snprintf
	.type	snprintf, @function
snprintf:
.LFB4:
	.cfi_startproc
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	sw	s0,8(sp)
	sw	ra,12(sp)
	.cfi_offset 8, -40
	.cfi_offset 1, -36
	sw	a3,28(sp)
	sw	a4,32(sp)
	sw	a5,36(sp)
	sw	a6,40(sp)
	sw	a7,44(sp)
	lla	s0,.LC0
	li	a0,65
.L36:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L36
	lla	s0,.LC1
	li	a0,78
.L37:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L37
	lla	s0,.LC2
	li	a0,32
.L38:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L38
	li	a0,1
	call	halt
	.cfi_endproc
.LFE4:
	.size	snprintf, .-snprintf
	.section	.rodata.vsnprintf.str1.4,"aMS",@progbits,1
	.align	2
.LC3:
	.string	" @ /home/ysyxbby/ysyx-workbench/abstract-machine/klib/src/stdio.c:194  \n"
	.section	.text.vsnprintf,"ax",@progbits
	.align	2
	.globl	vsnprintf
	.hidden	vsnprintf
	.type	vsnprintf, @function
vsnprintf:
.LFB5:
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	s0,8(sp)
	sw	ra,12(sp)
	.cfi_offset 8, -8
	.cfi_offset 1, -4
	lla	s0,.LC0
	li	a0,65
.L44:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L44
	lla	s0,.LC1
	li	a0,78
.L45:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L45
	lla	s0,.LC3
	li	a0,32
.L46:
	call	putch
	lbu	a0,1(s0)
	addi	s0,s0,1
	bne	a0,zero,.L46
	li	a0,1
	call	halt
	.cfi_endproc
.LFE5:
	.size	vsnprintf, .-vsnprintf
	.globl	__udivsi3
	.globl	__umodsi3
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
