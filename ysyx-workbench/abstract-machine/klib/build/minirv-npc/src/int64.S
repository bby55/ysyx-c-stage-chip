#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"int64.c"
	.option nopic
	.attribute arch, "rv32e2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 4
	.text
	.section	.text.__udivmoddi4,"ax",@progbits
	.align	2
	.globl	__udivmoddi4
	.hidden	__udivmoddi4
	.type	__udivmoddi4, @function
__udivmoddi4:
.LFB5:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	s1,20(sp)
	mv	a5,a1
	sw	ra,28(sp)
	.cfi_offset 9, -12
	.cfi_offset 1, -4
	mv	s1,a3
	mv	t0,a0
	mv	a1,a2
	bne	a5,zero,.L2
	bne	a3,zero,.L3
	sw	a4,0(sp)
	beq	a4,zero,.L4
	sw	a0,8(sp)
	sw	a2,4(sp)
	call	__umodsi3
	lw	a4,0(sp)
	lw	t0,8(sp)
	lw	a1,4(sp)
	sw	zero,4(a4)
	sw	a0,0(a4)
.L4:
	mv	a0,t0
	call	__udivsi3
	lw	ra,28(sp)
	.cfi_remember_state
	.cfi_restore 1
	lw	s1,20(sp)
	.cfi_restore 9
	li	a1,0
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
.L2:
	.cfi_restore_state
	sw	s0,24(sp)
	.cfi_offset 8, -8
	mv	s0,a5
	bne	a2,zero,.L7
	beq	a3,zero,.L48
	beq	a0,zero,.L49
	addi	a3,a3,-1
	and	a2,a3,s1
	beq	a2,zero,.L50
	sw	a0,8(sp)
	mv	a0,s1
	sw	a1,16(sp)
	sw	a5,12(sp)
	sw	a4,4(sp)
	call	__clzsi2
	mv	a3,a0
	mv	a0,s0
	sw	a3,0(sp)
	call	__clzsi2
	lw	a3,0(sp)
	lw	a4,4(sp)
	lw	t0,8(sp)
	sub	a0,a3,a0
	li	a3,30
	lw	a5,12(sp)
	lw	a1,16(sp)
	bgtu	a0,a3,.L20
	addi	a2,a0,1
	li	a5,32
	sub	a5,a5,a2
	srl	a3,t0,a2
	sll	a0,s0,a5
	sll	t0,t0,a5
	srl	a5,s0,a2
	or	s0,a0,a3
	li	a3,0
	j	.L14
.L7:
	beq	a3,zero,.L51
	sw	a0,8(sp)
	mv	a0,a3
	sw	a5,12(sp)
	sw	a4,4(sp)
	sw	a2,16(sp)
	call	__clzsi2
	mv	a3,a0
	mv	a0,s0
	sw	a3,0(sp)
	call	__clzsi2
	lw	a3,0(sp)
	lw	a4,4(sp)
	lw	t0,8(sp)
	sub	a0,a3,a0
	li	a3,31
	lw	a5,12(sp)
	bgtu	a0,a3,.L20
	addi	a2,a0,1
	li	a5,32
	lw	a1,16(sp)
	beq	a2,a5,.L26
	sub	a3,a5,a2
	sll	t1,s0,a3
	srl	a0,t0,a2
	srl	a5,s0,a2
	sll	t0,t0,a3
	or	s0,t1,a0
	li	a3,0
.L14:
	sw	zero,0(sp)
	mv	t1,s0
	sw	a4,4(sp)
.L19:
	srli	a0,t0,31
	slli	a4,t1,1
	or	a4,a4,a0
	slli	a5,a5,1
	srli	t1,t1,31
	or	s0,a5,t1
	sub	a5,a1,a4
	sgtu	t1,a5,a1
	sub	a0,s1,s0
	seqz	a5,a5
	sub	a0,a0,t1
	sub	a0,a0,a5
	srai	a5,a0,31
	and	t1,a5,a1
	srli	t2,a3,31
	and	a5,a5,s1
	sub	t1,a4,t1
	slli	t0,t0,1
	sgtu	a4,t1,a4
	sub	a5,s0,a5
	or	t0,t0,t2
	lw	t2,0(sp)
	sub	a5,a5,a4
	srli	a4,a0,31
	slli	a3,a3,1
	addi	a2,a2,-1
	sw	a4,0(sp)
	or	a3,a3,t2
	bne	a2,zero,.L19
	lw	a4,4(sp)
	beq	a4,zero,.L23
	sw	t1,0(a4)
	sw	a5,4(a4)
