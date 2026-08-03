`timescale 1ns/1ps

module register_file (
    // ============ input ============
    input  logic clk,
    input  logic rst_n,
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

    always_comb begin
        if (rs1_addr == X0) rs1_data = '0;
        else if (rd_addr == rs1_addr) rs1_data = rd_data;
        else rs1_data = registers[rs1_addr];

        if (rs2_addr == X0) rs2_data = '0;
        else if (rd_addr == rs2_addr) rs2_data = rd_data;
        else rs2_data = registers[rs2_addr];
    end


    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            // nothing
        end
        else if (reg_write && (rd_addr != X0)) begin
            registers[rd_addr] <= rd_data;
        end
    end


endmodule
