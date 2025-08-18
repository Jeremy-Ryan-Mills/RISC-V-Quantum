module pulse_scheduler (
    input logic clk,
    input logic rst_n,

    input pulse_descriptor_t pulse_descriptor, // Pulse instruction from the RISC-V core
    input logic pulse_descriptor_valid,

    output logic [31:0] m_axis_tdata,
    output logic        m_axis_tvalid,
    input  logic        m_axis_tready

);

    // Pulse Fetch from Memory
    // - The pulse_inst_in is a description that includes the pulse memory address and the delay
    // - The pulse fetch module will fetch the pulse parameters from the pulse memory
    //   - Need to figure out how to pass delay into the pulse FIFO
    logic [`PULSE_REG_FREQ_W-1:0] frequency;
    logic [`PULSE_REG_PHASE_W-1:0] phase;
    logic [`PULSE_REG_AMP_W-1:0] amplitude;
    logic [`PULSE_REG_TSTART_W-1:0] t_start;
    logic [`PULSE_REG_TLEN_W-1:0] t_len;
    logic [`ENVELOPE_ADDR_W-1:0] envelope_addr;


    // TODO: Create unit test for the pulse fetch module, doesnt need to be crazy but maybe 2 tests
    pulse_fetch pulse_fetch_inst (
        .clk(clk),
        .rst_n(rst_n),
        .pulse_descriptor(pulse_descriptor),
        .pulse_descriptor_valid(pulse_descriptor_valid),
        .frequency(frequency),
        .phase(phase),
        .amplitude(amplitude),
        .t_start(t_start),
        .t_len(t_len),
        .envelope_addr(envelope_addr)
    );

    // Pipeline the pulse_descriptor_valid signal
    logic pulse_descriptor_valid_pipe;
    always_ff @(posedge clk) begin
        if (rst_n) begin
            pulse_descriptor_valid_pipe <= 1'b0;
        end else begin
            pulse_descriptor_valid_pipe <= pulse_descriptor_valid_pipe;
        end
    end

    // Pulse Register
    logic [`PULSE_REG_FREQ_W-1:0] frequency_trig;
    logic [`PULSE_REG_PHASE_W-1:0] phase_trig;
    logic [`PULSE_REG_AMP_W-1:0] amplitude_trig;
    logic [`PULSE_REG_TSTART_W-1:0] t_start_trig;
    logic [`PULSE_REG_TLEN_W-1:0] t_len_trig;
    logic [`ENVELOPE_ADDR_W-1:0] envelope_addr_trig;
    logic full;
    logic empty;
    logic pulse_ready;

    // Pulse Register - Will pop out a pulse when the first read is valid, the first pulse can block the next pulse (figure out if this is a problem)
    // TODO: Create unit test for the pulse register moduke, THIS IS THE MOST IMPORTANT MODULE
    pulse_register pulse_register_inst (
        .clk(clk),
        .rst_n(rst_n),
        .wr_en(pulse_descriptor_valid_pipe),
        .wr_phase(phase),
        .wr_amp(amplitude),
        .wr_freq(frequency),
        .wr_tstart(t_start),
        .wr_tlen(t_len),
        .wr_env_addr(envelope_addr),
        .pulse_ready(pulse_ready),
        .rd_phase(phase_trig),
        .rd_amp(amplitude_trig),
        .rd_freq(frequency_trig),
        .rd_tstart(t_start_trig),
        .rd_tlen(t_len_trig),
        .rd_env_addr(envelope_addr_trig),
        .full(full),
        .empty(empty)
    );



    // Need to create a pulse_engine module
    // TODO: Debug the pulse engine module, and figure out if it is playing something to the AXI master
    pulse_engine pulse_engine_inst (
        .clk(clk),
        .rst_n(rst_n),
        .pulse_ready(pulse_ready),
        .pulse_phase(phase_trig),
        .pulse_amplitude(amplitude_trig),
        .pulse_frequency(frequency_trig),
        .pulse_t_start(t_start_trig),
        .pulse_t_len(t_len_trig),
        .pulse_envelope_addr(envelope_addr_trig),
        .m_axis_tdata(m_axis_tdata),
        .m_axis_tvalid(m_axis_tvalid),
        .m_axis_tready(m_axis_tready)
    );


endmodule