.L23:
	srli	a5,a3,31
	slli	a4,t0,1
	lw	s0,24(sp)
	.cfi_restore 8
	lw	ra,28(sp)
	.cfi_restore 1
	or	a1,a5,a4
	lw	a5,0(sp)
	slli	a0,a3,1
	lw	s1,20(sp)
	.cfi_restore 9
	or	a0,a0,a5
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
.L3:
	.cfi_def_cfa_offset 32
	.cfi_offset 1, -4
	.cfi_offset 9, -12
	beq	a4,zero,.L6
	sw	a0,0(a4)
	sw	zero,4(a4)
.L6:
	li	a0,0
	li	a1,0
.L5:
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s1,20(sp)
	.cfi_restore 9
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
.L51:
	.cfi_def_cfa_offset 32
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	.cfi_offset 9, -12
	addi	a2,a2,-1
	and	a0,a2,a1
	bne	a0,zero,.L16
	beq	a4,zero,.L17
	and	a2,a2,t0
	sw	a2,0(a4)
	sw	zero,4(a4)
.L17:
	li	a4,1
	beq	a1,a4,.L24
	mv	a0,a1
	sw	a5,4(sp)
	sw	t0,0(sp)
	call	__ctzsi2
	lw	a5,4(sp)
	lw	t0,0(sp)
	li	a3,32
	sub	a3,a3,a0
	mv	a4,a0
	srl	t0,t0,a0
	sll	a3,a5,a3
	lw	s0,24(sp)
	.cfi_remember_state
	.cfi_restore 8
	or	a0,a3,t0
	srl	a1,a5,a4
	j	.L5
.L48:
	.cfi_restore_state
	ebreak
.L20:
	beq	a4,zero,.L46
	lw	s0,24(sp)
	.cfi_remember_state
	.cfi_restore 8
	sw	t0,0(a4)
	sw	a5,4(a4)
	j	.L6
.L16:
	.cfi_restore_state
	mv	a0,a1
	sw	t0,16(sp)
	sw	a4,12(sp)
	sw	a3,8(sp)
	sw	a1,4(sp)
	call	__clzsi2
	mv	a5,a0
	mv	a0,s0
	sw	a5,0(sp)
	call	__clzsi2
	lw	a5,0(sp)
	li	t1,32
	lw	t0,16(sp)
	sub	a0,a5,a0
	addi	a2,a0,33
	lw	a1,4(sp)
	lw	a3,8(sp)
	lw	a4,12(sp)
	li	a5,0
	beq	a2,t1,.L14
	li	t2,31
	bgtu	a2,t2,.L18
	sub	t1,t1,a2
	srl	a0,t0,a2
	sll	t2,s0,t1
	srl	a5,s0,a2
	sll	t0,t0,t1
	or	s0,t2,a0
	j	.L14
.L49:
	sw	a4,0(sp)
	beq	a4,zero,.L10
	mv	a0,a5
	mv	a1,a3
	sw	a5,4(sp)
	call	__umodsi3
	lw	a4,0(sp)
	lw	a5,4(sp)
	sw	zero,0(a4)
	sw	a0,4(a4)
.L10:
	mv	a1,s1
	mv	a0,a5
	call	__udivsi3
	li	a1,0
	lw	s0,24(sp)
	.cfi_remember_state
	.cfi_restore 8
	j	.L5
.L24:
	.cfi_restore_state
	lw	s0,24(sp)
	.cfi_remember_state
	.cfi_restore 8
	mv	a0,t0
	mv	a1,a5
	j	.L5
