`timescale 1ns/1ps

module register_file (
    // ============ input ============
    input  logic clk,
    input  logic reg_write,

    input  riscv_pkg::reg_addr_t rs1_addr,
    input  riscv_pkg::reg_addr_t rs2_addr,
    input  riscv_pkg::reg_addr_t rd_addr,

    input  riscv_pkg::word_t rd_data,

    // ============ output ============
    output riscv_pkg::word_t rs1_data,
    output riscv_pkg::word_t rs2_data
);

    import riscv_pkg::*;

    // registers x0 ~ x31
    word_t registers [0:REG_COUNT-1];


    assign rs1_data = (rs1_addr == X0) 
                    ? '0 
                    : registers[rs1_addr];

    assign rs2_data = (rs2_addr == X0)
                    ? '0 
                    : registers[rs2_addr];


    always_ff @(posedge clk) begin
        if (reg_write && (rd_addr != X0)) begin
            registers[rd_addr] <= rd_data;
        end
    end


endmodule