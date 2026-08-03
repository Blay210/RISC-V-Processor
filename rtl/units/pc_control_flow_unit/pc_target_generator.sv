`timescale 1ns/1ps

module pc_target_generator (
    input  riscv_pkg::word_t   pc,
    input  riscv_pkg::word_t   rs1_data,
    input  riscv_pkg::word_t   immediate,
    input  riscv_pkg::pc_sel_t pc_sel,

    output riscv_pkg::word_t   pc_target
);

    import riscv_pkg::*;

    always_comb begin
        pc_target = pc + immediate;

        unique case (pc_sel)
            PC_NEXT_BRANCH,
            PC_NEXT_JAL: begin
                pc_target = pc + immediate;
            end

            PC_NEXT_JALR: begin
                pc_target = (rs1_data + immediate) & 32'hFFFF_FFFE;
            end

            default: begin
                pc_target = pc + 32'd4;
            end
        endcase
    end

endmodule
