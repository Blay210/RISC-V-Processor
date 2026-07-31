`timescale 1ns/1ps

module id_stage (
    // ============= input  =============
    input  logic clk,
    input  logic rst_n,
    input  logic wb_reg_write,
    input  riscv_pkg::word_t     raw_inst,
    input  riscv_pkg::word_t     wb_rd_data,
    input  riscv_pkg::reg_addr_t wb_rd_addr,

    // ============= output =============
    output riscv_pkg::word_t     rs1_data,
    output riscv_pkg::word_t     rs2_data,
    output riscv_pkg::word_t     immediate,
    output riscv_pkg::funct3_t   funct3,
    output riscv_pkg::funct7_t   funct7,
    output riscv_pkg::reg_addr_t decoded_rd_addr,
    output riscv_pkg::control_t  control
);

    import riscv_pkg::*;

    inst_t decoded_inst;

    assign decoded_rd_addr = decoded_inst.rd;
    assign funct3 = decoded_inst.funct3;
    assign funct7 = decoded_inst.funct7;


    instruction_decoder instruction_decoder (
        // ========== input  ==========
        .inst(raw_inst),
        // ========== output ==========
        .decoded_inst(decoded_inst)
    );

    control_unit control_unit (
        // ========== input  ==========
        .rst_n(rst_n),
        .opcode(decoded_inst.opcode),
        // ========== output ==========
        .control(control)
    );

    register_file register_file (
        // ========== input  ==========
        .clk(clk),
        .rst_n(rst_n),
        .rd_addr(wb_rd_addr),
        .rd_data(wb_rd_data),
        .reg_write(wb_reg_write),
        .rs1_addr(decoded_inst.rs1),
        .rs2_addr(decoded_inst.rs2),
        // ========== output ==========
        .rs1_data(rs1_data),
        .rs2_data(rs2_data)
    );

    immediate_generator immediate_generator (
        .inst(raw_inst),
        .imm_sel(control.imm_sel),
        .immediate(immediate)
    );
    
endmodule