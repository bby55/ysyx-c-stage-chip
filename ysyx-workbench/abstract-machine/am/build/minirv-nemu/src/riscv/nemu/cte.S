#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"cte.c"
	.option nopic
	.attribute arch, "rv32i2p1_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.rodata.__am_irq_handle.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"/home/ysyxbby/ysyx-workbench/abstract-machine/am/src/riscv/nemu/cte.c"
	.align	2
.LC1:
	.string	"Assertion fail at %s:%d\n"
	.section	.text.__am_irq_handle,"ax",@progbits
	.align	2
	.globl	__am_irq_handle
	.hidden	__am_irq_handle
	.type	__am_irq_handle, @function
__am_irq_handle:
.LFB6:
	.cfi_startproc
	la a5, user_handler; lw a5, 0(a5);
	mv	a1,a0
	beq	a5,zero,.L4
	addi	sp,sp,-48
	.cfi_def_cfa_offset 48
	li	a4,4
	sw	ra,44(sp)
	.cfi_offset 1, -4
	sw	zero,4(sp)
	sw	zero,8(sp)
	sw	zero,12(sp)
	sw	a4,0(sp)
	mv	a0,sp
	jalr	a5
	beq	a0,zero,.L10
	lw	ra,44(sp)
	.cfi_restore 1
	addi	sp,sp,48
	.cfi_def_cfa_offset 0
	jr	ra
.L4:
	ret
.L10:
	.cfi_def_cfa_offset 48
	.cfi_offset 1, -4
	li	a2,15
	lla	a1,.LC0
	lla	a0,.LC1
	call	printf
	li	a0,1
	call	halt
	.cfi_endproc
.LFE6:
	.size	__am_irq_handle, .-__am_irq_handle
	.section	.text.cte_init,"ax",@progbits
	.align	2
	.globl	cte_init
	.hidden	cte_init
	.type	cte_init, @function
cte_init:
.LFB7:
	.cfi_startproc
	mv	a5,a0
	lla	a4,__am_asm_trap
#APP
# 25 "/home/ysyxbby/ysyx-workbench/abstract-machine/am/src/riscv/nemu/cte.c" 1
	csrw mtvec, a4
# 0 "" 2
#NO_APP
	li	a0,1
	la a4, user_handler; sw a5, 0(a4);
	ret
	.cfi_endproc
.LFE7:
	.size	cte_init, .-cte_init
	.section	.text.kcontext,"ax",@progbits
	.align	2
	.globl	kcontext
	.hidden	kcontext
	.type	kcontext, @function
kcontext:
.LFB8:
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	li	a0,0
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE8:
	.size	kcontext, .-kcontext
	.section	.text.yield,"ax",@progbits
	.align	2
	.globl	yield
	.hidden	yield
	.type	yield, @function
yield:
.LFB9:
	.cfi_startproc
#APP
# 41 "/home/ysyxbby/ysyx-workbench/abstract-machine/am/src/riscv/nemu/cte.c" 1
	li a7, -1; ecall
# 0 "" 2
#NO_APP
	ret
	.cfi_endproc
.LFE9:
	.size	yield, .-yield
	.section	.text.ienabled,"ax",@progbits
	.align	2
	.globl	ienabled
	.hidden	ienabled
	.type	ienabled, @function
ienabled:
.LFB10:
	.cfi_startproc
	li	a0,0
	ret
	.cfi_endproc
.LFE10:
	.size	ienabled, .-ienabled
	.section	.text.iset,"ax",@progbits
	.align	2
	.globl	iset
	.hidden	iset
	.type	iset, @function
iset:
.LFB11:
	.cfi_startproc
	ret
	.cfi_endproc
.LFE11:
	.size	iset, .-iset
	.section	.sbss.user_handler,"aw",@nobits
	.align	2
	.type	user_handler, @object
	.size	user_handler, 4
user_handler:
	.zero	4
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
