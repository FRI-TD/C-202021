	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.globl	_sestej                 ## -- Begin function sestej
	.p2align	4, 0x90
_sestej:                                ## @sestej
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	## InlineAsm Start

	movl	%ebx, %eax
	xorl	%eax, %eax

	## InlineAsm End
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$5, -20(%rbp)
	movl	$6, -24(%rbp)
	movl	-20(%rbp), %esi
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %edi
	movl	-24(%rbp), %eax
	movl	%esi, -28(%rbp)         ## 4-byte Spill
	movl	%eax, %esi
	movl	%edx, -32(%rbp)         ## 4-byte Spill
	callq	_sestej
	leaq	L_.str(%rip), %rdi
	movl	-28(%rbp), %esi         ## 4-byte Reload
	movl	-32(%rbp), %edx         ## 4-byte Reload
	movl	%eax, %ecx
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d + %d = %d\n"


.subsections_via_symbols
