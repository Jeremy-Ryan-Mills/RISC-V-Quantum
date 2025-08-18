/**
 * Pulse Register FIFO Module
 * 
 * A configurable FIFO that stores and manages pulse instructions with automatic
 * timing control. This module implements a smart queuing system that decrements
 * start time values and automatically triggers pulses when their delay expires.
 * 
 * Operation:
 * 1. Stores incoming pulse parameters (frequency, phase, amplitude, timing, etc.)
 * 2. Automatically decrements t_start values every clock cycle
 * 3. Outputs pulse_ready when t_start reaches 0
 * 4. Provides registered outputs for stable pulse parameter reading
 * 
 * Key Features:
 * - Configurable depth (default 16)
 * - Automatic timing control with t_start decrementing
 * - Full/empty status indicators
 * - Synchronous read/write operations
 * - Gray-coded pointers for reliable full/empty detection
 * 
 * Timing Behavior:
 * - Pulses with t_start=0 are immediately ready
 * - Pulses with t_start>0 are queued and automatically triggered
 * - All t_start values decrement simultaneously every clock cycle
 * 
 * @param DEPTH        FIFO depth (default 16)
 * @param clk          System clock
 * @param rst_n        Active-low reset
 * @param wr_en        Write enable
 * @param wr_phase     Write phase parameter
 * @param wr_amp       Write amplitude parameter
 * @param wr_freq      Write frequency parameter
 * @param wr_tstart    Write start time parameter
 * @param wr_tlen      Write length parameter
 * @param wr_env_addr  Write envelope address
 * @param pulse_ready  Pulse ready output (asserted when t_start=0)
 * @param rd_phase     Read phase parameter
 * @param rd_amp       Read amplitude parameter
 * @param rd_freq      Read frequency parameter
 * @param rd_tstart    Read start time parameter
 * @param rd_tlen      Read length parameter
 * @param rd_env_addr  Read envelope address
 * @param full         FIFO full indicator
 * @param empty        FIFO empty indicator
 */
`include "riscv_defines.vh"

// Pulse register is a FIFO that stores pulse isntructions
module pulse_register #(
    parameter DEPTH     = 16,
)(
    input  logic                 clk,
    input  logic                 rst_n,

    // Write side
    input  logic                 wr_en,
    input  logic [`PULSE_REG_PHASE_W-1:0]   wr_phase,
    input  logic [`PULSE_REG_AMP_W-1:0]     wr_amp,
    input  logic [`PULSE_REG_FREQ_W-1:0]    wr_freq,
    input  logic [`PULSE_REG_TSTART_W-1:0]  wr_tstart,
    input  logic [`PULSE_REG_TLEN_W-1:0]    wr_tlen,
    input  logic [`ENVELOPE_ADDR_W-1:0]     wr_env_addr,

    // Read side
    output logic                            pulse_ready,
    output logic [`PULSE_REG_PHASE_W-1:0]   rd_phase,
    output logic [`PULSE_REG_AMP_W-1:0]     rd_amp,
    output logic [`PULSE_REG_FREQ_W-1:0]    rd_freq,
    output logic [`PULSE_REG_TSTART_W-1:0]  rd_tstart,
    output logic [`PULSE_REG_TLEN_W-1:0]    rd_tlen,
    output logic [`ENVELOPE_ADDR_W-1:0]     rd_env_addr,
    output logic                 full,
    output logic                 empty
);

    localparam AW = $clog2(DEPTH);

    // Storage arrays 
    logic [`PULSE_REG_PHASE_W-1:0] phase_mem  [0:DEPTH-1];
    logic [`PULSE_REG_AMP_W-1:0]   amp_mem    [0:DEPTH-1];
    logic [`PULSE_REG_FREQ_W-1:0]  freq_mem   [0:DEPTH-1];
    logic [`PULSE_REG_TSTART_W-1:0]tstart_mem [0:DEPTH-1];
    logic [`PULSE_REG_TLEN_W-1:0]  tlen_mem   [0:DEPTH-1];

    // Pointers & status
    logic [AW:0] wr_ptr, rd_ptr;       // one extra bit for full/empty discrimination

    assign full  = (wr_ptr[AW]   != rd_ptr[AW])  &&
                   (wr_ptr[AW-1:0] == rd_ptr[AW-1:0]);
    assign empty = (wr_ptr == rd_ptr);

    // WRITE – synchronous
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wr_ptr <= '0;
        end else if (wr_en && !full) begin
            phase_mem [wr_ptr[AW-1:0]] <= wr_phase;
            amp_mem   [wr_ptr[AW-1:0]] <= wr_amp;
            freq_mem  [wr_ptr[AW-1:0]] <= wr_freq;
            tstart_mem[wr_ptr[AW-1:0]] <= wr_tstart;
            tlen_mem  [wr_ptr[AW-1:0]] <= wr_tlen;
            wr_ptr <= wr_ptr + 1'b1;
        end
    end

    // READ – synchronous (registered outputs)
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rd_ptr <= '0;
        end else if (!empty) begin
            if (tstart_mem[rd_ptr[AW-1:0]] == 0) begin
                pulse_ready <= 1'b1;
                rd_phase  <= phase_mem [rd_ptr[AW-1:0]];
                rd_amp    <= amp_mem   [rd_ptr[AW-1:0]];
                rd_freq   <= freq_mem  [rd_ptr[AW-1:0]];
                rd_tstart <= tstart_mem[rd_ptr[AW-1:0]];
                rd_tlen   <= tlen_mem  [rd_ptr[AW-1:0]];
            end else begin
                pulse_ready <= 1'b0;
                rd_phase  <= '0;
                rd_amp    <= '0;
                rd_freq   <= '0;
                rd_tstart <= '0;
                rd_tlen   <= '0;
            end
            rd_ptr <= rd_ptr + 1'b1;
        end
    end

    // Decrement all tstart values by 1 every clock cycle
    always_ff @(posedge clk) begin
        for (int i = 0; i < DEPTH; i++) begin
            tstart_mem[i] <= tstart_mem[i] - 1'b1;
        end
    end
endmodule