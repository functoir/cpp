	.file	"Array.cpp"
	.intel_syntax noprefix
	.text
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.globl	main
	.type	main, @function
main:
.LFB1736:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1736
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 56
	.cfi_offset 3, -24
	lea	rax, -48[rbp]
	mov	rdi, rax
.LEHB0:
	call	_ZN5ArrayIiEC1Ev
.LEHE0:
	mov	DWORD PTR -20[rbp], 0
	jmp	.L2
.L3:
	mov	edx, DWORD PTR -20[rbp]
	lea	rax, -48[rbp]
	mov	esi, edx
	mov	rdi, rax
.LEHB1:
	call	_ZN5ArrayIiE6appendEi
	add	DWORD PTR -20[rbp], 1
.L2:
	cmp	DWORD PTR -20[rbp], 999
	jle	.L3
	lea	rax, -48[rbp]
	mov	rdi, rax
	call	_ZN5ArrayIiE5printEv
	mov	esi, 16
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
	call	_ZNSolsEm@PLT
	mov	rdx, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E@PLT
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZN5ArrayIcEC1Ev
.LEHE1:
	mov	DWORD PTR -24[rbp], 0
	jmp	.L4
.L5:
	mov	eax, DWORD PTR -24[rbp]
	movsx	rdx, eax
	imul	rdx, rdx, 1321528399
	shr	rdx, 32
	sar	edx, 3
	mov	ecx, eax
	sar	ecx, 31
	sub	edx, ecx
	imul	ecx, edx, 26
	sub	eax, ecx
	mov	edx, eax
	mov	eax, edx
	add	eax, 97
	movsx	edx, al
	lea	rax, -64[rbp]
	mov	esi, edx
	mov	rdi, rax
.LEHB2:
	call	_ZN5ArrayIcE6appendEc
	add	DWORD PTR -24[rbp], 1
.L4:
	cmp	DWORD PTR -24[rbp], 99
	jle	.L5
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZN5ArrayIcE5printEv
	mov	esi, 16
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
	call	_ZNSolsEm@PLT
	mov	rdx, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE2:
	mov	ebx, 0
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZN5ArrayIcED1Ev
	lea	rax, -48[rbp]
	mov	rdi, rax
	call	_ZN5ArrayIiED1Ev
	mov	eax, ebx
	jmp	.L11
.L10:
	mov	rbx, rax
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZN5ArrayIcED1Ev
	jmp	.L8
.L9:
	mov	rbx, rax
.L8:
	lea	rax, -48[rbp]
	mov	rdi, rax
	call	_ZN5ArrayIiED1Ev
	mov	rax, rbx
	mov	rdi, rax
.LEHB3:
	call	_Unwind_Resume@PLT
.LEHE3:
.L11:
	mov	rbx, QWORD PTR -8[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1736:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1736:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1736-.LLSDACSB1736
.LLSDACSB1736:
	.uleb128 .LEHB0-.LFB1736
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1736
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L9-.LFB1736
	.uleb128 0
	.uleb128 .LEHB2-.LFB1736
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L10-.LFB1736
	.uleb128 0
	.uleb128 .LEHB3-.LFB1736
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE1736:
	.text
	.size	main, .-main
	.section	.text._ZN5ArrayIiEC2Ev,"axG",@progbits,_ZN5ArrayIiEC5Ev,comdat
	.align 2
	.weak	_ZN5ArrayIiEC2Ev
	.type	_ZN5ArrayIiEC2Ev, @function
_ZN5ArrayIiEC2Ev:
.LFB1998:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 8[rax], 0
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 12[rax], 256
	mov	rax, QWORD PTR -8[rbp]
	mov	eax, DWORD PTR 12[rax]
	cdqe
	movabs	rdx, 2305843009213693950
	cmp	rax, rdx
	ja	.L13
	sal	rax, 2
	jmp	.L15
.L13:
	call	__cxa_throw_bad_array_new_length@PLT
.L15:
	mov	rdi, rax
	call	_Znam@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], rdx
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1998:
	.size	_ZN5ArrayIiEC2Ev, .-_ZN5ArrayIiEC2Ev
	.weak	_ZN5ArrayIiEC1Ev
	.set	_ZN5ArrayIiEC1Ev,_ZN5ArrayIiEC2Ev
	.section	.text._ZN5ArrayIiED2Ev,"axG",@progbits,_ZN5ArrayIiED5Ev,comdat
	.align 2
	.weak	_ZN5ArrayIiED2Ev
	.type	_ZN5ArrayIiED2Ev, @function
_ZN5ArrayIiED2Ev:
.LFB2001:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	je	.L18
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdi, rax
	call	_ZdaPv@PLT
