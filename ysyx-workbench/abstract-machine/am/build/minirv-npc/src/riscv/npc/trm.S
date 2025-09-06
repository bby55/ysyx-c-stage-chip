#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"trm.c"
	.option nopic
	.attribute arch, "rv32e2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 4
	.text
	.section	.text.putch,"ax",@progbits
	.align	2
	.globl	putch
	.hidden	putch
	.type	putch, @function
putch:
.LFB0:
	.cfi_startproc
	li	a5,-1610612736
	sb	a0,1016(a5)
	ret
	.cfi_endproc
.LFE0:
	.size	putch, .-putch
	.section	.text.halt,"ax",@progbits
	.align	2
	.globl	halt
	.hidden	halt
	.type	halt, @function
halt:
.LFB1:
	.cfi_startproc
#APP
# 23 "/home/ysyxbby/ysyx-workbench/abstract-machine/am/src/riscv/npc/trm.c" 1
	mv a0, a0; ebreak
# 0 "" 2
#NO_APP
.L4:
	j	.L4
	.cfi_endproc
.LFE1:
	.size	halt, .-halt
	.section	.text._trm_init,"ax",@progbits
	.align	2
	.globl	_trm_init
	.hidden	_trm_init
	.type	_trm_init, @function
_trm_init:
.LFB2:
	.cfi_startproc
	addi	sp,sp,-4
	.cfi_def_cfa_offset 4
	lla	a0,mainargs
	sw	ra,0(sp)
	.cfi_offset 1, -4
	call	main
#APP
# 23 "/home/ysyxbby/ysyx-workbench/abstract-machine/am/src/riscv/npc/trm.c" 1
	mv a0, a0; ebreak
# 0 "" 2
#NO_APP
.L6:
	j	.L6
	.cfi_endproc
.LFE2:
	.size	_trm_init, .-_trm_init
	.section	.rodata.mainargs,"a"
	.align	2
	.type	mainargs, @object
	.size	mainargs, 64
mainargs:
	.string	"the_insert-arg_rule_in_Makefile_will_insert_mainargs_here"
	.zero	6
	.hidden	heap
	.globl	heap
	.section	.sdata.heap,"aw"
	.align	2
	.type	heap, @object
	.size	heap, 8
heap:
	.word	_heap_start
	.word	_pmem_start+134217728
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
