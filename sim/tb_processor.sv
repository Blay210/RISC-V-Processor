`timescale 1ns/1ps

module tb_processor;

    logic clk;
    logic rst_n;

    processor dut (
        .clk(clk),
        .rst_n(rst_n)
    );

    initial begin
        $dumpfile("build/cpu.fst");
        $dumpvars(0, tb_processor);
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
        repeat (1000) @(posedge clk);

        $display("");
        $display("==============================");
        $display("Register Dump");
        $display("==============================");

        assert (dut.u_id_stage.register_file.registers[3] == 32'd15)
            else $fatal("x3 mismatch");

        assert (dut.u_id_stage.register_file.registers[4] == 32'd15)
            else $fatal("x4 mismatch");

        assert (dut.u_id_stage.register_file.registers[5] == 32'd100)
            else $fatal("x5 mismatch");

        assert (dut.u_id_stage.register_file.registers[7] == 32'd77)
            else $fatal("x7 mismatch");

        $display("Complex program test passed");
        $finish;
    end

endmodule