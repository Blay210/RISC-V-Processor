.section .text
.globl _start

_start:
    # ==================================================
    # 배열 초기화
    # memory[0..7] = 7, 3, 9, 1, 6, 2, 8, 4
    # ==================================================

    addi x1, x0, 0           # x1 = base address

    addi x10, x0, 7
    sw   x10, 0(x1)

    addi x10, x0, 3
    sw   x10, 4(x1)

    addi x10, x0, 9
    sw   x10, 8(x1)

    addi x10, x0, 1
    sw   x10, 12(x1)

    addi x10, x0, 6
    sw   x10, 16(x1)

    addi x10, x0, 2
    sw   x10, 20(x1)

    addi x10, x0, 8
    sw   x10, 24(x1)

    addi x10, x0, 4
    sw   x10, 28(x1)


    # ==================================================
    # Bubble sort
    #
    # x1 = base address
    # x2 = outer index i
    # x3 = inner index j
    # x4 = inner limit = 7 - i
    # x5 = current byte address
    # x6 = a[j]
    # x7 = a[j+1]
    # ==================================================

    addi x2, x0, 0           # i = 0

outer_loop:
    addi x4, x0, 7
    sub  x4, x4, x2          # limit = 7 - i

    addi x3, x0, 0           # j = 0

inner_loop:
    # current address = base + j * 4
    slli x5, x3, 2
    add  x5, x1, x5

    # adjacent values
    lw   x6, 0(x5)
    lw   x7, 4(x5)

    # if a[j] < a[j+1], already ordered
    blt  x6, x7, no_swap

    # if equal, no swap
    beq  x6, x7, no_swap

    # swap
    sw   x7, 0(x5)
    sw   x6, 4(x5)

no_swap:
    addi x3, x3, 1           # j++

    blt  x3, x4, inner_loop  # while j < limit

    addi x2, x2, 1           # i++

    addi x9, x0, 7
    blt  x2, x9, outer_loop  # while i < 7


sort_done:
    # ==================================================
    # 결과 확인
    # ==================================================

    lw   x20, 0(x1)
    lw   x21, 4(x1)
    lw   x22, 8(x1)
    lw   x23, 12(x1)
    lw   x24, 16(x1)
    lw   x25, 20(x1)
    lw   x26, 24(x1)
    lw   x27, 28(x1)

    addi x31, x0, 1          # completion flag

halt:
    jal  x0, halt