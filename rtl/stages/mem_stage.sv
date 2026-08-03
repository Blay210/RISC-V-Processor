`timescale 1ns/1ps

module mem_stage (
    // ============= input  =============
    input logic clk,
    input logic rst_n,
    input riscv_pkg::ex_mem_t ex_mem_in,

    // ============= output =============
    output riscv_pkg::mem_wb_t mem_wb_out
);

    import riscv_pkg::*;


    // ================== pass signal ==================
    assign mem_wb_out.valid      = ex_mem_in.valid;
    assign mem_wb_out.pc4        = ex_mem_in.pc4;
    assign mem_wb_out.alu_result = ex_mem_in.alu_result;
    assign mem_wb_out.rd_addr    = ex_mem_in.rd_addr;
    assign mem_wb_out.wb_ctrl    = ex_mem_in.wb_ctrl;


    // ==================== modules ====================
    data_memory data_memory (
        // ========== input  ==========
        .clk(clk),
        .rst_n(rst_n),

        .write_data(ex_mem_in.store_data),
        .mem_write(ex_mem_in.valid && ex_mem_in.mem_ctrl.mem_write),

        .addr(ex_mem_in.alu_result),
        .mem_read(ex_mem_in.valid && ex_mem_in.mem_ctrl.mem_read),

        // ========== output ==========
        .read_data(mem_wb_out.mem_data)
    );
endmodule
