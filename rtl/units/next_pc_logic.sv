`timescale 1ns/1ps

module next_pc_logic (
    input  riscv_pkg::word_t   pc4,
    input  riscv_pkg::word_t   redirect_pc,
    input  logic               redirect_valid,

    output riscv_pkg::word_t   next_pc
);

    import riscv_pkg::*;

    assign next_pc = redirect_valid
                   ? redirect_pc
                   : pc4;

endmodule
