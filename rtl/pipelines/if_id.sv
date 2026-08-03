`timescale 1ns/1ps

module if_id (
    input  logic clk,
    input  logic rst_n,
    input  logic stall,
    input  logic flush,

    input  riscv_pkg::if_id_t if_id_in,
    output riscv_pkg::if_id_t if_id_out 
);

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            if_id_out <= '0;
        end
        else if (flush) begin
            if_id_out <= '0;      // Bubble 삽입
        end
        else if (!stall) begin
            if_id_out <= if_id_in;
        end
    end

endmodule
