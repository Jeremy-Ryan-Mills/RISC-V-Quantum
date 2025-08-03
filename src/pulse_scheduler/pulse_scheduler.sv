module pulse_scheduler (
    input logic clk,
    input logic rst_n,

    input logic [31:0] pulse_inst_in,
    input logic pulse_inst_in_valid

    output logic [31:0] counter,


);

    // Pulse Instruction Decode
    logic [`PULSE_REG_FREQ_W-1:0] frequency;
    logic [`PULSE_REG_PHASE_W-1:0] phase;
    logic [`PULSE_REG_AMP_W-1:0] amplitude;
    logic [`PULSE_REG_TSTART_W-1:0] t_start;
    logic [`PULSE_REG_TLEN_W-1:0] t_len;
    logic [`ENVELOPE_ADDR_W-1:0] envelope_addr;

    pulse_decode pulse_decode_inst (
        .clk(clk),
        .rst_n(rst_n),
        .pulse_inst(pulse_inst_in),
        .frequency(frequency),
        .phase(phase),
        .amplitude(amplitude),
        .t_start(t_start),
        .t_len(t_len),
        .envelope_addr(envelope_addr)
    );

    logic [`PULSE_REG_FREQ_W-1:0] frequency_trig;
    logic [`PULSE_REG_PHASE_W-1:0] phase_trig;
    logic [`PULSE_REG_AMP_W-1:0] amplitude_trig;
    logic [`PULSE_REG_TSTART_W-1:0] t_start_trig;
    logic [`PULSE_REG_TLEN_W-1:0] t_len_trig;
    logic [`ENVELOPE_ADDR_W-1:0] envelope_addr_trig;
    logic full;
    logic empty;
    
    
    // Pulse Register
    // TODO: Have to figure out how to output a pulse parameters when the pulse is triggerd
    // Need to play around with the parameters
    pulse_register pulse_register_inst (
        .clk(clk),
        .rst_n(rst_n),
        .wr_en(pulse_inst_in_valid),
        .wr_phase(phase),
        .wr_amp(amplitude),
        .wr_freq(frequency),
        .wr_tstart(t_start),
        .wr_tlen(t_len),
        .rd_en(1'b1),
        .rd_phase(phase_trig),
        .rd_amp(amplitude_trig),
        .rd_freq(frequency_trig),
        .rd_tstart(t_start_trig),
        .rd_tlen(t_len_trig),
        .full(full),
        .empty(empty)
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