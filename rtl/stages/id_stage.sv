`timescale 1ns/1ps

module id_stage (
    // ============= input  =============
    input  logic clk,
    input  logic rst_n,
    input  riscv_pkg::if_id_t  if_id_in,
    input  riscv_pkg::mem_wb_t mem_wb_in,
    input  riscv_pkg::word_t   wb_rd_data,

    // ============= output =============
    output riscv_pkg::id_ex_t id_ex_out
);

    import riscv_pkg::*;


    // ================ internal signal ================
    inst_t decoded_inst;
    imm_sel_t imm_sel;


    // ================== pass signal ==================
    assign id_ex_out.valid = if_id_in.valid;
    assign id_ex_out.pc    = if_id_in.pc;
    assign id_ex_out.pc4   = if_id_in.pc4;

    assign id_ex_out.rs1_addr = decoded_inst.rs1;
    assign id_ex_out.rs2_addr = decoded_inst.rs2;
    assign id_ex_out.rd_addr  = decoded_inst.rd;
    assign id_ex_out.funct3   = decoded_inst.funct3;
    assign id_ex_out.funct7   = decoded_inst.funct7;


    // ==================== modules ====================
    instruction_decoder instruction_decoder (
        // ========== input  ==========
        .inst(if_id_in.inst),
        // ========== output ==========
        .decoded_inst(decoded_inst)
    );

    control_unit control_unit (
        // ========== input  ==========
        .rst_n(rst_n),
        .opcode(decoded_inst.opcode),
        // ========== output ==========
        .pc_sel(id_ex_out.pc_sel),
        .imm_sel(imm_sel),
        .ex_ctrl(id_ex_out.ex_ctrl),
        .mem_ctrl(id_ex_out.mem_ctrl),
        .wb_ctrl(id_ex_out.wb_ctrl)
    );

    register_file register_file (
        // ========== input  ==========
        .clk(clk),
        .rst_n(rst_n),
        .rd_addr(mem_wb_in.rd_addr),
        .rd_data(wb_rd_data),
        .reg_write(mem_wb_in.valid && mem_wb_in.wb_ctrl.reg_write),
        .rs1_addr(decoded_inst.rs1),
        .rs2_addr(decoded_inst.rs2),
        // ========== output ==========
        .rs1_data(id_ex_out.rs1_data),
        .rs2_data(id_ex_out.rs2_data)
    );

    immediate_generator immediate_generator (
        // ========== input  ==========
        .inst(if_id_in.inst),
        .imm_sel(imm_sel),
        // ========== output ==========
        .immediate(id_ex_out.immediate)
    );
    
endmodule
