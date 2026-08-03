`timescale 1ns/1ps

module id_ex (
    input  logic clk,
    input  logic rst_n,
    input  logic stall,
    input  logic flush,

    input  riscv_pkg::id_ex_t id_ex_in,
    output riscv_pkg::id_ex_t id_ex_out 
);

    always_ff @( posedge clk or negedge rst_n ) begin
        if (!rst_n) begin
            id_ex_out <= '0;
        end
        else if (flush) begin
            id_ex_out <= '0;      // Bubble 삽입
        end
        else if (!stall) begin
            id_ex_out <= id_ex_in;
        end
    end
    
endmodule
