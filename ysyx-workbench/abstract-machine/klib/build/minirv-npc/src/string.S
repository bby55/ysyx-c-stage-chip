#include "/home/ysyxbby/ysyx-workbench/abstract-machine/tools/minirv/inst-replace.h"
	.file	"string.c"
	.option nopic
	.attribute arch, "rv32e2p0_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 4
	.text
	.section	.text.strlen,"ax",@progbits
	.align	2
	.globl	strlen
	.hidden	strlen
	.type	strlen, @function
strlen:
.LFB0:
	.cfi_startproc
	lbu	a5,0(a0)
	mv	a4,a0
	li	a0,0
	beq	a5,zero,.L4
.L3:
	addi	a0,a0,1
	add	a5,a4,a0
	lbu	a5,0(a5)
	bne	a5,zero,.L3
	ret
.L4:
	ret
	.cfi_endproc
.LFE0:
	.size	strlen, .-strlen
	.section	.text.strcpy,"ax",@progbits
	.align	2
	.globl	strcpy
	.hidden	strcpy
	.type	strcpy, @function
strcpy:
.LFB1:
	.cfi_startproc
	lbu	a4,0(a1)
	beq	a4,zero,.L10
	li	a5,0
.L9:
	add	a3,a0,a5
	addi	a5,a5,1
	sb	a4,0(a3)
	add	a4,a1,a5
	lbu	a4,0(a4)
	bne	a4,zero,.L9
	add	a5,a0,a5
	sb	zero,0(a5)
	ret
.L10:
	mv	a5,a0
	sb	zero,0(a5)
	ret
	.cfi_endproc
.LFE1:
	.size	strcpy, .-strcpy
	.section	.text.strncpy,"ax",@progbits
	.align	2
	.globl	strncpy
	.hidden	strncpy
	.type	strncpy, @function
strncpy:
.LFB2:
	.cfi_startproc
	beq	a2,zero,.L13
	li	a5,0
	j	.L16
.L14:
	sb	a4,0(a3)
	addi	a5,a5,1
	beq	a2,a5,.L13
.L16:
	add	a4,a1,a5
	lbu	a4,0(a4)
	add	a3,a0,a5
	bne	a4,zero,.L14
	bleu	a2,a5,.L13
	mv	a5,a3
	add	a2,a0,a2
.L15:
	sb	zero,0(a5)
	addi	a5,a5,1
	bne	a5,a2,.L15
	ret
.L13:
	ret
	.cfi_endproc
.LFE2:
	.size	strncpy, .-strncpy
	.section	.text.strcat,"ax",@progbits
	.align	2
	.globl	strcat
	.hidden	strcat
	.type	strcat, @function
strcat:
.LFB3:
	.cfi_startproc
	lbu	a5,0(a0)
	beq	a5,zero,.L27
	addi	a4,a0,1
	li	a2,0
.L24:
	mv	a5,a4
	lbu	a3,0(a4)
	addi	a4,a4,1
	addi	a2,a2,1
	bne	a3,zero,.L24
.L23:
	lbu	a3,0(a1)
	beq	a3,zero,.L25
	li	a5,0
.L26:
	add	a4,a2,a5
	add	a4,a0,a4
	addi	a5,a5,1
	sb	a3,0(a4)
	add	a4,a1,a5
	lbu	a3,0(a4)
	bne	a3,zero,.L26
	add	a5,a5,a2
	add	a5,a0,a5
.L25:
	sb	zero,0(a5)
	ret
.L27:
	mv	a5,a0
	li	a2,0
	j	.L23
	.cfi_endproc
.LFE3:
	.size	strcat, .-strcat
	.section	.text.strcmp,"ax",@progbits
	.align	2
	.globl	strcmp
	.hidden	strcmp
	.type	strcmp, @function
strcmp:
.LFB4:
	.cfi_startproc
.L34:
	lbu	a5,0(a0)
	lbu	a4,0(a1)
	addi	a0,a0,1
	bne	a5,zero,.L36
	beq	a4,zero,.L39
.L37:
	sub	a0,a5,a4
	ret
.L36:
	addi	a1,a1,1
	beq	a5,a4,.L34
	j	.L37
.L39:
	li	a0,0
	ret
	.cfi_endproc
.LFE4:
	.size	strcmp, .-strcmp
	.section	.text.strncmp,"ax",@progbits
	.align	2
	.globl	strncmp
	.hidden	strncmp
	.type	strncmp, @function
strncmp:
.LFB11:
	.cfi_startproc
	beq	a2,zero,.L44
	add	a2,a0,a2
	j	.L43
.L42:
	beq	a0,a2,.L44
.L43:
	lbu	a5,0(a0)
	lbu	a4,0(a1)
	addi	a0,a0,1
	addi	a1,a1,1
	beq	a5,a4,.L42
	sub	a0,a5,a4
	ret
.L44:
	li	a0,0
	ret
	.cfi_endproc
.LFE11:
	.size	strncmp, .-strncmp
	.section	.text.memset,"ax",@progbits
	.align	2
	.globl	memset
	.hidden	memset
	.type	memset, @function
memset:
.LFB6:
	.cfi_startproc
	andi	a1,a1,0xff
	beq	a2,zero,.L47
	add	a2,a2,a0
	mv	a5,a0
.L48:
	sb	a1,0(a5)
	addi	a5,a5,1
	bne	a5,a2,.L48
.L47:
	ret
	.cfi_endproc
.LFE6:
	.size	memset, .-memset
	.section	.text.memmove,"ax",@progbits
	.align	2
	.globl	memmove
	.hidden	memmove
	.type	memmove, @function
memmove:
.LFB7:
	.cfi_startproc
	beq	a2,zero,.L61
.L55:
	addi	a2,a2,-1
	add	a5,a1,a2
	lbu	a4,0(a5)
	add	a5,a0,a2
	sb	a4,0(a5)
	bne	a2,zero,.L55
.L61:
	ret
	.cfi_endproc
.LFE7:
	.size	memmove, .-memmove
	.section	.text.memcpy,"ax",@progbits
	.align	2
	.globl	memcpy
	.hidden	memcpy
	.type	memcpy, @function
memcpy:
.LFB8:
	.cfi_startproc
	beq	a2,zero,.L63
	add	a2,a1,a2
	mv	a5,a0
.L64:
	lbu	a4,0(a1)
	addi	a1,a1,1
	addi	a5,a5,1
	sb	a4,-1(a5)
	bne	a1,a2,.L64
.L63:
	ret
	.cfi_endproc
.LFE8:
	.size	memcpy, .-memcpy
	.section	.text.memcmp,"ax",@progbits
	.align	2
	.globl	memcmp
	.hidden	memcmp
	.type	memcmp, @function
memcmp:
.LFB9:
	.cfi_startproc
	beq	a2,zero,.L73
	add	a2,a0,a2
	j	.L72
.L71:
	beq	a0,a2,.L73
.L72:
	lbu	a5,0(a0)
	lbu	a4,0(a1)
	addi	a0,a0,1
	addi	a1,a1,1
	beq	a5,a4,.L71
	sub	a0,a5,a4
	ret
.L73:
	li	a0,0
	ret
	.cfi_endproc
.LFE9:
	.size	memcmp, .-memcmp
	.ident	"GCC: (Ubuntu 14.2.0-4ubuntu2) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
