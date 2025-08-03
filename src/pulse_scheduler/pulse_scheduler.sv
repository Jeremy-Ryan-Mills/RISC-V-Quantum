module pulse_scheduler (
    input logic clk,
    input logic rst_n,

    input logic [31:0] pulse_inst_in,
    input logic pulse_inst_in_valid

    output logic [31:0] counter,


);

    // Things we need in the pulse scheduler module:
    // 1. Decode the pulse instruction into frequency, phase, amplitude, t_start, etc.
    // 2. Store that information into the pulse_register
    // 3. Figure out a way to determine if the pulse is ready to be triggered,
    //    and if it is, trigger it by sending it to the dac_axi_stream_module
    //    using cordic, and then lock the pulse register so no other pulses are triggered
    // 4. Figure out how to expose the clock to the riscv core for qgett instructions
    // 5. Create an envelope memory to store the envelope data




    counter counter_inst (
        .clk(clk),
        .rst_n(rst_n),
        .count_out(count_out)
    );

    assign counter = count_out;


endmodule