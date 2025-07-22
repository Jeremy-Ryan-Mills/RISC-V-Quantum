module reg_file (
    input  logic        clk,
    input logic         reset,
    input  logic        we,
    input  logic [4:0]  rs1,
    input  logic [4:0]  rs2,
    input  logic [4:0]  rd,
    input  logic [31:0] wd,
    output logic [31:0] rv1,
    output logic [31:0] rv2
);

    logic[31:0] regs[0:31]; // Register memory

    always_ff @(posedge clk) begin
        if (reset) begin
            rv1 <= 32'b0;
            rv2 <= 32'b0;
        end else begin
            rv1 <= (rs1 == 0) ? 32'b0 :
                (rs1 == rd && we && rd != 0) ? wd : regs[rs1];

            rv2 <= (rs2 == 0) ? 32'b0 :
                (rs2 == rd && we && rd != 0) ? wd : regs[rs2];
        end

        if (we && rd != 0) begin
            regs[rd] <= wd;
        end
    end
endmodule