`timescale 1ns / 1ps
`include "head.v"

module GRF(
    input Reset,
    input Clk,
	 input WE,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
	 input [31:0] PC4,
    output [31:0] RD1,
    output [31:0] RD2
    );
	 
	 wire [31:0] PC = PC4 - 32'd4;
	 
	 reg [31:0] RegFile[31:0];
	 
	 assign RD1 = ((A3 == A1) & (WE == 1) & (A3 != 5'b0))? WD: RegFile[A1];
	 assign RD2 = ((A3 == A2) & (WE == 1) & (A3 != 5'b0))? WD: RegFile[A2];
	 
	 always @(posedge Clk)
	 begin
		if (Reset)
			begin: GRF_init
				reg [5:0] i;
				for (i=0; i<6'd32; i=i+1)
					begin
						RegFile[i] <= 32'b0;
					end
			end
		else
			begin
				if (WE)
					begin
						if (A3 != 5'b0)
							RegFile[A3] <= WD;
						$display ("%d@%h: $%d <= %h",$time, PC, A3, WD);
					end
			end
	end
	
		
endmodule
