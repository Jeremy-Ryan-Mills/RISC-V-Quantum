// async_fifo.sv  – dual‑clock Gray‑coded FIFO for pulse descriptors
`include "common/pulse_descriptor.vh"

module async_fifo #(
    parameter AW = 4           // addr width → depth = 2**AW words
) (
    // write side (clk_wr domain – RISC‑V)
    input  wire              clk_wr,
    input  wire              rst_wr,
    input  wire              wr_en,
    input  pulse_descriptor_t wr_data,
    output wire              full,

    // read side (clk_rd domain – pulse scheduler)
    input  wire              clk_rd,
    input  wire              rst_rd,
    input  wire              rd_en,
    output pulse_descriptor_t rd_data,
    output wire              empty
);

    // Storage: true dual‑port BRAM
    localparam DEPTH = 1 << AW;
    (* ram_style = "block" *) reg [43:0] mem [0:DEPTH-1];  // 44-bit pulse_descriptor_t

    // Write pointer (binary & Gray)
    reg [AW:0] wr_bin = 0, wr_gray = 0;
    reg [AW:0] rd_gray_wr = 0;               // rd pointer resync'd into wr clk

    always_ff @(posedge clk_wr or posedge rst_wr) begin
        if (rst_wr) begin
            wr_bin  <= 0;
            wr_gray <= 0;
        end else if (wr_en & ~full) begin
            mem[wr_bin[AW-1:0]] <= wr_data;  // Store pulse_descriptor_t
            wr_bin  <= wr_bin + 1;
            wr_gray <= (wr_bin + 1) ^ ((wr_bin + 1) >> 1);
        end
    end

    // Read pointer (binary & Gray)
    reg [AW:0] rd_bin = 0, rd_gray = 0;
    reg [AW:0] wr_gray_rd = 0;               // wr pointer resync'd into rd clk

    always_ff @(posedge clk_rd or posedge rst_rd) begin
        if (rst_rd) begin
            rd_bin  <= 0;
            rd_gray <= 0;
        end else if (rd_en & ~empty) begin
            rd_bin  <= rd_bin + 1;
            rd_gray <= (rd_bin + 1) ^ ((rd_bin + 1) >> 1);
        end
    end

    // Dual‑flip‑flop synchronisers
    always_ff @(posedge clk_wr) rd_gray_wr <= {rd_gray_wr[AW-1:0], rd_gray};
    always_ff @(posedge clk_rd) wr_gray_rd <= {wr_gray_rd[AW-1:0], wr_gray};

    // Status logic
    wire [AW:0] rd_bin_wr = rd_gray_wr[AW:0] ^ (rd_gray_wr[AW:0] >> 1);
    wire [AW:0] wr_bin_rd = wr_gray_rd[AW:0] ^ (wr_gray_rd[AW:0] >> 1);

    assign full  = ( (wr_gray[AW]      != rd_gray_wr[AW]     ) &&
                     (wr_gray[AW-1]    != rd_gray_wr[AW-1]   ) &&
                     (wr_gray[AW-2:0]   == rd_gray_wr[AW-2:0]) );
    assign empty = (wr_gray_rd == rd_gray);
    assign rd_data = mem[rd_bin[AW-1:0]]; // Read pulse_descriptor_t

endmodule