.L46:
	.cfi_restore_state
	lw	s0,24(sp)
	.cfi_remember_state
	.cfi_restore 8
	j	.L6
.L50:
	.cfi_restore_state
	beq	a4,zero,.L12
	and	a3,a3,a5
	sw	a3,4(a4)
	sw	a0,0(a4)
.L12:
	mv	a0,s1
	sw	a5,0(sp)
	call	__ctzsi2
	lw	a5,0(sp)
	lw	s0,24(sp)
	.cfi_remember_state
	.cfi_restore 8
	li	a1,0
	srl	a0,a5,a0
	j	.L5
.L26:
	.cfi_restore_state
	li	a5,0
	li	a3,0
	j	.L14
.L18:
	li	t1,64
	addi	a0,a0,1
	sub	t1,t1,a2
	sll	a3,t0,t1
	sll	t1,s0,t1
	srl	t0,t0,a0
	or	t0,t1,t0
	srl	s0,s0,a0
	j	.L14
	.cfi_endproc
.LFE5:
	.size	__udivmoddi4, .-__udivmoddi4
	.section	.text.__divdi3,"ax",@progbits
	.align	2
	.globl	__divdi3
	.hidden	__divdi3
	.type	__divdi3, @function
__divdi3:
.LFB0:
	.cfi_startproc
	srai	a5,a1,31
	srai	t1,a3,31
	xor	t0,a0,a5
	xor	a4,a2,t1
	xor	a1,a1,a5
	sub	a0,t0,a5
	xor	a3,a3,t1
	sub	a2,a4,t1
	sub	a1,a1,a5
	sgtu	a4,a2,a4
	sgtu	t0,a0,t0
	sub	a3,a3,t1
	addi	sp,sp,-8
	.cfi_def_cfa_offset 8
	sub	a3,a3,a4
	sub	a1,a1,t0
	li	a4,0
	sw	s0,0(sp)
	sw	ra,4(sp)
	.cfi_offset 8, -8
	.cfi_offset 1, -4
	xor	s0,a5,t1
	call	__udivmoddi4
	xor	a5,a0,s0
	xor	a1,a1,s0
	sub	a0,a5,s0
	lw	ra,4(sp)
	.cfi_restore 1
	sub	a1,a1,s0
	lw	s0,0(sp)
	.cfi_restore 8
	sgtu	a5,a0,a5
	sub	a1,a1,a5
	addi	sp,sp,8
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE0:
	.size	__divdi3, .-__divdi3
	.section	.text.__moddi3,"ax",@progbits
	.align	2
	.globl	__moddi3
	.hidden	__moddi3
	.type	__moddi3, @function
__moddi3:
.LFB2:
	.cfi_startproc
	addi	sp,sp,-24
	.cfi_def_cfa_offset 24
	sw	s0,16(sp)
	srai	a4,a3,31
	.cfi_offset 8, -8
	srai	s0,a1,31
	xor	a5,a2,a4
	xor	t1,a0,s0
	sw	s1,12(sp)
	sub	a2,a5,a4
	sub	a0,t1,s0
	xor	a3,a3,a4
	xor	a1,a1,s0
	.cfi_offset 9, -12
	addi	s1,sp,7
	andi	s1,s1,-8
	sgtu	a5,a2,a5
	sub	a3,a3,a4
	sub	a1,a1,s0
	sgtu	t1,a0,t1
	sub	a3,a3,a5
	mv	a4,s1
	sub	a1,a1,t1
	sw	ra,20(sp)
	.cfi_offset 1, -4
	call	__udivmoddi4
	lw	a5,0(s1)
	lw	a1,4(s1)
	lw	ra,20(sp)
	.cfi_restore 1
	xor	a5,a5,s0
	xor	a1,a1,s0
	sub	a0,a5,s0
	sub	a1,a1,s0
	lw	s0,16(sp)
	.cfi_restore 8
	sgtu	a5,a0,a5
	lw	s1,12(sp)
	.cfi_restore 9
	sub	a1,a1,a5
	addi	sp,sp,24
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2:
	.size	__moddi3, .-__moddi3
	.section	.text.__udivdi3,"ax",@progbits
	.align	2
	.globl	__udivdi3
	.hidden	__udivdi3
	.type	__udivdi3, @function
