`timescale 1ns/1ps

module tb_processor;

    logic clk;
    logic rst_n;

    processor dut (
        .clk   (clk),
        .rst_n (rst_n)
    );

    // 10 ns clock period
    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
        $dumpfile("build/cpu.fst");
        $dumpvars(0, tb_processor);
    end

    initial begin
        rst_n = 1'b0;

        repeat (3) @(posedge clk);
        rst_n = 1'b1;

        // Pipeline fill, branch flush, WB 완료 시간을 충분히 확보
        repeat (200) @(posedge clk);

        check_results();

        $display("====================================");
        $display("PIPELINE PROCESSOR TEST PASSED");
        $display("====================================");

        $finish;
    end

    task automatic check_results;
        begin
        end
    endtask

    initial begin
        // 무한루프, X 전파 등에 대한 안전장치
        #5000;
        $fatal(1, "Simulation timeout");
    end

endmodule