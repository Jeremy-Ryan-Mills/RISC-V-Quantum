module pulse_fetch (
    input logic clk,
    input logic rst_n,

    input logic [31:0] addr,

    output logic [`PULSE_REG_FREQ_W-1:0] frequency,
    output logic [`PULSE_REG_PHASE_W-1:0] phase,
    output logic [`PULSE_REG_AMP_W-1:0] amplitude,
    output logic [`PULSE_REG_TSTART_W-1:0] t_start,
    output logic [`PULSE_REG_TLEN_W-1:0] t_len,
    output logic [`ENVELOPE_ADDR_W-1:0] envelope_addr

);

    reg [255:0] mem [0:31];
    reg [255:0] pulse_inst;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pulse_inst <= 256'd0;
        end else begin
            pulse_inst <= mem[addr];
        end
    end

    // Change this, write it out

    // TODO: Change this to use the defines
    assign frequency = pulse_inst[31:0];
    assign phase = pulse_inst[47:32];
    assign amplitude = pulse_inst[61:48];
    assign t_start = pulse_inst[87:64];
    assign t_len = pulse_inst[103:88];
    assign envelope_addr = pulse_inst[119:104];

endmodule