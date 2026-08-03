`timescale 1ns/1ps

module if_stage #(
        parameter string PROGRAM_FILE = "rtl/programs/program.hex"
    ) (
    // ============= input  =============
    input logic clk,
    input logic rst_n,
    input logic redirect_valid,
    input riscv_pkg::word_t redirect_pc,
    
    // ============= output =============
    output riscv_pkg::if_id_t if_id
);

    import riscv_pkg::*;


    // ================ internal signal ================
    word_t pc, pc4, next_pc;


    assign pc4 = pc + word_t'(4);
    assign if_id.valid = 1;
    assign if_id.pc    = pc;
    assign if_id.pc4   = pc4;

    
    next_pc_logic next_pc_logic (
        // ========== input  ==========
        .pc4(pc4),
        .redirect_valid(redirect_valid),
        .redirect_pc(redirect_pc),
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
        .inst(if_id.inst)
    );

endmodule
