/**
 * Pulse Engine Module
 * 
 * Core waveform generation module that creates precise quantum control pulses
 * using direct digital synthesis (DDS) techniques. Generates complex waveforms
 * by combining frequency synthesis, amplitude modulation, and envelope shaping.
 * 
 * Operation:
 * 1. Receives pulse parameters from scheduler (frequency, phase, amplitude, timing)
 * 2. Implements phase accumulator for frequency synthesis
 * 3. Generates sin/cos samples via CORDIC algorithm
 * 4. Applies amplitude and envelope modulation
 * 5. Outputs I/Q samples via AXI-Stream interface
 * 
 * Signal Generation Pipeline:
 * - Phase accumulator with configurable frequency control word (FCW)
 * - CORDIC-based sin/cos generation (configurable latency)
 * - Envelope BRAM for amplitude shaping
 * - Multiplier pipeline for gain and modulation
 * - 16-bit saturation and I/Q packing
 * 
 * Control FSM States:
 * - IDLE: Waiting for pulse trigger
 * - WAIT_DELAY: Counting down to start time
 * - PLAY: Actively generating samples
 * - DRAIN: Flushing pipeline after completion
 * 
 * Key Features:
 * - Configurable bit widths for all parameters
 * - Pipeline latency compensation
 * - AXI-Stream backpressure handling
 * - Automatic pipeline draining
 * - Envelope-based amplitude modulation
 * 
 * @param PHASE_W         Phase accumulator bit width
 * @param FREQ_W          Frequency control word bit width
 * @param AMP_W           Amplitude bit width
 * @param TLEN_W          Pulse length bit width
 * @param TSTART_W        Start time bit width
 * @param ENVELOPE_ADDR_W Envelope memory address width
 * @param CORDIC_W        CORDIC output bit width (default 16)
 * @param CORDIC_LATENCY  CORDIC pipeline latency (default 16)
 * @param clk             System clock
 * @param rst_n           Active-low reset
 * @param pulse_ready     Pulse trigger signal
 * @param pulse_frequency Frequency control word
 * @param pulse_phase     Initial phase offset
 * @param pulse_amplitude Global amplitude gain
 * @param pulse_t_start   Start time delay
 * @param pulse_t_len     Pulse duration in samples
 * @param pulse_envelope_addr Envelope memory base address
 * @param m_axis_tdata    AXI-Stream data output (32-bit I/Q)
 * @param m_axis_tvalid   AXI-Stream valid signal
 * @param m_axis_tready   AXI-Stream ready signal
 */
