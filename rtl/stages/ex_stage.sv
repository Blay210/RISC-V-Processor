`timescale 1ns/1ps

module ex_stage (
    // ============= input  =============
    input  riscv_pkg::control_t control,
    input  riscv_pkg::word_t    pc,
    input  riscv_pkg::word_t    rs1_data,
    input  riscv_pkg::word_t    rs2_data,
    input  riscv_pkg::word_t    immediate,
    input  riscv_pkg::funct3_t  funct3,
    input  riscv_pkg::funct7_t  funct7,

    // ============= output =============
    output riscv_pkg::word_t alu_result,
    output riscv_pkg::word_t target,
    output logic zero,
    output logic branch_taken
);
    
    import riscv_pkg::*;

    alu_ctrl_t alu_ctrl;
    word_t operand_a, operand_b;

    alu_control_unit alu_control_unit (
        .alu_op(control.alu_op),
        .funct3(funct3),
        .funct7(funct7),
        .alu_ctrl(alu_ctrl)
    );

    alu_mux alu_mux (
        // ========== input  ==========
        .rs1(rs1_data),
        .rs2(rs2_data),
        .pc(pc),
        .immediate(immediate),
        .alu_src(control.alu_src),
        // ========== output ==========
        .operand_a(operand_a),
        .operand_b(operand_b)
    );

    alu alu (
        // ========== input  ==========
        .operand_a(operand_a),
        .operand_b(operand_b),
        .alu_ctrl(alu_ctrl),
        // ========== output ==========
        .result(alu_result)
    );

    // branch module
    branch_comparator branch_comparator (
        // ========== input  ==========
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .funct3(funct3),
        // ========== output ==========
        .branch_taken(branch_taken)
    );

    target_generator target_generator (
        // ========== input  ==========
        .pc(pc),
        .rs1_data(rs1_data),
        .immediate(immediate),
        .pc_sel(control.pc_sel),
        // ========== output ==========
        .target(target)
    );

endmodule