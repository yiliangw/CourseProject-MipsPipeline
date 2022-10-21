`timescale 1ns / 1ps
`include "head.v"

module PC(
    input Reset,
    input Clk,
	 input En,
    input [31:0] NPC,
    output reg [31:0] PC
    );
	 
	 always @(posedge Clk, posedge Reset)
	 begin
		if (Reset)
			begin
				PC <= 32'h00003000;
			end
		else
			begin
				if (En)
					begin
						PC <= NPC;
					end
			end
	 end

endmodule
