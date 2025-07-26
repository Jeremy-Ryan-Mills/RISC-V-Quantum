module branch_predictor (
    input logic clk,
    input logic reset,
    input logic [31:0] pc,
    output logic predict_taken
);

    assign predict_taken = 1'b0; // always predict not taken for now


endmodule
