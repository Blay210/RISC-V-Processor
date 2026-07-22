`timescale 1ns/1ps

module instruction_memory #(
    parameter int    DEPTH         = 256,
    parameter string PROGRAM_FILE  = "program.hex"
) (
    input  riscv_pkg::word_t pc,
    output riscv_pkg::word_t inst
);

    import riscv_pkg::*;
    localparam int ADDR_WIDTH = $clog2(DEPTH);
    
    word_t memory [0:DEPTH-1];

    initial begin
        $display("Loading %s", PROGRAM_FILE);
        $readmemh(PROGRAM_FILE, memory);
        $display("Instruction Memory Ready.");
    end

    assign inst = memory[pc[ADDR_WIDTH+1:2]];

endmodule