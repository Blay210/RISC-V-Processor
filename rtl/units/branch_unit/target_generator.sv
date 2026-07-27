`timescale 1ns/1ps

module target_generator (
    input  riscv_pkg::word_t   pc,
    input  riscv_pkg::word_t   rs1_data,
    input  riscv_pkg::word_t   immediate,
    input  riscv_pkg::pc_sel_t pc_sel,

    output riscv_pkg::word_t   target
);

    import riscv_pkg::*;

    word_t target_base, raw_target;

    always_comb begin
        target_base = pc;

        if (pc_sel == PC_NEXT_JALR)
            target_base = rs1_data;
    end

    assign raw_target = target_base + immediate;

    always_comb begin
        if (pc_sel == PC_NEXT_JALR)
            target = {raw_target[XLEN-1:1], 1'b0};
        else
            target = raw_target;
    end

endmodule