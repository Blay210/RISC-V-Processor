.section .text
.globl _start

_start:
    addi x1, x0, 42
    sw   x1, 0(x0)
    addi x1, x0, 20

    lw   x2, 0(x0)
    add  x3, x2, x2     # load-use hazard

halt:
    jal x0, halt