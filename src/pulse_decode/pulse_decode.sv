module pulse_decode (
    input logic clk,
    input logic rst_n,

    input logic [`PULSE_REG_W-1:0] pulse_inst,
    output logic [`PULSE_REG_FREQ_W-1:0] frequency,
    output logic [`PULSE_REG_PHASE_W-1:0] phase,
    output logic [`PULSE_REG_AMP_W-1:0] amplitude,
    output logic [`PULSE_REG_TSTART_W-1:0] t_start,
    output logic [`PULSE_REG_TLEN_W-1:0] t_len
);

    always_comb begin
        frequency = pulse_inst[`PULSE_REG_FREQ_END:`PULSE_REG_FREQ_START];
        phase = pulse_inst[`PULSE_REG_PHASE_END:`PULSE_REG_PHASE_START];
        amplitude = pulse_inst[`PULSE_REG_AMP_END:`PULSE_REG_AMP_START];
        t_start = pulse_inst[`PULSE_REG_TSTART_END:`PULSE_REG_TSTART_START];
        t_len = pulse_inst[`PULSE_REG_TLEN_END:`PULSE_REG_TLEN_START];
    end


endmodule