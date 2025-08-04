module pulse_engine (
    input  logic                   clk,
    input  logic                   rst_n,

    // From pulse_scheduler
    input  logic                   pulse_ready,
    input  logic [PHASE_W-1:0]     freq_trig,        // FCW
    input  logic [15:0]            phase_trig,
    input  logic [AMP_W-1:0]       amp_trig,
    input  logic [23:0]            t_start_trig,
    input  logic [15:0]            t_len_trig,
    input  logic [15:0]            env_addr_trig,

    // Time counter (low 32 bits)
    input  logic [31:0]            time_counter,

    // AXI-Stream out (to DAC)
    output axis32_t                m_axis
);
    import axi_if_pkg::*;

    // FSM: IDLE → PLAY → DONE
    typedef enum logic [1:0] {IDLE, PLAY} state_t;
    state_t state;
    logic [15:0] sample_cnt;

    // Shadow registers (pulse info)
    logic [`PULSE_REG_PHASE_W-1:0] fcw_r;
    logic [`PULSE_REG_AMP_W-1:0] amp_r;
    logic [`ENVELOPE_ADDR_W-1:0] env_ptr_r;
    logic [`PULSE_REG_TLEN_W-1:0] len_r;
    logic playing;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state      <= IDLE;
            playing    <= 1'b0;
            sample_cnt <= 0;
        end else begin
            case (state)
                IDLE: if (pulse_ready) begin
                          fcw_r      <= freq_trig;
                          phase0_r   <= phase_trig;
                          amp_r      <= amp_trig;
                          env_ptr_r  <= env_addr_trig;
                          len_r      <= t_len_trig;
                          sample_cnt <= 0;
                          playing    <= 1'b1;
                          state      <= PLAY;
                      end
                PLAY: if (sample_cnt == len_r - 1) begin
                          playing <= 1'b0;
                          state   <= IDLE;
                      end else begin
                          sample_cnt <= sample_cnt + 1;
                      end
            endcase
        end
    end

    // Phase accumulator (DDS)
    logic [`PULSE_REG_PHASE_W-1:0] phase_acc;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)            phase_acc <= '0;
        else if (state == IDLE && pulse_ready)
                               phase_acc <= phase0_r;
        else if (playing)      phase_acc <= phase_acc + fcw_r;
    end

    // CORDIC output signals
    localparam CORDIC_W = 16;
    logic signed [CORDIC_W-1:0] sin_i, sin_q;

    // Instantiate CORDIC here
    // cordic_inst(.s_axis_phase_tdata(phase_acc[31:0]), ...);

    // Envelope BRAM (single-port read)
    (* ram_style = "block" *) logic signed [`PULSE_REG_AMP_W-1:0] env_bram [0:65535];
    logic [`ENVELOPE_ADDR_W-1:0] env_addr = env_ptr_r + sample_cnt;
    logic signed [`PULSE_REG_AMP_W-1:0] env_sample;
    always_ff @(posedge clk) env_sample <= env_bram[env_addr];

    // Multiply: amp × envelope × sin/cos
    logic signed [AMP_W+ENV_W-1:0] i_prod, q_prod;
    assign i_prod = amp_r * env_sample * sin_i >>> 13;
    assign q_prod = amp_r * env_sample * sin_q >>> 13;

    // Clip & pack {Q,I}
    logic [31:0] iq_word;
    assign iq_word = {q_prod[CORDIC_W+ENV_W-1 -:16],
                      i_prod[CORDIC_W+ENV_W-1 -:16]};

    // AXI-Stream out
    assign m_axis.data  = iq_word;
    assign m_axis.valid = playing;
    assign m_axis.ready = 1'b1;  // DAC always accepts

endmodule