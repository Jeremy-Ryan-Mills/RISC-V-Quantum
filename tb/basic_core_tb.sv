`timescale 1ns/1ps

// Basic Testbench to make sure the core compiles and runs
module basic_core_tb;

    // Clock and reset
    logic clk;
    logic reset;

    core uut (
        .clk(clk),
        .reset(reset)
    );

    // Clock generation
    initial clk = 0;
    always #5 clk = ~clk; // 100MHz clock

    // Reset sequence
    initial begin
        reset = 1;
        #20;
        reset = 0;
    end

    // Simulation time limit
    initial begin
        #1000; // Run for 1000ns
        $display("Simulation finished.");
        $finish;
    end

endmodule