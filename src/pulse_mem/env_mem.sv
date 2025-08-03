
// Stores envelope data for the pulse, 14 bits per sample, 2**16 samples for memory
module env_mem (
    input logic clk,
    input logic rst_n,

    input logic [`ENVELOPE_ADDR_W-1:0] addr,

    output logic [`PULSE_REG_AMP_W-1:0] data
);

    reg [`PULSE_REG_AMP_W-1:0] mem [0:`ENVELOPE_ADDR_W-1];

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            data <= `PULSE_REG_AMP_W'd0;
        end else begin
            data <= mem[addr];
        end
    end

endmodule