`timescale 1ns/1ps

module alu_mux (
    input  riscv_pkg::word_t    rs_1,
    input  riscv_pkg::word_t    rs_2,
    input  riscv_pkg::word_t    pc,
    input  riscv_pkg::word_t    immediate,
    input  riscv_pkg::alu_src_t alu_src,

    output riscv_pkg::word_t    operand_a,
    output riscv_pkg::word_t    operand_b
);

    import riscv_pkg::*;

    always_comb begin
        unique case (alu_src.a)
            ALU_A_RS1:  operand_a = rs_1;
            ALU_A_PC:   operand_a = pc;
            ALU_A_ZERO: operand_a = '0;
            default:    operand_a = '0;
        endcase

        unique case (alu_src.b)
            ALU_B_RS2:  operand_b = rs_2;
            ALU_B_IMM:  operand_b = immediate;
            default:    operand_b = '0;
        endcase
    end
    
endmodule