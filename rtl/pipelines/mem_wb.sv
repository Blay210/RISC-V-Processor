`timescale 1ns/1ps

module mem_wb (
    input  logic clk,
    input  logic rst_n,
    input  logic stall,
    input  logic flush,

    input  riscv_pkg::mem_wb_t mem_wb_in,
    output riscv_pkg::mem_wb_t mem_wb_out 
);

    always_ff @( posedge clk or negedge rst_n ) begin
        if (!rst_n) begin
            mem_wb_out <= '0;
        end
        else if (flush) begin
            mem_wb_out <= '0;      // Bubble 삽입
        end
        else if (!stall) begin
            mem_wb_out <= mem_wb_in;
        end
    end
    
endmodule
