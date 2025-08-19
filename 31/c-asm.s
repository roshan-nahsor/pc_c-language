	.file	"c-asm.c"
	.option nopic
	.attribute arch, "rv32i2p1"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.globl	piyush
	.type	piyush, @function
piyush:
	addi	sp,sp,-32
	sw	s0,28(sp)
	addi	s0,sp,32
	li	a5,3
	sw	a5,-20(s0)
	li	a5,2
	sw	a5,-24(s0)
	lw	a4,-20(s0)
	li	a5,1
	bne	a4,a5,.L2
	lw	a5,-24(s0)
	addi	a5,a5,1
	sw	a5,-24(s0)
	j	.L1
.L2:
	lw	a4,-20(s0)
	li	a5,2
	bne	a4,a5,.L4
	lw	a5,-24(s0)
	addi	a5,a5,2
	sw	a5,-24(s0)
	j	.L1
.L4:
	lw	a4,-20(s0)
	li	a5,3
	bne	a4,a5,.L5
	lw	a5,-24(s0)
	addi	a5,a5,3
	sw	a5,-24(s0)
	j	.L1
.L5:
	lw	a5,-24(s0)
	addi	a5,a5,100
	sw	a5,-24(s0)
	nop
.L1:
	lw	s0,28(sp)
	addi	sp,sp,32
	jr	ra
	.size	piyush, .-piyush
	.ident	"GCC: (13.2.0-11ubuntu1+12) 13.2.0"
