    global main
    exrern printf
main:
    mov edi, format
    xor eax, eax
    call printf
    mov eax, 0
    ret
format: db 'hello, Holberton\n',0
