section .data
	format db "Hello, Holberton", 0

section .text
	global _start_asm

_start_asm:
	mov edi, format
	xor eax, eax

	call printf

	mov eax, 60
	xor edi, edi
	syscall
