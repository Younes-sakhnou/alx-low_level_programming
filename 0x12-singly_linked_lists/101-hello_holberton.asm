section .data
message db 'Hello, world!', 0

section .text
global main

main:

push ebp
mov ebp, esp


mov ebx, message


push ebx
call printf
add esp, 4


pop ebp
ret
