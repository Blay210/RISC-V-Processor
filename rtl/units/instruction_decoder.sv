`timescale 1ns/1ps

module instruction_decoder (
    // =============== input  ===============
    input  riscv_pkg::word_t inst,
    
    // =============== output ===============
    output riscv_pkg::inst_t decoded_inst
);

    assign decoded_inst = '{
        opcode : inst[6:0],
        rd     : inst[11:7],
        funct3 : inst[14:12],
        rs1    : inst[19:15],
        rs2    : inst[24:20],
        funct7 : inst[31:25]
    };

endmodule