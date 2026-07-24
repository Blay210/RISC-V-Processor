`timescale 1ns/1ps

module data_memory #(
    parameter int DEPTH = 256
)(
    input  logic clk,
    input  logic mem_write,
    input  logic mem_read,
    input  riscv_pkg::word_t addr,
    input  riscv_pkg::word_t write_data,

    output riscv_pkg::word_t read_data
);
    
    import riscv_pkg::*;

    word_t memory [0:DEPTH-1];

    logic [$clog2(DEPTH)-1:0] word_addr;
    assign word_addr = addr[$clog2(DEPTH)+1:2];

    always_ff @(posedge clk) begin
        if (mem_write) begin
            memory[word_addr] <= write_data;
        end
    end

    assign read_data = mem_read
                     ? memory[word_addr]
                     : '0;

endmodule