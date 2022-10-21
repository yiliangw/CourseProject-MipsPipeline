`timescale 1ns / 1ps
`include "head.v"

module EQU(
    input [31:0] RD1,
    input [31:0] RD2,
    output Zero
    );

assign Zero = (RD1 == RD2);

endmodule
