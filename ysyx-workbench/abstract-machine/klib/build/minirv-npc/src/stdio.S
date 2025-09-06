#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"stdio.c"
	.option nopic
	.attribute arch, "rv32e2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 4
	.text
	.section	.text.vsprintf,"ax",@progbits
	.align	2
	.globl	vsprintf
	.hidden	vsprintf
	.type	vsprintf, @function
vsprintf:
.LFB2:
	.cfi_startproc
	addi	sp,sp,-52
	.cfi_def_cfa_offset 52
	sw	ra,48(sp)
	sw	s0,44(sp)
	lbu	a4,0(a1)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	beq	a4,zero,.L15
	sw	s1,40(sp)
	.cfi_offset 9, -12
	mv	a5,a0
	li	s1,37
	mv	t2,a0
	j	.L14
.L25:
	sb	a4,0(a5)
	mv	a3,a1
	addi	a5,a5,1
.L4:
	lbu	a4,1(a3)
	addi	a1,a3,1
	beq	a4,zero,.L24
.L14:
	addi	a3,a1,1
	bne	a4,s1,.L25
	lbu	a4,1(a1)
	li	a1,100
	beq	a4,a1,.L5
	li	a1,115
	beq	a4,a1,.L6
	bne	a4,s1,.L7
	sb	s1,0(a5)
	lbu	a4,1(a3)
	addi	a5,a5,1
	addi	a1,a3,1
	bne	a4,zero,.L14
.L24:
	lw	s1,40(sp)
	.cfi_remember_state
	.cfi_restore 9
	sb	zero,0(a5)
	lw	ra,48(sp)
	.cfi_restore 1
	lw	s0,44(sp)
	.cfi_restore 8
	sub	a0,a5,t2
	addi	sp,sp,52
	.cfi_def_cfa_offset 0
	jr	ra
.L5:
	.cfi_restore_state
	lw	a4,0(a2)
	addi	a1,a5,1
	addi	a2,a2,4
	blt	a4,zero,.L26
	bne	a4,zero,.L27
	li	a4,48
	sb	a4,0(a5)
	mv	a5,a1
	j	.L4
.L7:
	sb	a4,0(a5)
	addi	a5,a5,1
	j	.L4
.L6:
	lw	a4,0(a2)
	addi	a0,a2,4
	mv	a2,a0
	bge	a4,zero,.L4
	lbu	a1,0(a4)
	beq	a1,zero,.L4
.L13:
	addi	a4,a4,1
	sb	a1,0(a5)
	lbu	a1,0(a4)
	addi	a5,a5,1
	bne	a1,zero,.L13
	mv	a2,a0
	j	.L4
.L26:
	li	a0,45
	neg	a4,a4
	sb	a0,0(a5)
.L9:
	li	a5,0
	addi	t1,sp,24
	sw	a3,8(sp)
	sw	a1,12(sp)
	sw	a2,16(sp)
	sw	t2,20(sp)
.L11:
	addi	a5,a5,1
	li	a1,10
	mv	a0,a4
	add	s0,t1,a5
	sw	a5,4(sp)
	sw	a4,0(sp)
	call	__umodsi3
	lw	a4,0(sp)
	addi	a0,a0,48
	sb	a0,-1(s0)
	li	a1,10
	mv	a0,a4
	call	__udivsi3
	lw	a3,0(sp)
	li	a2,9
	lw	a5,4(sp)
	mv	a4,a0
	addi	t1,sp,24
	bgtu	a3,a2,.L11
	lw	a1,12(sp)
	lw	a3,8(sp)
	lw	a2,16(sp)
	lw	t2,20(sp)
	mv	a4,a1
.L12:
	lbu	a0,-1(s0)
	addi	s0,s0,-1
	addi	a4,a4,1
	sb	a0,-1(a4)
	bne	t1,s0,.L12
	add	a5,a1,a5
	j	.L4
.L15:
	.cfi_restore 9
	mv	a5,a0
	sb	zero,0(a5)
	lw	ra,48(sp)
	.cfi_restore 1
	lw	s0,44(sp)
	.cfi_restore 8
	li	a0,0
	addi	sp,sp,52
	.cfi_def_cfa_offset 0
	jr	ra
.L27:
	.cfi_def_cfa_offset 52
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	.cfi_offset 9, -12
	mv	a1,a5
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
	addi	sp,sp,-1064
	.cfi_def_cfa_offset 1064
	addi	t1,sp,1044
	sw	a1,1044(sp)
	sw	a2,1048(sp)
	mv	a1,a0
	mv	a2,t1
	addi	a0,sp,8
	sw	ra,1040(sp)
	sw	a3,1052(sp)
	sw	a4,1056(sp)
	sw	a5,1060(sp)
	sw	t1,4(sp)
	.cfi_offset 1, -24
	call	vsprintf
	sw	a0,0(sp)
	ble	a0,zero,.L28
	sw	s1,1032(sp)
	.cfi_offset 9, -32
	addi	s1,sp,8
	sw	s0,1036(sp)
	.cfi_offset 8, -28
	add	s0,s1,a0
.L30:
	lbu	a0,0(s1)
	addi	s1,s1,1
	call	putch
	bne	s1,s0,.L30
	lw	s0,1036(sp)
	.cfi_restore 8
	lw	s1,1032(sp)
	.cfi_restore 9
