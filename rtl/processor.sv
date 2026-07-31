`timescale 1ns/1ps

module processor (
    input logic clk,
    input logic rst_n
);

    import riscv_pkg::*;

    logic branch_taken;
    logic zero;

    word_t target;
    word_t raw_inst;
    word_t pc, pc_4;
    word_t rs1_data, rs2_data;
    word_t immediate;
    word_t alu_result;
    word_t mem_read_data;
    word_t wb_data;
    reg_addr_t rd_addr;
    
    control_t control;
    funct3_t funct3;
    funct7_t funct7;
    
    if_stage u_if_stage (
        // ========== input  ==========
        .clk(clk),
        .rst_n(rst_n),
        .branch_taken(branch_taken),
        .control_target(target),
        .pc_sel(control.pc_sel),
        // ========== output ==========
        .raw_inst(raw_inst),
        .pc(pc),
        .pc_4(pc_4)
    );

    id_stage u_id_stage (
        // ========== input  ==========
        .clk(clk),
        .rst_n(rst_n),
        .wb_reg_write(control.reg_write),
        .raw_inst(raw_inst),
        .wb_rd_data(wb_data),
        .wb_rd_addr(rd_addr),
        // ========== output ==========
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .immediate(immediate),
        .funct3(funct3),
        .funct7(funct7),
        .decoded_rd_addr(rd_addr),
        .control(control)
    );

    ex_stage u_ex_stage (
        // ========== input  ==========
        .control(control),
        .pc(pc),
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .immediate(immediate),
        .funct3(funct3),
        .funct7(funct7),
        // ========== output ==========
        .alu_result(alu_result),
        .target(target),
        .zero(zero),
        .branch_taken(branch_taken)
    );

    mem_stage u_mem_stage (
        // ========== input  ==========
        .clk(clk),
        .rst_n(rst_n),
        .control(control),
        .alu_result(alu_result),
        .rs2_data(rs2_data),
        // ========== output ==========
        .mem_read_data(mem_read_data)
    );

    wb_stage u_wb_stage (
        // ============= input  =============
        .alu_result(alu_result),
        .mem_read_data(mem_read_data),
        .pc_4(pc_4),
        .control(control),
        // ============= output =============
        .wb_data(wb_data)

    );

endmodule