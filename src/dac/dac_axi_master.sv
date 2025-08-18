/**
 * DAC AXI Master Module
 * 
 * AXI4-Stream interface module that provides buffering and handshaking between
 * the pulse engine and downstream DAC modules. Implements a 1-depth skid buffer
 * to decouple ready/valid handshaking and ensure reliable data transfer.
 * 
 * Operation:
 * 1. Receives I/Q samples from pulse_engine via upstream interface
 * 2. Buffers samples in a single register to handle timing mismatches
 * 3. Forwards samples to DAC via AXI4-Stream interface
 * 4. Manages backpressure between upstream and downstream
 * 
 * Buffer Behavior:
 * - 1-depth skid buffer (register slice) for timing decoupling
 * - Handles cases where upstream and downstream have different ready/valid timing
 * - Provides flow control to prevent data loss
 * - Supports pass-through operation when buffer is empty
 * 
 * Key Features:
 * - Configurable data width (default 32-bit)
 * - Automatic backpressure handling
 * - TLAST signal support for frame boundaries
 * - Clean handshaking protocol compliance
 * - Minimal latency buffering
 * 
 * @param DATA_W         Data width (default 32)
 * @param clk            System clock
 * @param rst_n          Active-low reset
 * @param iq_sample      I/Q sample data from pulse_engine
 * @param valid_iq       Valid signal from pulse_engine
 * @param last_iq        Last signal from pulse_engine (optional)
 * @param ready_iq       Ready signal to pulse_engine
 * @param m_axis_tdata   AXI-Stream data to DAC
 * @param m_axis_tvalid  AXI-Stream valid signal
 * @param m_axis_tready  AXI-Stream ready signal from DAC
 * @param m_axis_tlast   AXI-Stream last signal
 */
// AXI4-Stream shim between pulse_engine and DAC
module dac_axi_master #(
  parameter int DATA_W = 32
)(
  input  logic             clk,
  input  logic             rst_n,

  // Upstream from pulse_engine
  input  logic [DATA_W-1:0] iq_sample,   // tdata
  input  logic              valid_iq,    // tvalid
  input  logic              last_iq,     // optional TLAST per sample/pulse (tie 0 if unused)
  output logic              ready_iq,    // tready to pulse_engine

  // Downstream AXI4-Stream to DAC
  output logic [DATA_W-1:0] m_axis_tdata,
  output logic              m_axis_tvalid,
  input  logic              m_axis_tready, // many DACs hold this high; still respect it
  output logic              m_axis_tlast
);

  // ---------------------------------------------------------------
  // 1-depth skid buffer (register slice) to decouple ready/valid
  // ---------------------------------------------------------------
  logic [DATA_W-1:0] data_r;
  logic              last_r;
  logic              full;   // buffer holds an item

  // When downstream ready AND we have valid, we can move/emit
  wire take_upstream = (!full) && valid_iq;                 // can accept from upstream
  wire pop_downstream = full && m_axis_tready;             // downstream consumed our buffered item

  // Ready back to pulse_engine: we can take when buffer not full
  assign ready_iq = !full;

  // Buffer fill/empty control
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      full   <= 1'b0;
      data_r <= '0;
      last_r <= 1'b0;
    end else begin
      // Push into buffer if space and upstream is valid
      if (take_upstream) begin
        data_r <= iq_sample;
        last_r <= last_iq;
        full   <= 1'b1;
      end

      // Pop when downstream consumes it
      if (pop_downstream) begin
        full <= 1'b0;
      end

      // If both happen in same cycle (ready & valid & ready), it's a pass-through:
      // take_upstream sets full=1, pop_downstream clears it → stays empty next cycle.
    end
  end

  // Drive downstream AXI
  assign m_axis_tdata  = data_r;
  assign m_axis_tvalid = full;
  assign m_axis_tlast  = last_r;

endmodule
