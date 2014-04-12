	.file	"test01.c"
	.section	.rodata
.LC0:
	.string	"a = %d,\tb = %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$4, -8(%rbp)
	leaq	-8(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	exchange
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	movl	-4(%rbp), %edx
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.8.2 20140206 (prerelease)"
	.section	.note.GNU-stack,"",@progbits
