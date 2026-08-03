`timescale 1ns/1ps

module forwarding_mux (
    // ============ input  ============
    input riscv_pkg::word_t register_data_a,
    input riscv_pkg::word_t register_data_b,
    input riscv_pkg::word_t ex_mem_data,
    input riscv_pkg::word_t mem_wb_data,

    input riscv_pkg::forward_sel_t forward_a,
    input riscv_pkg::forward_sel_t forward_b,

    // ============ output ============
    output riscv_pkg::word_t forward_data_a,
    output riscv_pkg::word_t forward_data_b

);

    import riscv_pkg::*;

    always_comb begin
        unique case (forward_a)
            FWD_NONE:  forward_data_a = register_data_a;
            FWD_EXMEM: forward_data_a = ex_mem_data;
            FWD_MEMWB: forward_data_a = mem_wb_data;
            default:   forward_data_a = register_data_a;
        endcase

        unique case (forward_b)
            FWD_NONE:  forward_data_b = register_data_b;
            FWD_EXMEM: forward_data_b = ex_mem_data;
            FWD_MEMWB: forward_data_b = mem_wb_data;
            default:   forward_data_b = register_data_b;
        endcase
    end

endmodule
