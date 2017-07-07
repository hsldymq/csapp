	.file	"3.57.c"
	.text
	.globl	funct3
	.type	funct3, @function
funct3:
.LFB0:
	.cfi_startproc
	pxor	%xmm1, %xmm1
	cvtsi2sd	(%rdi), %xmm1
	ucomisd	%xmm1, %xmm0
	ja	.L7
	movss	(%rdx), %xmm0
	movaps	%xmm0, %xmm1
	addss	%xmm0, %xmm1
	pxor	%xmm0, %xmm0
	cvtsi2ssq	%rsi, %xmm0
	addss	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm0
	ret
.L7:
	pxor	%xmm0, %xmm0
	cvtsi2ssq	%rsi, %xmm0
	mulss	(%rdx), %xmm0
	cvtss2sd	%xmm0, %xmm0
	ret
	.cfi_endproc
.LFE0:
	.size	funct3, .-funct3
	.ident	"GCC: (GNU) 7.1.1 20170621"
	.section	.note.GNU-stack,"",@progbits
