module dac_axi_master (
    input  logic         clk,
    input  logic         rst_n,

    // From pulse engine
    input  logic [31:0]  iq_sample,
    input  logic         valid_iq,

    // AXI4-Stream output
    output logic [31:0]  m_axis_tdata,
    output logic         m_axis_tvalid,
    input  logic         m_axis_tready,  // Should always be 1
    output logic         m_axis_tlast    // Not used but required by some DACs
);
    // Output assignment
    assign m_axis_tdata  = iq_sample;
    assign m_axis_tvalid = valid_iq;
    assign m_axis_tlast  = 1'b0; // Optional, set to 1 if last beat in burst

endmodule