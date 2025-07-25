module branch_predictor (
    input logic clk,
    input logic reset,
    input logic [31:0] pc,
    output logic predict_taken,
    output logic [31:0] predicted_pc
);

    assign predict_taken = 1'b0; // always predict not taken for now
    assign predicted_pc = pc + 4;

endmodule
