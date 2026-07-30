`timescale 1ns/1ps

module mem_stage (
    // ============= input  =============
    input logic clk,
    input riscv_pkg::control_t control,
    input riscv_pkg::word_t alu_result,
    input riscv_pkg::word_t rs2_data,

    // ============= output =============
    output riscv_pkg::word_t mem_read_data
);
    import riscv_pkg::*;

    data_memory data_memory (
        // ========== input  ==========
        .clk(clk),
        .mem_write(control.mem_write),
        .mem_read(control.mem_read),
        .addr(alu_result),
        .write_data(rs2_data),
        // ========== output ==========
        .read_data(mem_read_data)
    );
endmodule