.L18:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2001:
	.size	_ZN5ArrayIiED2Ev, .-_ZN5ArrayIiED2Ev
	.weak	_ZN5ArrayIiED1Ev
	.set	_ZN5ArrayIiED1Ev,_ZN5ArrayIiED2Ev
	.section	.text._ZN5ArrayIiE6appendEi,"axG",@progbits,_ZN5ArrayIiE6appendEi,comdat
	.align 2
	.weak	_ZN5ArrayIiE6appendEi
	.type	_ZN5ArrayIiE6appendEi, @function
_ZN5ArrayIiE6appendEi:
.LFB2003:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	DWORD PTR -28[rbp], esi
	mov	rax, QWORD PTR -24[rbp]
	mov	edx, DWORD PTR 8[rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 12[rax]
	cmp	edx, eax
	jl	.L20
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 12[rax]
	lea	edx, [rax+rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	DWORD PTR 12[rax], edx
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 12[rax]
	cdqe
	movabs	rdx, 2305843009213693950
	cmp	rax, rdx
	ja	.L21
	sal	rax, 2
	mov	rdi, rax
	call	_Znam@PLT
	mov	QWORD PTR -16[rbp], rax
	mov	DWORD PTR -4[rbp], 0
	jmp	.L23
.L21:
	call	__cxa_throw_bad_array_new_length@PLT
.L24:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	sal	rax, 2
	add	rax, rdx
	mov	edx, DWORD PTR -4[rbp]
	movsx	rdx, edx
	lea	rcx, 0[0+rdx*4]
	mov	rdx, QWORD PTR -16[rbp]
	add	rdx, rcx
	mov	eax, DWORD PTR [rax]
	mov	DWORD PTR [rdx], eax
	add	DWORD PTR -4[rbp], 1
.L23:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 8[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L24
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	je	.L25
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdi, rax
	call	_ZdaPv@PLT
.L25:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	QWORD PTR [rax], rdx
.L20:
	mov	edx, DWORD PTR -28[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, QWORD PTR [rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 8[rax]
	lea	esi, 1[rax]
	mov	rcx, QWORD PTR -24[rbp]
	mov	DWORD PTR 8[rcx], esi
	cdqe
	sal	rax, 2
	add	rax, rdi
	mov	DWORD PTR [rax], edx
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2003:
	.size	_ZN5ArrayIiE6appendEi, .-_ZN5ArrayIiE6appendEi
	.section	.rodata
.LC0:
	.string	" "
	.section	.text._ZN5ArrayIiE5printEv,"axG",@progbits,_ZN5ArrayIiE5printEv,comdat
	.align 2
	.weak	_ZN5ArrayIiE5printEv
	.type	_ZN5ArrayIiE5printEv, @function
_ZN5ArrayIiE5printEv:
.LFB2004:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	DWORD PTR -4[rbp], 0
	jmp	.L27
.L29:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	sal	rax, 2
	add	rax, rdx
	mov	eax, DWORD PTR [rax]
	mov	esi, eax
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
	call	_ZNSolsEi@PLT
	mov	rdx, rax
	lea	rax, .LC0[rip]
	mov	rsi, rax
	mov	rdi, rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	mov	ecx, DWORD PTR -4[rbp]
	movsx	rax, ecx
	imul	rax, rax, 1717986919
	shr	rax, 32
	sar	eax, 2
	mov	esi, ecx
	sar	esi, 31
	sub	eax, esi
	mov	edx, eax
	mov	eax, edx
	sal	eax, 2
	add	eax, edx
	add	eax, eax
	sub	ecx, eax
	mov	edx, ecx
	cmp	edx, 9
	jne	.L28
	mov	rax, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rax
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E@PLT
.L28:
	add	DWORD PTR -4[rbp], 1
.L27:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 8[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L29
	mov	rax, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rax
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2004:
	.size	_ZN5ArrayIiE5printEv, .-_ZN5ArrayIiE5printEv
	.section	.text._ZN5ArrayIcEC2Ev,"axG",@progbits,_ZN5ArrayIcEC5Ev,comdat
	.align 2
	.weak	_ZN5ArrayIcEC2Ev
	.type	_ZN5ArrayIcEC2Ev, @function
_ZN5ArrayIcEC2Ev:
.LFB2009:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 8[rax], 0
	mov	rax, QWORD PTR -8[rbp]
	mov	DWORD PTR 12[rax], 256
	mov	rax, QWORD PTR -8[rbp]
	mov	eax, DWORD PTR 12[rax]
	cdqe
	mov	rdi, rax
	call	_Znam@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], rdx
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2009:
	.size	_ZN5ArrayIcEC2Ev, .-_ZN5ArrayIcEC2Ev
	.weak	_ZN5ArrayIcEC1Ev
	.set	_ZN5ArrayIcEC1Ev,_ZN5ArrayIcEC2Ev
	.section	.text._ZN5ArrayIcED2Ev,"axG",@progbits,_ZN5ArrayIcED5Ev,comdat
	.align 2
	.weak	_ZN5ArrayIcED2Ev
	.type	_ZN5ArrayIcED2Ev, @function
_ZN5ArrayIcED2Ev:
.LFB2012:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	je	.L33
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdi, rax
	call	_ZdaPv@PLT
.L33:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2012:
	.size	_ZN5ArrayIcED2Ev, .-_ZN5ArrayIcED2Ev
	.weak	_ZN5ArrayIcED1Ev
	.set	_ZN5ArrayIcED1Ev,_ZN5ArrayIcED2Ev
	.section	.text._ZN5ArrayIcE6appendEc,"axG",@progbits,_ZN5ArrayIcE6appendEc,comdat
	.align 2
	.weak	_ZN5ArrayIcE6appendEc
	.type	_ZN5ArrayIcE6appendEc, @function
_ZN5ArrayIcE6appendEc:
.LFB2014:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	eax, esi
	mov	BYTE PTR -28[rbp], al
	mov	rax, QWORD PTR -24[rbp]
	mov	edx, DWORD PTR 8[rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 12[rax]
	cmp	edx, eax
	jl	.L35
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 12[rax]
	lea	edx, [rax+rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	DWORD PTR 12[rax], edx
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 12[rax]
	cdqe
	mov	rdi, rax
	call	_Znam@PLT
	mov	QWORD PTR -16[rbp], rax
	mov	DWORD PTR -4[rbp], 0
	jmp	.L36
.L37:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	add	rax, rdx
	mov	edx, DWORD PTR -4[rbp]
	movsx	rcx, edx
	mov	rdx, QWORD PTR -16[rbp]
	add	rdx, rcx
	movzx	eax, BYTE PTR [rax]
	mov	BYTE PTR [rdx], al
	add	DWORD PTR -4[rbp], 1
.L36:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 8[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L37
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR [rax]
	test	rax, rax
	je	.L38
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rdi, rax
	call	_ZdaPv@PLT
.L38:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	QWORD PTR [rax], rdx
.L35:
	movzx	edx, BYTE PTR -28[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, QWORD PTR [rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 8[rax]
	lea	esi, 1[rax]
	mov	rcx, QWORD PTR -24[rbp]
	mov	DWORD PTR 8[rcx], esi
	cdqe
	add	rax, rdi
	mov	BYTE PTR [rax], dl
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2014:
	.size	_ZN5ArrayIcE6appendEc, .-_ZN5ArrayIcE6appendEc
	.section	.text._ZN5ArrayIcE5printEv,"axG",@progbits,_ZN5ArrayIcE5printEv,comdat
	.align 2
	.weak	_ZN5ArrayIcE5printEv
	.type	_ZN5ArrayIcE5printEv, @function
_ZN5ArrayIcE5printEv:
.LFB2015:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	DWORD PTR -4[rbp], 0
	jmp	.L40
.L42:
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	eax, DWORD PTR -4[rbp]
	cdqe
	add	rax, rdx
	movzx	eax, BYTE PTR [rax]
	movsx	eax, al
	mov	esi, eax
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c@PLT
	mov	rdx, rax
	lea	rax, .LC0[rip]
	mov	rsi, rax
	mov	rdi, rdx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	mov	ecx, DWORD PTR -4[rbp]
	movsx	rax, ecx
	imul	rax, rax, 1717986919
	shr	rax, 32
	sar	eax, 2
	mov	esi, ecx
	sar	esi, 31
	sub	eax, esi
	mov	edx, eax
	mov	eax, edx
	sal	eax, 2
	add	eax, edx
	add	eax, eax
	sub	ecx, eax
	mov	edx, ecx
	cmp	edx, 9
	jne	.L41
	mov	rax, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rax
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E@PLT
.L41:
	add	DWORD PTR -4[rbp], 1
.L40:
	mov	rax, QWORD PTR -24[rbp]
	mov	eax, DWORD PTR 8[rax]
	cmp	DWORD PTR -4[rbp], eax
	jl	.L42
	mov	rax, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rax
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2015:
	.size	_ZN5ArrayIcE5printEv, .-_ZN5ArrayIcE5printEv
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2257:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR -4[rbp], edi
	mov	DWORD PTR -8[rbp], esi
	cmp	DWORD PTR -4[rbp], 1
	jne	.L45
	cmp	DWORD PTR -8[rbp], 65535
	jne	.L45
	lea	rax, _ZStL8__ioinit[rip]
	mov	rdi, rax
	call	_ZNSt8ios_base4InitC1Ev@PLT
	lea	rax, __dso_handle[rip]
	mov	rdx, rax
	lea	rax, _ZStL8__ioinit[rip]
	mov	rsi, rax
	mov	rax, QWORD PTR _ZNSt8ios_base4InitD1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
.L45:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2257:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2258:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 65535
	mov	edi, 1
	call	_Z41__static_initialization_and_destruction_0ii
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2258:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Debian 11.2.0-10) 11.2.0"
	.section	.note.GNU-stack,"",@progbits
