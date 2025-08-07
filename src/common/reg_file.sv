module reg_file (
    input  logic        clk,
    input  logic        reset,
    input  logic        we,
    input  logic [4:0]  rs1, rs2, rd,
    input  logic [31:0] wd,
    output logic [31:0] rv1, rv2
);
    logic [31:0] regs [0:31];

    // asynchronous read
    assign rv1 = (rs1 == 5'd0) ? 32'd0 : (rs1 == rd && we) ? wd : regs[rs1];
    assign rv2 = (rs2 == 5'd0) ? 32'd0 : (rs2 == rd && we) ? wd : regs[rs2];

    // synchronous write
    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            for (int i = 0; i < 32; i++)
                regs[i] <= 32'd0;
        else if (we && rd != 5'd0)
            regs[rd] <= wd;
    end
endmodule