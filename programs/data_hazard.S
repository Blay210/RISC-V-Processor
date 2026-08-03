.section .text
.globl _start

_start:
    # --------------------------------------------------
    # 1. 일반 ALU forwarding
    # --------------------------------------------------
    addi x1, x0, 10          # x1 = 10
    addi x2, x0, 20          # x2 = 20

    add  x3, x1, x2          # x3 = 30
                             # x2: EX/MEM forwarding
                             # x1: MEM/WB forwarding 가능

    sub  x4, x3, x1          # x4 = 20
                             # x3: EX/MEM forwarding


    # --------------------------------------------------
    # 2. ALU result -> store-data forwarding
    # --------------------------------------------------
    sw   x4, 0(x0)           # memory[0] = 20
                             # x4 forwarding 필요


    # --------------------------------------------------
    # 3. Load-use hazard: load -> ALU
    # --------------------------------------------------
    lw   x5, 0(x0)           # x5 = 20

    add  x6, x5, x3          # x6 = 50
                             # load-use stall 1 cycle
                             # 이후 MEM/WB -> EX forwarding


    # --------------------------------------------------
    # 4. ALU result -> store forwarding
    # --------------------------------------------------
    sw   x6, 4(x0)           # memory[4] = 50


    # --------------------------------------------------
    # 5. Load-use hazard: load -> branch
    # --------------------------------------------------
    lw   x7, 4(x0)           # x7 = 50

    beq  x7, x6, branch_taken
                             # load-use stall 1 cycle
                             # branch comparator에 forwarding
                             # 조건 참이므로 taken

    addi x8, x0, 111         # 실행되면 안 됨
                             # branch redirect로 flush


branch_taken:
    addi x8, x0, 8           # x8 = 8

    add  x9, x8, x6          # x9 = 58
                             # x8: EX/MEM forwarding


    # --------------------------------------------------
    # 6. 일반 branch dependency 및 flush
    # --------------------------------------------------
    bne  x9, x0, jump_test   # taken
                             # x9 forwarding 필요

    addi x10, x0, 222        # 실행되면 안 됨


    # --------------------------------------------------
    # 7. JAL 및 PC+4 forwarding
    # --------------------------------------------------
jump_test:
    jal  x11, subroutine     # x11 = return_point 주소
                             # 현재 배치에서는 x11 = 64

return_point:
    addi x12, x0, 12         # x12 = 12

    jal  x0, done            # subroutine 재진입 방지


    # --------------------------------------------------
    # 8. JAL link value 사용 및 JALR return
    # --------------------------------------------------
subroutine:
    addi x13, x11, 0         # x13 = x11 = 64
                             # JAL의 PC+4 forwarding/WB 검증

    addi x14, x0, 14         # x14 = 14

    add  x15, x13, x14       # x15 = 78

    jalr x0, 0(x11)          # return_point로 복귀


    # --------------------------------------------------
    # 9. Load -> ALU 재검증
    # --------------------------------------------------
done:
    sw   x15, 8(x0)          # memory[8] = 78

    lw   x16, 8(x0)          # x16 = 78

    add  x17, x16, x12       # x17 = 90
                             # load-use stall 1 cycle


halt:
    jal  x0, halt