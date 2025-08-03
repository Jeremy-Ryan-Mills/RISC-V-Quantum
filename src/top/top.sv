module top (
    input logic core_clk,
    input logic core_rst_n,
    input logic ps_clk,
    input logic ps_rst_n,
);

    logic [31:0] pulse_inst_out;
    logic pulse_inst_out_valid;

    core core_inst(
        .clk(core_clk),
        .rst_n(core_rst_n),
        .pulse_inst_out(pulse_inst_out),
        .pulse_inst_out_valid(pulse_inst_out_valid)
    );


    // Pulse instruction FIFO to pulse scheduler
    logic [31:0] pulse_inst_fifo_rd_data;
    logic pulse_inst_fifo_empty;
    logic pulse_inst_fifo_full;

    async_fifo #(
        .DATA_WIDTH(32),
        .DEPTH(16)
    ) pulse_inst_fifo (
        .clk(ps_clk),
        .rst_n(ps_rst_n),
        .wr_data(pulse_inst_out),
        .wr_en(pulse_inst_out_valid),
        .rd_data(pulse_inst_fifo_rd_data),
        .rd_en(1'b1),
        .empty(pulse_inst_fifo_empty),
        .full(pulse_inst_fifo_full)
    );

    pulse_scheduler pulse_scheduler_inst (
        .clk(ps_clk),
        .rst_n(ps_rst_n),
        .pulse_inst_in(pulse_inst_fifo_rd_data),
        .pulse_inst_in_valid(~pulse_inst_fifo_empty)
    );


endmodule