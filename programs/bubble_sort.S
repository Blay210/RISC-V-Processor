    .section .text
    .globl _start

_start:

    # x10 = base address (0)
    addi x10, x0, 0

    # array[0] = 7
    addi x1, x0, 7
    sw   x1, 0(x10)

    # array[1] = 3
    addi x1, x0, 3
    sw   x1, 4(x10)

    # array[2] = 9
    addi x1, x0, 9
    sw   x1, 8(x10)

    # array[3] = 1
    addi x1, x0, 1
    sw   x1, 12(x10)

    # array[4] = 5
    addi x1, x0, 5
    sw   x1, 16(x10)

    # outer_count = 4
    addi x11, x0, 4

outer_loop:

    addi x12, x0, 0          # j = 0

inner_loop:

    slli x13, x12, 2         # offset = j * 4

    add x14, x10, x13        # ptr = base + offset

    lw  x15, 0(x14)          # a[j]
    lw  x16, 4(x14)          # a[j+1]

    blt x15, x16, no_swap
    beq x15, x16, no_swap

    sw  x16, 0(x14)
    sw  x15, 4(x14)

no_swap:

    addi x12, x12, 1

    blt x12, x11, inner_loop

    addi x11, x11, -1

    bne x11, x0, outer_loop

finish:

    jal x0, finish