__udivdi3:
.LFB3:
	.cfi_startproc
	li	a4,0
	tail	__udivmoddi4
	.cfi_endproc
.LFE3:
	.size	__udivdi3, .-__udivdi3
	.section	.text.__umoddi3,"ax",@progbits
	.align	2
	.globl	__umoddi3
	.hidden	__umoddi3
	.type	__umoddi3, @function
__umoddi3:
.LFB4:
	.cfi_startproc
	addi	sp,sp,-20
	.cfi_def_cfa_offset 20
	sw	s0,12(sp)
	.cfi_offset 8, -8
	addi	s0,sp,7
	andi	s0,s0,-8
	mv	a4,s0
	sw	ra,16(sp)
	.cfi_offset 1, -4
	call	__udivmoddi4
	lw	a0,0(s0)
	lw	a1,4(s0)
	lw	ra,16(sp)
	.cfi_restore 1
	lw	s0,12(sp)
	.cfi_restore 8
	addi	sp,sp,20
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE4:
	.size	__umoddi3, .-__umoddi3
	.section	.text.__divmoddi4,"ax",@progbits
	.align	2
	.globl	__divmoddi4
	.hidden	__divmoddi4
	.type	__divmoddi4, @function
__divmoddi4:
.LFB1:
	.cfi_startproc
	srai	a5,a3,31
	addi	sp,sp,-28
	.cfi_def_cfa_offset 28
	xor	t0,a2,a5
	srai	t1,a1,31
	sw	a2,0(sp)
	sw	a3,4(sp)
	sub	a2,t0,a5
	xor	a3,a3,a5
	sw	a4,8(sp)
	xor	t2,a0,t1
	sgtu	t0,a2,t0
	sub	a3,a3,a5
	sw	s0,20(sp)
	sw	s1,16(sp)
	.cfi_offset 8, -8
	.cfi_offset 9, -12
	mv	s0,a0
	mv	s1,a1
	sub	a0,t2,t1
	xor	a1,a1,t1
	sub	a3,a3,t0
	lw	t0,8(sp)
	sgtu	t2,a0,t2
	sub	a1,a1,t1
	xor	a5,t1,a5
	sub	a1,a1,t2
	li	a4,0
	sw	ra,24(sp)
	.cfi_offset 1, -4
	sw	t0,12(sp)
	sw	a5,8(sp)
	call	__udivmoddi4
	lw	a5,8(sp)
	xor	a0,a0,a5
	sub	a2,a0,a5
	xor	a3,a1,a5
	sgtu	a0,a2,a0
	sub	a3,a3,a5
	lw	a1,4(sp)
	sub	a3,a3,a0
	lw	a0,0(sp)
	sw	a3,4(sp)
	sw	a2,0(sp)
	call	__muldi3
	sub	a0,s0,a0
	lw	t0,12(sp)
	sgtu	s0,a0,s0
	sub	a1,s1,a1
	lw	a2,0(sp)
	lw	a3,4(sp)
	sub	a1,a1,s0
	lw	ra,24(sp)
	.cfi_restore 1
	lw	s0,20(sp)
	.cfi_restore 8
	sw	a0,0(t0)
	sw	a1,4(t0)
	lw	s1,16(sp)
	.cfi_restore 9
	mv	a0,a2
	mv	a1,a3
	addi	sp,sp,28
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1:
	.size	__divmoddi4, .-__divmoddi4
	.section	.text.__clzsi2,"ax",@progbits
	.align	2
	.globl	__clzsi2
	.hidden	__clzsi2
	.type	__clzsi2, @function
