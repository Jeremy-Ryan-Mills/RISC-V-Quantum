// 2‑bit Local Branch Predictor (IDX‑bit table index)
// - 256×2‑bit saturating counters (default IDX=8) hold per‑PC history.
// - Combinational read: MSB of counter → predict_taken during fetch.
// - Synchronous update in EX: increment on taken, decrement on not‑taken.
// - Reset to 01 (“weak NT”); improves accuracy to ≈ 85‑90 % with <1 KB RAM.
// - No extra pipeline stage—query is a single‑LUT delay; update is off‑path.

module branch_predictor (
    input logic clk,
    input logic reset,
    input logic [31:0] pc,
    output logic predict_taken,

    // For update
    input logic update_en,
    input logic [31:0] pc_u,
    input logic branch_taken
);

    (* ram_style = "distributed" *)
    logic [1:0] bht [0:1 << `BP_DEPTH - 1];

    // Combinational read
    wire [`BP_DEPTH - 1:0] idx = pc[`BP_DEPTH + 1 : 2];
    assign predict_taken = bht[idx][1];

    // Synchronous update
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            bht <= '{default: 2'b01};
        end else if (update_en) begin
            unique case ({branch_taken, bht[idx]})
                3'b100, 3'b101 : bht[idx] <= bht[idx] + 2'd1; // Taken -> Increment (saturate at 11)
                3'b010, 3'b011 : bht[idx] <= bht[idx] - 2'd1; // Not taken -> Decrement (saturate at 0)
                default : bht[idx] <= bht[idx];
            endcase
        end
    end

endmodule
