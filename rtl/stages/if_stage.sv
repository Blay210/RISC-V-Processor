`timescale 1ns/1ps

module if_stage (
    input logic clk,
    input logic rst_n,
    input logic branch_taken
    input riscv_pkg::word_t   pc_4,
    input riscv_pkg::word_t   control_target,
    input riscv_pkg::pc_sel_t pc_sel,

    output logic 
);

    import riscv_pkg::*;

    word_t next_pc;
    
    next_pc_logic next_pc_logic (
        .pc_4(pc_4),
        .control_target(control_target),
        .pc_sel(pc_sel),
        .branch_taken(branch_taken),
        .next_pc(next_pc),
    );

    program_counter program_counter (
        .clk(clk),
        .rst_n(rst_n),
        .next_pc(next_pc)
    );

endmodule