__clzsi2:
.LFB6:
	.cfi_startproc
	li	a3,65536
	sltu	a3,a0,a3
	slli	a3,a3,4
	li	a5,16
	sub	a5,a5,a3
	li	a4,65536
	srl	a5,a0,a5
	addi	a4,a4,-256
	and	a4,a5,a4
	seqz	a4,a4
	slli	a4,a4,3
	li	a2,8
	sub	a2,a2,a4
	srl	a5,a5,a2
	andi	a1,a5,240
	seqz	a1,a1
	slli	a1,a1,2
	li	a2,4
	sub	a2,a2,a1
	srl	a5,a5,a2
	andi	a2,a5,12
	seqz	a2,a2
	li	a0,2
	slli	a2,a2,1
	sub	t1,a0,a2
	srl	a5,a5,t1
	srli	t1,a5,1
	add	a4,a4,a3
	andi	a3,t1,1
	add	a4,a1,a4
	sub	a0,a0,a5
	beq	a3,zero,.L63
	li	a0,0
.L63:
	add	a4,a2,a4
	add	a0,a0,a4
	ret
	.cfi_endproc
.LFE6:
	.size	__clzsi2, .-__clzsi2
	.section	.text.__ctzsi2,"ax",@progbits
	.align	2
	.globl	__ctzsi2
	.hidden	__ctzsi2
	.type	__ctzsi2, @function
__ctzsi2:
.LFB7:
	.cfi_startproc
	slli	t0,a0,16
	srli	t0,t0,16
	seqz	t0,t0
	slli	t0,t0,4
	srl	a5,a0,t0
	andi	a2,a5,255
	seqz	a2,a2
	slli	a2,a2,3
	srl	a5,a5,a2
	andi	a3,a5,15
	seqz	a3,a3
	slli	a3,a3,2
	srl	a5,a5,a3
	andi	a4,a5,3
	seqz	a4,a4
	slli	a4,a4,1
	srl	a5,a5,a4
	andi	a5,a5,3
	not	t1,a5
	add	a2,a2,t0
	srli	a5,a5,1
	li	a1,2
	andi	t1,t1,1
	add	a3,a3,a2
	neg	t1,t1
	sub	a1,a1,a5
	add	a0,a4,a3
	and	a1,t1,a1
	add	a0,a1,a0
	ret
	.cfi_endproc
.LFE7:
	.size	__ctzsi2, .-__ctzsi2
	.section	.text.__ctzdi2,"ax",@progbits
	.align	2
	.globl	__ctzdi2
	.hidden	__ctzdi2
	.type	__ctzdi2, @function
__ctzdi2:
.LFB8:
	.cfi_startproc
	addi	sp,sp,-8
	.cfi_def_cfa_offset 8
	seqz	a5,a0
	sw	s0,0(sp)
	neg	a4,a5
	.cfi_offset 8, -8
	mv	s0,a5
	addi	a5,a5,-1
	and	a1,a1,a4
	and	a0,a5,a0
	or	a0,a1,a0
	sw	ra,4(sp)
	.cfi_offset 1, -4
	slli	s0,s0,5
	call	__ctzsi2
	lw	ra,4(sp)
	.cfi_restore 1
	add	a0,s0,a0
	lw	s0,0(sp)
	.cfi_restore 8
	addi	sp,sp,8
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE8:
	.size	__ctzdi2, .-__ctzdi2
	.section	.text.__clzdi2,"ax",@progbits
	.align	2
	.globl	__clzdi2
	.hidden	__clzdi2
	.type	__clzdi2, @function
__clzdi2:
.LFB9:
	.cfi_startproc
	addi	sp,sp,-8
	.cfi_def_cfa_offset 8
	sw	s0,0(sp)
	.cfi_offset 8, -8
	seqz	s0,a1
	neg	a4,s0
	addi	a5,s0,-1
	and	a0,a0,a4
	and	a5,a5,a1
	or	a0,a5,a0
	sw	ra,4(sp)
	.cfi_offset 1, -4
	slli	s0,s0,5
	call	__clzsi2
	lw	ra,4(sp)
	.cfi_restore 1
	add	a0,s0,a0
	lw	s0,0(sp)
	.cfi_restore 8
	addi	sp,sp,8
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE9:
	.size	__clzdi2, .-__clzdi2
	.globl	__muldi3
	.globl	__clzsi2
	.globl	__ctzsi2
	.globl	__udivsi3
	.globl	__umodsi3
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
