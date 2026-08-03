`timescale 1ns/1ps

module tb_processor;

    localparam int CLK_PERIOD     = 10;
    localparam int TIMEOUT_CYCLES = 1000;

    logic clk;
    logic rst_n;

    processor dut (
        .clk   (clk),
        .rst_n (rst_n)
    );


    // ==================================================
    // Clock generation
    // ==================================================
    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end


    // ==================================================
    // Waveform dump
    // ==================================================
    initial begin
        $dumpfile("build/cpu.fst");
        $dumpvars(0, tb_processor);
    end


    // ==================================================
    // Register checking task
    // ==================================================
    task automatic check_register (
        input int unsigned reg_index,
        input logic [31:0] expected
    );
        logic [31:0] actual;

        begin
            actual =
                dut.u_id_stage.register_file.registers[reg_index];

            assert (actual === expected)
            else begin
                $fatal(
                    1,
                    "Register mismatch: x%0d expected=%0d (0x%08h), actual=%0d (0x%08h)",
                    reg_index,
                    expected,
                    expected,
                    actual,
                    actual
                );
            end
        end
    endtask


    // ==================================================
    // Memory checking task
    // ==================================================
    task automatic check_memory (
        input int unsigned mem_index,
        input logic [31:0] expected
    );
        logic [31:0] actual;

        begin
            actual =
                dut.u_mem_stage.data_memory.memory[mem_index];

            assert (actual === expected)
            else begin
                $fatal(
                    1,
                    "Memory mismatch: memory[%0d] expected=%0d (0x%08h), actual=%0d (0x%08h)",
                    mem_index,
                    expected,
                    expected,
                    actual,
                    actual
                );
            end
        end
    endtask


    // ==================================================
    // Register and memory dump
    // ==================================================
    task automatic print_result;
        begin
            $display("");
            $display("==========================================");
            $display(" Bubble sort result");
            $display("==========================================");

            for (int i = 20; i <= 27; i++) begin
                $display(
                    "x%0d = %0d",
                    i,
                    dut.u_id_stage.register_file.registers[i]
                );
            end

            $display("------------------------------------------");

            for (int i = 0; i < 8; i++) begin
                $display(
                    "memory[%0d] = %0d",
                    i,
                    dut.u_mem_stage.data_memory.memory[i]
                );
            end

            $display("==========================================");
            $display("");
        end
    endtask


    // ==================================================
    // Main test
    // ==================================================
    initial begin
        // Reset assertion
        rst_n = 1'b0;

        repeat (3) @(posedge clk);

        // Avoid releasing reset exactly at a positive edge.
        @(negedge clk);
        rst_n = 1'b1;
        repeat (1000) @(posedge clk);
        $finish;
    end

endmodule