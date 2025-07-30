module pulse_register (
    input logic clk,
    input logic rst_n,
    
    input logic [13:0] amplitude_in,
    input logic        amp_we,

    input logic [15:0] phase_in,
    input logic        phase_we,

    input logic [31:0] frequency_in,
    input logic        frequency_we,

    input logic [27:0] t_start_in,
    input logic        t_start_we,

    input logic [19:0] t_len_in,
    input logic        t_len_we,

    output logic [13:0] amplitude,
    output logic [15:0] phase,
    output logic [31:0] frequency,
    output logic [27:0] t_start,
    output logic [19:0] t_len
);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            amplitude <= 14'd0;
            phase <= 16'd0;
            frequency <= 32'd0;
            t_start <= 28'd0;
            t_len <= 20'd0;
        end else begin
            if (amp_we) amplitude <= amplitude_in;
            if (phase_we) phase <= phase_in;
            if (frequency_we) frequency <= frequency_in;
            if (t_start_we) t_start <= t_start_in;
            if (t_len_we) t_len <= t_len_in;
        end
    end


endmodule