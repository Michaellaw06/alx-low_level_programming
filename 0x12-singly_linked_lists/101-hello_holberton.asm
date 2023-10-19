section .data
    output_format db 'Hello, Holberton', 10, 0 ; String format with newline and null terminator

section .text
    global main
    extern printf

main:
    mov rdi, output_format  ; Load address of the string into rdi
    xor rax, rax            ; Clear rax register
    call printf             ; Call printf
    mov rax, 0              ; Set return value to 0
    ret

