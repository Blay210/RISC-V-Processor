`timescale 1ns/1ps

module ex_mem (
    input  logic clk,
    input  logic rst_n,
    input  logic stall,
    input  logic flush,

    input  riscv_pkg::ex_mem_t ex_mem_in,
    output riscv_pkg::ex_mem_t ex_mem_out 
);

    always_ff @( posedge clk or negedge rst_n ) begin
        if (!rst_n) begin
            ex_mem_out <= '0;
        end
        else if (flush) begin
            ex_mem_out <= '0;      // Bubble 삽입
        end
        else if (!stall) begin
            ex_mem_out <= ex_mem_in;
        end
    end
    
endmodule
