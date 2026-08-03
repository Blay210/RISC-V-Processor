`timescale 1ns/1ps

module ex_stage (
    // ============= input  =============
    input  riscv_pkg::id_ex_t id_ex_in,

    // ============= output =============
    output logic redirect_valid,
    output riscv_pkg::word_t redirect_pc,
    output riscv_pkg::ex_mem_t ex_mem_out
);

    import riscv_pkg::*;

    // ================ internal signal ================
    alu_ctrl_t alu_ctrl;
    word_t operand_a, operand_b;


    // ================== pass signal ==================
    assign ex_mem_out.valid = id_ex_in.valid;
    assign ex_mem_out.pc4   = id_ex_in.pc4;

    assign ex_mem_out.store_data = id_ex_in.rs2_data;
    assign ex_mem_out.rd_addr    = id_ex_in.rd_addr;

    assign ex_mem_out.mem_ctrl = id_ex_in.mem_ctrl;
    assign ex_mem_out.wb_ctrl  = id_ex_in.wb_ctrl;


    // ==================== modules ====================
    alu_control_unit alu_control_unit (
        // ========== input  ==========
        .alu_op(id_ex_in.ex_ctrl.alu_op),
        .funct3(id_ex_in.funct3),
        .funct7(id_ex_in.funct7),
        // ========== output ==========
        .alu_ctrl(alu_ctrl)
    );

    alu_mux alu_mux (
        // ========== input  ==========
        .pc(id_ex_in.pc),
        .rs1(id_ex_in.rs1_data),
        .rs2(id_ex_in.rs2_data),
        .immediate(id_ex_in.immediate),
        .alu_src(id_ex_in.ex_ctrl.alu_src),
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
        .result(ex_mem_out.alu_result)
    );

    // pc_target module
    pc_control_unit u_pc_control_unit (
        .id_ex(id_ex_in),
        .redirect_valid(redirect_valid),
        .redirect_pc(redirect_pc)
    );

endmodule
