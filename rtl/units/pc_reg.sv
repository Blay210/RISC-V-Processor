`timescale 1ns/1ps

module pc_reg #(
    parameter word_t RESET_VECTOR = '0
)(
    // ============ input ============
    input  logic             clk,
    input  logic             rst_n,

    input  riscv_pkg::word_t next_pc,

    // ============ output ============
    output riscv_pkg::word_t pc
);
    
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            pc <= RESET_VECTOR;
        else
            pc <= next_pc;
    end

endmodule