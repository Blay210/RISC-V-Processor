`timescale 1ns/1ps

module next_pc_logic (
    input  riscv_pkg::word_t   pc_4,
    input  riscv_pkg::word_t   control_target,
    input  riscv_pkg::pc_sel_t pc_sel,
    input  logic               branch_taken,

    output riscv_pkg::word_t   next_pc
);

    import riscv_pkg::*;

    always_comb begin
        next_pc = pc_4;

        unique case (pc_sel)
            PC_NEXT_4: begin
                next_pc = pc_4;
            end

            PC_NEXT_BRANCH: begin
                next_pc = branch_taken
                        ? control_target
                        : pc_4;
            end

            PC_NEXT_JAL,
            PC_NEXT_JALR: begin
                next_pc = control_target;
            end

            default: begin
                next_pc = pc_4;
            end
        endcase
    end

endmodule