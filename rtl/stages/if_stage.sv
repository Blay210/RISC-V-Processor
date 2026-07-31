`timescale 1ns/1ps

module if_stage #(
        parameter string PROGRAM_FILE = "rtl/programs/program.hex"
    ) (
    // ============= input  =============
    input logic clk,
    input logic rst_n,
    input logic branch_taken,
    input riscv_pkg::word_t   control_target,
    input riscv_pkg::pc_sel_t pc_sel,
    
    // ============= output =============
    output riscv_pkg::word_t raw_inst,
    output riscv_pkg::word_t pc,
    output riscv_pkg::word_t pc_4
);

    import riscv_pkg::*;

    word_t next_pc;
    assign pc_4 = pc + word_t'(4);
    
    next_pc_logic next_pc_logic (
        // ========== input  ==========
        .pc_4(pc_4),
        .pc_sel(pc_sel),
        .branch_taken(branch_taken),
        .control_target(control_target),
        // ========== output ==========
        .next_pc(next_pc)
    );

    program_counter program_counter (
        // ========== input  ==========
        .clk(clk),
        .rst_n(rst_n),
        .next_pc(next_pc),
        // ========== output ==========
        .pc(pc)
    );

    instruction_memory #(
        .PROGRAM_FILE(PROGRAM_FILE)
    ) instruction_memory (
        // ========== input  ==========
        .pc(pc),
        // ========== output ==========
        .inst(raw_inst)
    );

endmodule