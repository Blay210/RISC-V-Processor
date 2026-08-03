.section .text
.globl _start

_start:
    # --------------------------------------------------
    # Test 1: ADDI
    # --------------------------------------------------
    addi x1, x0, 10

    # x1이 WB까지 도달할 시간을 확보
    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0

    addi x2, x0, 20

    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0

    # --------------------------------------------------
    # Test 2: ADD
    # expected: x3 = 30
    # --------------------------------------------------
    add x3, x1, x2

    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0

    # --------------------------------------------------
    # Test 3: SW / LW
    # memory[0] = 30
    # --------------------------------------------------
    sw x3, 0(x0)

    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0

    lw x4, 0(x0)

    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0

    # --------------------------------------------------
    # Test 4: Branch taken + flush
    # x3 == x4이므로 success로 이동해야 함
    # --------------------------------------------------
    beq x3, x4, success

    # 이 명령들은 잘못된 경로에 있으므로 flush되어야 함
    addi x5, x0, -1
    addi x6, x0, -1

success:
    addi x5, x0, 100

    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0

    # --------------------------------------------------
    # Test 5: JAL + flush + link address
    # --------------------------------------------------
    jal x6, jump_target

    # 실행되면 안 되는 명령
    addi x7, x0, -1
    addi x8, x0, -1

jump_target:
    addi x7, x0, 77

    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0
    addi x0, x0, 0

halt:
    jal x0, halt