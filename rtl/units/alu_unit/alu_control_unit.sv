`timescale 1ns/1ps

module alu_control_unit (

    // ============== input  ==============
    input  riscv_pkg::alu_op_t   alu_op,
    input  riscv_pkg::funct3_t   funct3,
    input  riscv_pkg::funct7_t   funct7,

    // ============== output ==============
    output riscv_pkg::alu_ctrl_t alu_ctrl
);

    import riscv_pkg::*;

    always_comb begin
        alu_ctrl = ALU_ADD;

        unique case (alu_op)
            ALU_OP_ADD: begin
                alu_ctrl = ALU_ADD;
            end

            ALU_OP_BRANCH: begin
                alu_ctrl = ALU_SUB;
            end

            ALU_OP_REG: begin
                unique case (funct3)
                    3'b000: begin
                        unique case (funct7)
                            FUNCT7_BASE: alu_ctrl = ALU_ADD;
                            FUNCT7_ALT:  alu_ctrl = ALU_SUB;
                            default:     alu_ctrl = ALU_ADD;
                        endcase
                    end

                    3'b001: begin
                        alu_ctrl = ALU_SLL;
                    end

                    3'b010: begin
                        alu_ctrl = ALU_SLT;
                    end

                    3'b011: begin
                        alu_ctrl = ALU_SLTU;
                    end

                    3'b100: begin
                        alu_ctrl = ALU_XOR;
                    end

                    3'b101: begin
                        unique case (funct7)
                            FUNCT7_BASE: alu_ctrl = ALU_SRL;
                            FUNCT7_ALT:  alu_ctrl = ALU_SRA;
                            default:     alu_ctrl = ALU_SRL;
                        endcase
                    end

                    3'b110: begin
                        alu_ctrl = ALU_OR;
                    end

                    3'b111: begin
                        alu_ctrl = ALU_AND;
                    end

                    default: begin
                        // pass
                    end
                endcase
            end

            ALU_OP_IMM: begin
                unique case (funct3)
                    3'b000: begin
                        alu_ctrl = ALU_ADD;
                    end

                    3'b001: begin
                        alu_ctrl = ALU_SLL;
                    end

                    3'b010: begin
                        alu_ctrl = ALU_SLT;
                    end

                    3'b011: begin
                        alu_ctrl = ALU_SLTU;
                    end

                    3'b100: begin
                        alu_ctrl = ALU_XOR;
                    end

                    3'b101: begin
                        unique case (funct7)
                            FUNCT7_BASE: alu_ctrl = ALU_SRL;
                            FUNCT7_ALT:  alu_ctrl = ALU_SRA;
                            default:     alu_ctrl = ALU_SRL;
                        endcase
                    end

                    3'b110: begin
                        alu_ctrl = ALU_OR;
                    end

                    3'b111: begin
                        alu_ctrl = ALU_AND;
                    end
                    default: begin
                        // pass
                    end
                endcase
            end

            default: begin
                // pass
            end
            
        endcase
    end
    
endmodule
