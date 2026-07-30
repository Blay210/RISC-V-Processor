`timescale 1ns/1ps

module tb_processor_1;

    logic clk;
    logic rst_n;

    processor dut (
        .clk(clk),
        .rst_n(rst_n)
    );

    initial begin
        $dumpfile("build/cpu.fst");
        $dumpvars(0, tb_processor_1);
    end

    //----------------------------------------------------------
    // Clock
    //----------------------------------------------------------

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    //----------------------------------------------------------
    // Reset
    //----------------------------------------------------------

    initial begin
        rst_n = 0;

        #20;
        rst_n = 1;
    end

    //----------------------------------------------------------
    // Finish
    //----------------------------------------------------------

    initial begin
        #200;

        $display("");
        $display("==============================");
        $display("Register Dump");
        $display("==============================");

        $display("x1 = %0d",
            dut.u_id_stage.register_file.registers[1]);

        $display("x2 = %0d",
            dut.u_id_stage.register_file.registers[2]);

        $display("x3 = %0d",
            dut.u_id_stage.register_file.registers[3]);

        $display("x4 = %0d",
            dut.u_id_stage.register_file.registers[4]);

        $finish;
    end

endmodule