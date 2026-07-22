package riscv_pkg;

    localparam int XLEN           = 32;
    localparam int REG_COUNT      = 32;
    localparam int REG_ADDR_WIDTH = $clog2(REG_COUNT);

    typedef logic [REG_ADDR_WIDTH-1:0] reg_addr_t;
    typedef logic [XLEN-1:0] word_t;

    localparam reg_addr_t X0 ='0;

    typedef struct packed {
        logic [6:0] opcode;
        reg_addr_t  rd;
        logic [2:0] funct3;
        reg_addr_t  rs1;
        reg_addr_t  rs2;
        logic [6:0] funct7;
    } inst_t;

    typedef enum logic [2:0] {
        IMM_NONE,
        IMM_I,
        IMM_S,
        IMM_B,
        IMM_U,
        IMM_J
    } imm_sel_t;



endpackage