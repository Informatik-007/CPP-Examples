	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 10
	.globl	__Z6squarei
	.align	4, 0x90
__Z6squarei:                            ## @_Z6squarei
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %edi
	imull	-4(%rbp), %edi
	movl	%edi, %eax
	popq	%rbp
	retq
	.cfi_endproc


.subsections_via_symbols
