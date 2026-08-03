`timescale 1ns/1ps

package riscv_pkg;

    localparam int XLEN           = 32;
    localparam int REG_COUNT      = 32;
    localparam int REG_ADDR_WIDTH = $clog2(REG_COUNT);

    localparam logic [6:0] FUNCT7_BASE = 7'b0000000;
    localparam logic [6:0] FUNCT7_ALT  = 7'b0100000;


    typedef logic [REG_ADDR_WIDTH-1:0] reg_addr_t;
    typedef logic [XLEN-1:0] word_t;
    typedef logic [6:0] opcode_bits_t;
    typedef logic [2:0] funct3_t;
    typedef logic [6:0] funct7_t;


    localparam reg_addr_t X0 ='0;
    localparam funct3_t FUNCT3_BEQ  = 3'b000;
    localparam funct3_t FUNCT3_BNE  = 3'b001;
    localparam funct3_t FUNCT3_BLT  = 3'b100;
    localparam funct3_t FUNCT3_BGE  = 3'b101;
    localparam funct3_t FUNCT3_BLTU = 3'b110;
    localparam funct3_t FUNCT3_BGEU = 3'b111;


    typedef enum logic [6:0] {
        OPCODE_LOAD     = 7'b0000011,
        OPCODE_OP_IMM   = 7'b0010011,
        OPCODE_AUIPC    = 7'b0010111,
        OPCODE_STORE    = 7'b0100011,
        OPCODE_OP       = 7'b0110011,
        OPCODE_LUI      = 7'b0110111,
        OPCODE_BRANCH   = 7'b1100011,
        OPCODE_JALR     = 7'b1100111,
        OPCODE_JAL      = 7'b1101111,
        OPCODE_SYSTEM   = 7'b1110011
    } opcode_t;

    typedef enum logic [2:0] {
        IMM_NONE,
        IMM_I,
        IMM_S,
        IMM_B,
        IMM_U,
        IMM_J
    } imm_sel_t;

    typedef enum logic [2:0] {
        ALU_OP_ADD,
        ALU_OP_REG,
        ALU_OP_IMM
    } alu_op_t;

    typedef enum logic [3:0] {
        ALU_ADD,
        ALU_SUB,
        ALU_AND,
        ALU_OR,
        ALU_XOR,
        ALU_SLL,
        ALU_SRL,
        ALU_SRA,
        ALU_SLT,
        ALU_SLTU
    } alu_ctrl_t;

    typedef enum logic [1:0] {
        ALU_A_RS1,
        ALU_A_PC,
        ALU_A_ZERO
    } alu_src_a_t;

    typedef enum logic {
        ALU_B_RS2,
        ALU_B_IMM
    } alu_src_b_t;

    typedef enum logic [1:0] {
        WB_ALU,
        WB_MEM,
        WB_PC_4
    } wb_sel_t;

    typedef enum logic [1:0] {
        PC_NEXT_4,
        PC_NEXT_BRANCH,
        PC_NEXT_JAL,
        PC_NEXT_JALR
    } pc_sel_t;


    typedef enum logic[1:0] {
        FWD_NONE,
        FWD_EXMEM,
        FWD_MEMWB
    } forward_sel_t;

    
    
    typedef struct packed {
        opcode_bits_t opcode;
        reg_addr_t    rd;
        funct3_t      funct3;
        reg_addr_t    rs1;
        reg_addr_t    rs2;
        funct7_t      funct7;
    } inst_t;

    typedef struct packed {
        alu_src_a_t a;
        alu_src_b_t b;
    } alu_src_t;




    // ===================================================
    //              pipeline control signals
    // ===================================================
    typedef struct packed {
        alu_op_t  alu_op;
        alu_src_t alu_src;
    } ex_ctrl_t;

    typedef struct packed {
        logic mem_read;
        logic mem_write;
    } mem_ctrl_t;

    typedef struct packed {
        logic    reg_write;
        wb_sel_t wb_sel;
    } wb_ctrl_t;
    // ===================================================



    // ===================================================
    //                 pipeline register
    // ===================================================
    typedef struct packed {
        logic  valid;
        word_t pc;
        word_t pc4;
        word_t inst;

    } if_id_t;

    typedef struct packed {
        logic valid;

        word_t pc;
        word_t pc4;

        word_t rs1_data;
        word_t rs2_data;
        word_t immediate;

        reg_addr_t rs1_addr;
        reg_addr_t rs2_addr;
        reg_addr_t rd_addr;

        funct3_t funct3;
        funct7_t funct7;

        pc_sel_t   pc_sel;
        ex_ctrl_t  ex_ctrl;
        mem_ctrl_t mem_ctrl;
        wb_ctrl_t  wb_ctrl;

    } id_ex_t;

    typedef struct packed {
        logic valid;

        word_t     pc4;
        word_t     alu_result;
        word_t     store_data;
        reg_addr_t rd_addr;

        mem_ctrl_t mem_ctrl;
        wb_ctrl_t  wb_ctrl;

    } ex_mem_t;

    typedef struct packed {
        logic valid;

        word_t     pc4;
        word_t     mem_data;
        word_t     alu_result;
        reg_addr_t rd_addr;

        wb_ctrl_t  wb_ctrl;

    } mem_wb_t;

    // ===================================================




endpackage
