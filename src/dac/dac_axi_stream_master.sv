
module dac_axi_stream_master #(
    parameter DATA_W = 32      // 16‑bit I + 16‑bit Q per sample
)(
    input  logic              ACLK,     // clk_q (same as pulse engine)
    input  logic              ARESETN,

    // Pulse‑engine side handshake
    input  logic [DATA_W-1:0] samp_in,
    input  logic              samp_valid,
    output logic              samp_ready,

    // AXI‑Stream interface to RF‑DAC tile
    output logic [DATA_W-1:0] M_TDATA,
    output logic              M_TVALID,
    input  logic              M_TREADY,
    output logic              M_TLAST,
    output logic [DATA_W/8-1:0] M_TKEEP
);
    // Two‑entry skid buffer for back‑pressure handling
    logic                     hold;
    logic [DATA_W-1:0]        hold_data;

    assign samp_ready = ~hold | M_TREADY;   // back‑pressure to DDS
    assign M_TDATA    = hold ? hold_data : samp_in;
    assign M_TVALID   = hold ? 1'b1      : samp_valid;
    assign M_TLAST    = 1'b0;            // continuous stream
    assign M_TKEEP    = {DATA_W/8{1'b1}};

    always_ff @(posedge ACLK or negedge ARESETN) begin
        if (!ARESETN) begin
            hold <= 1'b0;
        end else begin
            // Capture sample when engine valid & DAC not ready
            if (!hold && samp_valid && !M_TREADY) begin
                hold      <= 1'b1;
                hold_data <= samp_in;
            end else if (hold && M_TREADY) begin
                hold <= 1'b0;
            end
        end
    end
endmodule // dac_axi_stream_master

