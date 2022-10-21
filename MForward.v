`timescale 1ns / 1ps
`include "head.v"

module MForward(
	input [31:0] MPipelineRegRD1,
   input [31:0] MPipelineRegRD2,
	input [4:0] M_Rs,
	input [4:0] M_Rt,
	input W_GRFWE,
	input [4:0] W_Addr,
	input [31:0] W_WD,
	input [1:0] W_Tnew,
	output [31:0] RD1,
	output [31:0] RD2
	 );
	 
	wire WForwardRD1, WForwardRD2;
	
	assign WForwardRD1 = ((W_GRFWE == 1) & (W_Addr == M_Rs) & (M_Rs != 5'b0) & (W_Tnew == 0))? 1: 0;
	assign WForwardRD2 = ((W_GRFWE == 1) & (W_Addr == M_Rt) & (M_Rt != 5'b0) & (W_Tnew == 0))? 1: 0;
	
	assign RD1 = WForwardRD1? W_WD: MPipelineRegRD1;
	assign RD2 = WForwardRD2? W_WD: MPipelineRegRD2;

endmodule
