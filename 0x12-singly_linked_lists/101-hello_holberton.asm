section .data
	hello: db "Hello, Holberton", 0
	fmt: db "%s", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, fmt
	mov rsi, hello
	call printf
	pop rbp
	ret