.L28:
	lw	ra,1040(sp)
	.cfi_restore 1
	lw	a0,0(sp)
	addi	sp,sp,1064
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
	addi	sp,sp,-24
	.cfi_def_cfa_offset 24
	addi	t1,sp,8
	sw	a2,8(sp)
	mv	a2,t1
	sw	ra,4(sp)
	.cfi_offset 1, -20
	sw	a3,12(sp)
	sw	a4,16(sp)
	sw	a5,20(sp)
	sw	t1,0(sp)
	call	vsprintf
	lw	ra,4(sp)
	.cfi_restore 1
	addi	sp,sp,24
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE3:
	.size	sprintf, .-sprintf
	.section	.text.vsnprintf,"ax",@progbits
	.align	2
	.globl	vsnprintf
	.hidden	vsnprintf
	.type	vsnprintf, @function
vsnprintf:
.LFB5:
	.cfi_startproc
	addi	sp,sp,-40
	.cfi_def_cfa_offset 40
	sw	s0,32(sp)
	sw	ra,36(sp)
	.cfi_offset 8, -8
	.cfi_offset 1, -4
	mv	s0,a0
	beq	a1,zero,.L57
	addi	a4,a1,-1
	sw	s1,28(sp)
	.cfi_offset 9, -12
	sw	a0,8(sp)
	li	s1,37
	mv	a5,a4
	j	.L36
.L38:
	sb	a1,0(s0)
	addi	s0,s0,1
.L40:
	addi	a5,a5,-1
	li	a4,-1
	mv	a2,t1
	beq	a5,a4,.L60
.L36:
	lbu	a1,0(a2)
	beq	a1,zero,.L60
	addi	t1,a2,1
	bne	a1,s1,.L38
	lbu	a1,1(a2)
	li	a4,115
	beq	a1,a4,.L61
	li	a4,100
	beq	a1,a4,.L62
	beq	a1,s1,.L63
	li	a4,99
	bne	a1,a4,.L51
	lw	a1,0(a3)
	addi	t1,a2,2
	addi	a5,a5,-1
	sb	a1,0(s0)
	li	a4,-1
	addi	a3,a3,4
	addi	s0,s0,1
	mv	a2,t1
	bne	a5,a4,.L36
.L60:
	lw	a5,8(sp)
	lw	s1,28(sp)
	.cfi_restore 9
	sub	a0,s0,a5
.L37:
	sb	zero,0(s0)
.L35:
	lw	ra,36(sp)
	.cfi_restore 1
	lw	s0,32(sp)
	.cfi_restore 8
	addi	sp,sp,40
	.cfi_def_cfa_offset 0
	jr	ra
.L63:
	.cfi_def_cfa_offset 40
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	.cfi_offset 9, -12
	sb	s1,0(s0)
	addi	t1,a2,2
	addi	s0,s0,1
	j	.L40
.L61:
	lw	a0,0(a3)
	addi	a3,a3,4
	lbu	a1,0(a0)
	beq	a1,zero,.L50
.L41:
	addi	a0,a0,1
	sb	a1,0(s0)
	lbu	a1,0(a0)
	addi	s0,s0,1
	bne	a1,zero,.L41
	addi	t1,t1,1
	j	.L40
.L62:
	lw	a2,0(a3)
	addi	a4,a3,4
	sw	a4,12(sp)
	blt	a2,zero,.L64
.L43:
	li	a3,0
	sw	s0,0(sp)
	mv	a0,a2
	sw	a2,4(sp)
	mv	s0,a3
	sw	a5,16(sp)
	sw	t1,20(sp)
.L44:
	li	a1,10
	call	__divsi3
	mv	a1,s0
	addi	s0,s0,1
	bne	a0,zero,.L44
	lw	s0,0(sp)
	lw	a2,4(sp)
	lw	t1,20(sp)
	add	a1,s0,a1
	addi	a4,s0,-1
	sw	a4,4(sp)
	mv	s0,a1
	mv	a5,a2
	sw	a1,20(sp)
	sw	t1,24(sp)
.L45:
	li	a1,10
	mv	a0,a5
	sw	a5,0(sp)
	call	__modsi3
	lw	a5,0(sp)
	addi	a4,a0,48
	sb	a4,0(s0)
	mv	a0,a5
	li	a1,10
	call	__divsi3
	lw	a4,4(sp)
	addi	s0,s0,-1
	mv	a5,a0
	bne	a4,s0,.L45
	lw	a1,20(sp)
	lw	t1,24(sp)
	lw	a5,16(sp)
	lw	a3,12(sp)
	addi	s0,a1,1
	addi	t1,t1,1
	j	.L40
.L64:
	li	a3,45
	sb	a3,0(s0)
	neg	a2,a2
	addi	s0,s0,1
	j	.L43
.L50:
	addi	t1,a2,2
	j	.L40
.L51:
	lw	s1,28(sp)
	.cfi_restore 9
	li	a0,-1
	j	.L35
.L57:
	li	a0,0
	j	.L37
	.cfi_endproc
.LFE5:
	.size	vsnprintf, .-vsnprintf
	.section	.text.snprintf,"ax",@progbits
	.align	2
	.globl	snprintf
	.hidden	snprintf
	.type	snprintf, @function
snprintf:
.LFB4:
	.cfi_startproc
	addi	sp,sp,-20
	.cfi_def_cfa_offset 20
	addi	t1,sp,8
	sw	a3,8(sp)
	mv	a3,t1
	sw	ra,4(sp)
	.cfi_offset 1, -16
	sw	a4,12(sp)
	sw	a5,16(sp)
	sw	t1,0(sp)
	call	vsnprintf
	lw	ra,4(sp)
	.cfi_restore 1
	addi	sp,sp,20
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE4:
	.size	snprintf, .-snprintf
	.globl	__divsi3
	.globl	__udivsi3
	.globl	__modsi3
	.globl	__umodsi3
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
