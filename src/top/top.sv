module top (
    input logic core_clk,
    input logic core_rst_n,
    input logic ps_clk,
    input logic ps_rst_n,
);

    pulse_descriptor_t pulse_descriptor;
    logic pulse_descriptor_valid;

    core core_inst(
        .clk(core_clk),
        .rst_n(core_rst_n),
        .pulse_descriptor(pulse_descriptor),
        .pulse_descriptor_valid(pulse_descriptor_valid)
    );

    // Pulse instruction FIFO to pulse scheduler
    pulse_descriptor_t pulse_inst_fifo_rd_data;
    logic pulse_inst_fifo_empty;
    logic pulse_inst_fifo_full;

    async_fifo #(
        .AW(4)
    ) pulse_inst_fifo (
        .clk_wr(core_clk),
        .rst_wr(core_rst_n),
        .wr_en(pulse_descriptor_valid),
        .wr_data(pulse_descriptor),
        .full(pulse_inst_fifo_full),
        .clk_rd(ps_clk),
        .rst_rd(ps_rst_n),
        .rd_en(1'b1),
        .rd_data(pulse_inst_fifo_rd_data),
        .empty(pulse_inst_fifo_empty)
    );

    pulse_scheduler pulse_scheduler_inst (
        .clk(ps_clk),
        .rst_n(ps_rst_n),
        .pulse_descriptor(pulse_inst_fifo_rd_data),
        .pulse_descriptor_valid(~pulse_inst_fifo_empty)
    );


endmodule