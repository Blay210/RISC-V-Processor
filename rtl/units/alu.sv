`timescale 1ns/1ps

module alu (
    // ============== input  ==============
    input  riscv_pkg::word_t     operand_a,
    input  riscv_pkg::word_t     operand_b,
    input  riscv_pkg::alu_ctrl_t alu_ctrl,
    // ============== output ==============
    output riscv_pkg::word_t     result
);

    import riscv_pkg::*;

    logic [4:0] shamt;

    assign shamt = operand_b[4:0];

    always_comb begin
        result = '0;
        
        unique case (alu_ctrl)
            ALU_ADD: begin
                result = operand_a + operand_b;
            end

            ALU_SUB: begin
                result = operand_a - operand_b;
            end

            ALU_AND: begin
                result = operand_a & operand_b;
            end

            ALU_OR: begin
                result = operand_a | operand_b;
            end

            ALU_XOR: begin
                result = operand_a ^ operand_b;
            end

            ALU_SLL: begin
                result = operand_a << shamt;
            end

            ALU_SRL: begin
                result = operand_a >> shamt;
            end

            ALU_SRA: begin
                result = $signed(operand_a) >>> shamt;
            end

            ALU_SLT: begin
                result = ($signed(operand_a) < $signed(operand_b));
            end

            ALU_SLTU: begin
                result = (operand_a < operand_b);
            end

            default: begin
                // pass    
            end

        endcase
    end

endmodule