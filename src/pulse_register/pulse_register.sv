`include "riscv_defines.vh"


// Pulse register is a FIFO that stores pulse isntructions
module pulse_register #(
    parameter DEPTH     = 16,
)(
    input  logic                 clk,
    input  logic                 rst_n,

    // Write side
    input  logic                 wr_en,
    input  logic [PHASE_W-1:0]   wr_phase,
    input  logic [AMP_W-1:0]     wr_amp,
    input  logic [FREQ_W-1:0]    wr_freq,
    input  logic [TSTART_W-1:0]  wr_tstart,
    input  logic [TLEN_W-1:0]    wr_tlen,

    // Read side
    input  logic                 rd_en,
    output logic [PHASE_W-1:0]   rd_phase,
    output logic [AMP_W-1:0]     rd_amp,
    output logic [FREQ_W-1:0]    rd_freq,
    output logic [TSTART_W-1:0]  rd_tstart,
    output logic [TLEN_W-1:0]    rd_tlen,
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
        end else if (rd_en && !empty) begin
            rd_phase  <= phase_mem [rd_ptr[AW-1:0]];
            rd_amp    <= amp_mem   [rd_ptr[AW-1:0]];
            rd_freq   <= freq_mem  [rd_ptr[AW-1:0]];
            rd_tstart <= tstart_mem[rd_ptr[AW-1:0]];
            rd_tlen   <= tlen_mem  [rd_ptr[AW-1:0]];
            rd_ptr    <= rd_ptr + 1'b1;
        end
    end
endmodule