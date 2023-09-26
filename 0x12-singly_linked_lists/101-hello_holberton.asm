section .data
	hello db "Hello, Holberton", 0
	format db "%s", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, format
	mov rax, 0
	lea rsi, [rel hello]
	call printf
	pop rbp
	ret
