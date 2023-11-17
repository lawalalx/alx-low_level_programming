section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 0
    newline db 10, 0

section .text
    global main

extern printf   ; Declare external printf function

main:
    ; Call printf function
    mov rdi, format
    mov rsi, hello
    call printf

    ; Print a new line
    mov rdi, format
    mov rsi, newline
    call printf

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall

