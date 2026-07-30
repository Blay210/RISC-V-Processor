`timescale 1ns/1ps

module wb_stage (
    // ============= input  =============
    input riscv_pkg::word_t    alu_result,
    input riscv_pkg::word_t    mem_read_data,
    input riscv_pkg::word_t    pc_4,
    input riscv_pkg::control_t control,
    
    // ============= output =============
    output riscv_pkg::word_t   wb_data
);

    import riscv_pkg::*;
    
    wb_mux wb_mux (
        // ========== input  ==========
        .alu_result(alu_result),
        .mem_read_data(mem_read_data),
        .pc_4(pc_4),
        .wb_sel(control.wb_sel),
        // ========== output ==========
        .wb_data(wb_data)
    );

endmodule