module pulse_engine #(
    // Widths from header macros
    parameter int PHASE_W          = `PULSE_REG_PHASE_W,
    parameter int FREQ_W           = `PULSE_REG_FREQ_W,
    parameter int AMP_W            = `PULSE_REG_AMP_W,
    parameter int TLEN_W           = `PULSE_REG_TLEN_W,
    parameter int TSTART_W         = `PULSE_REG_TSTART_W,
    parameter int ENVELOPE_ADDR_W  = `ENVELOPE_ADDR_W,

    // Numerics
    parameter int CORDIC_W         = 16,     // sin/cos output (Q1.15)
    parameter int CORDIC_LATENCY   = 16      // core latency
) (
    input  logic                         clk,
    input  logic                         rst_n,

    // From scheduler / register
    input  logic                         pulse_ready,          // 1-cycle strobe to load below
    input  logic [FREQ_W-1:0]            pulse_frequency,      // FCW
    input  logic [PHASE_W-1:0]           pulse_phase,          // initial phase
    input  logic [AMP_W-1:0]             pulse_amplitude,      // global gain (Q1.(AMP_W-1))
    input  logic [TSTART_W-1:0]          pulse_t_start,        // delay in samples (or global ticks)
    input  logic [TLEN_W-1:0]            pulse_t_len,          // number of samples to emit
    input  logic [ENVELOPE_ADDR_W-1:0]   pulse_envelope_addr,  // base envelope address

    // AXI-Stream (master)
    output logic [31:0]                  m_axis_tdata,
    output logic                         m_axis_tvalid,
    input  logic                         m_axis_tready

    // If you use an interface, replace the 3 signals above with:
    // axi_if_pkg::axis32_m m_axis
);

    // Snapshot registers
    logic [FREQ_W-1:0]           fcw_r;
    logic [PHASE_W-1:0]          phase0_r;
    logic [AMP_W-1:0]            amp_r;
    logic [TSTART_W-1:0]         tstart_r;
    logic [TLEN_W-1:0]           tlen_r;
    logic [ENVELOPE_ADDR_W-1:0]  env_base_r;

    // Control FSM
    // IDLE -> WAIT_DELAY -> PLAY -> DRAIN (to flush pipeline)
    typedef enum logic [1:0] {IDLE, WAIT_DELAY, PLAY, DRAIN} state_t;
    state_t state, state_n;

    // Counters
    logic [TSTART_W-1:0] delay_cnt, delay_cnt_n;
    logic [TLEN_W-1:0]   play_cnt,  play_cnt_n;

    // Advance condition: only step data path when downstream is ready
    logic adv;  // one sample advances through the output stage
    assign adv = m_axis_tready;

    // Total fixed pipeline latency from "index asserted" to "sample valid"
    localparam int BRAM_LAT = 1;
    localparam int PIPE_LAT = BRAM_LAT + CORDIC_LATENCY;

    // Keep a shift register of valids to model pipeline latency
    logic [PIPE_LAT:0] valid_sr;  // [0] = newest stage

    // Snapshot on trigger
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fcw_r      <= '0;
            phase0_r   <= '0;
            amp_r      <= '0;
            tstart_r   <= '0;
            tlen_r     <= '0;
            env_base_r <= '0;
        end else if (pulse_ready && state == IDLE) begin
            fcw_r      <= pulse_frequency;
            phase0_r   <= pulse_phase;
            amp_r      <= pulse_amplitude;
            tstart_r   <= pulse_t_start;
            tlen_r     <= pulse_t_len;
            env_base_r <= pulse_envelope_addr;
        end
    end

    // FSM next-state / counters
    always_comb begin
        state_n     = state;
        delay_cnt_n = delay_cnt;
        play_cnt_n  = play_cnt;

        unique case (state)
            IDLE: begin
                if (pulse_ready) begin
                    if (pulse_t_start == 0) begin
                        state_n     = (pulse_t_len == 0) ? IDLE : PLAY;
                        delay_cnt_n = '0;
                        play_cnt_n  = '0;
                    end else begin
                        state_n     = WAIT_DELAY;
                        delay_cnt_n = tstart_r; // start counting down
                        play_cnt_n  = '0;
                    end
                end
            end

            WAIT_DELAY: begin
                if (adv) begin
                    if (delay_cnt == 0)    state_n = (tlen_r == 0) ? IDLE : PLAY;
                    else                   delay_cnt_n = delay_cnt - 1;
                end
            end

            PLAY: begin
                if (adv) begin
                    if (play_cnt == tlen_r - 1) begin
                        state_n    = DRAIN;
                        play_cnt_n = play_cnt; // stop incrementing
                    end else begin
                        play_cnt_n = play_cnt + 1;
                    end
                end
            end

            DRAIN: begin
                // Wait until the pipeline empties (PIPE_LAT beats of valid_sr)
                if (adv && valid_sr[PIPE_LAT]) begin
                    state_n = IDLE;
                end
            end
        endcase
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state     <= IDLE;
            delay_cnt <= '0;
            play_cnt  <= '0;
        end else begin
            state     <= state_n;
            delay_cnt <= delay_cnt_n;
            play_cnt  <= play_cnt_n;
        end
    end

    // Phase accumulator (DDS)
    logic [PHASE_W-1:0] phase_acc;
    logic               nco_adv;

    // Advance the NCO only when we're feeding a new sample into the pipeline
    // During PLAY we advance every accepted sample (adv)
    // During WAIT_DELAY we hold; during DRAIN we hold
    assign nco_adv = (state == PLAY) && adv;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            phase_acc <= '0;
        end else if (pulse_ready && state == IDLE) begin
            phase_acc <= phase0_r;
        end else if (nco_adv) begin
            phase_acc <= phase_acc + fcw_r;
        end
    end

    // CORDIC (sin/cos), assumed fully pipelined with CORDIC_LATENCY
    logic signed [CORDIC_W-1:0] sin_i, sin_q;

    // Replace with custom CORDIC? TODO: Look into this for vivado
    // cordic_sincos #(.W(PHASE_W), .OUT_W(CORDIC_W), .LAT(CORDIC_LATENCY)) cordic_inst (
    //     .clk   (clk),
    //     .rst_n (rst_n),
    //     .phase (phase_acc),
    //     .sin_o (sin_i),
    //     .cos_o (sin_q)
    // );

    // Envelope BRAM (single-port, synchronous read -> 1-cycle latency)
    // TODO: look into how to load into this BRAM
    (* ram_style = "block" *)
    logic signed [AMP_W-1:0] env_bram [0:(1<<ENVELOPE_ADDR_W)-1];

    // Current address index
    logic [ENVELOPE_ADDR_W-1:0] env_addr;
    assign env_addr = env_base_r + play_cnt;

    // Gate address updates to PLAY & accepted samples
    logic signed [AMP_W-1:0] env_sample;
    always_ff @(posedge clk) begin
        if (state == PLAY && adv) begin
            env_sample <= env_bram[env_addr];
        end
    end

    // Pipeline alignment: delay control/valid through PIPE_LAT
    // valid_sr shifts in "we just launched a PLAY sample" flags
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            valid_sr <= '0;
        end else if (adv) begin
            valid_sr <= {valid_sr[PIPE_LAT-1:0], (state == PLAY)};
        end
    end

    // Delay the matching envelope and amplitude to align with CORDIC
    // Simple approach: registers in a generate-for shift chain
    logic signed [AMP_W-1:0] env_pipe   [0:PIPE_LAT-1];
    logic        [AMP_W-1:0] amp_pipe   [0:PIPE_LAT-1];
    logic        [PHASE_W-1:0] dummy_phase_pipe [0:PIPE_LAT-1]; // if needed

    integer k;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (k = 0; k < PIPE_LAT; k++) begin
                env_pipe[k] <= '0;
                amp_pipe[k] <= '0;
            end
        end else if (adv) begin
            env_pipe[0] <= env_sample;
            amp_pipe[0] <= amp_r;
            for (k = 1; k < PIPE_LAT; k++) begin
                env_pipe[k] <= env_pipe[k-1];
                amp_pipe[k] <= amp_pipe[k-1];
            end
        end
    end

    // Multiply & scale: (amp * env) * sin/cos  -> saturate to 16-bit
    // Assume amp/env are signed Q1.(AMP_W-1), sin/cos Q1.15
    // Product widths: AMP_W + AMP_W + 16
    localparam int PROD1_W = AMP_W + AMP_W;          // amp * env
    localparam int PROD_W  = PROD1_W + CORDIC_W;     // * sin/cos

    logic signed [PROD1_W-1:0] gain_val;
    logic signed [PROD_W-1:0]  i_prod, q_prod;

    // Stage: combine amp/env (already aligned to CORDIC due to pipe)
    always_comb begin
        gain_val = $signed(amp_pipe[PIPE_LAT-1]) * $signed(env_pipe[PIPE_LAT-1]);
        i_prod   = $signed(gain_val) * $signed(sin_i);
        q_prod   = $signed(gain_val) * $signed(sin_q);
    end

    // Scale to Q1.15 and saturate to 16-bit
    // amp/env in Q1.(AMP_W-1) each -> gain_val in Q2.(2*AMP_W-2)
    // multiply by sin (Q1.15) -> Q3.(2*AMP_W-2+15)
    // Shift right by ( (AMP_W-1) + (AMP_W-1) ) = 2*AMP_W-2 to land near Q1.15,
    // then shift by additional 15 to land back to ~Q1.0 range, finally clip to 16.
    // Combine as a single shift: SCALE_SH = (2*AMP_W-2 + 15)
    localparam int SCALE_SH = (2*AMP_W - 2 + 15);

    function automatic logic signed [15:0] sat16(input logic signed [PROD_W-1:0] x);
        logic signed [PROD_W-1:0] y;
        logic signed [31:0]       z;
        begin
            // Arithmetic shift
            y = x >>> SCALE_SH;
            // Now y ~ Q1.15..Q2.14 range depending on upstream magnitudes
            // Clip to 16-bit signed
            if (y >  32767)      sat16 = 16'sh7FFF;
            else if (y < -32768) sat16 = 16'sh8000;
            else                 sat16 = y[15:0];
        end
    endfunction

    logic [31:0] iq_packed;
    always_comb begin
        iq_packed = { sat16(q_prod), sat16(i_prod) }; // {Q,I}
    end

    // AXI-Stream outputs
    // tvalid follows the delayed valid_sr tail; data is stable when tvalid=1.
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            m_axis_tvalid <= 1'b0;
            m_axis_tdata  <= 32'd0;
        end else begin
            if (adv) begin
                m_axis_tvalid <= valid_sr[PIPE_LAT];
                if (valid_sr[PIPE_LAT]) begin
                    m_axis_tdata <= iq_packed;
                end
            end
        end
    end

endmodule
