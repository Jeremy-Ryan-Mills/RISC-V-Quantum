module pulse_fetch (
    input logic clk,
    input logic rst_n,

    input logic [31:0] addr,

    output logic [31:0] frequency,
    output logic [15:0] phase,
    output logic [13:0] amplitude,
    output logic [27:0] t_start,
    output logic [19:0] t_len

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
    assign frequency = pulse_inst[31:0];
    assign phase = pulse_inst[47:32];
    assign amplitude = pulse_inst[61:48];
    assign t_start = pulse_inst[87:62];
    assign t_len = pulse_inst[107:88];

endmodule