`timescale 1ns / 1ps
`include "head.v"

module EForward(
	input [31:0] EPipelineRegRD1,
	input [31:0] EPipelineRegRD2,
	input [4:0] E_Rs, 
	input [4:0] E_Rt,
	input M_GRFWE,
	input [4:0] M_Addr,
	input [31:0] M_WD,
	input [1:0] M_Tnew,
	input W_GRFWE,
	input [4:0] W_Addr,
	input [31:0] W_WD,
	input [1:0] W_Tnew,
	output [31:0] RD1,
	output [31:0] RD2
    );

	wire MForwardRD1, MForwardRD2, WForwardRD1, WForwardRD2;
	 
	assign MForwardRD1 = ((M_GRFWE == 1) & (M_Addr == E_Rs) & (E_Rs != 5'b0) & (M_Tnew == 0))? 1: 0;
	assign WForwardRD1 = ((W_GRFWE == 1) & (W_Addr == E_Rs) & (E_Rs != 5'b0) & (W_Tnew == 0))? 1: 0;
	assign MForwardRD2 = ((M_GRFWE == 1) & (M_Addr == E_Rt) & (E_Rt != 5'b0) & (M_Tnew == 0))? 1: 0;
	assign WForwardRD2 = ((W_GRFWE == 1) & (W_Addr == E_Rt) & (E_Rt != 5'b0) & (W_Tnew == 0))? 1: 0;
	 
	assign RD1 = MForwardRD1? M_WD:
					 WForwardRD1? W_WD:
									  EPipelineRegRD1;
									  
	assign RD2 = MForwardRD2? M_WD:
					 WForwardRD2? W_WD:
									  EPipelineRegRD2;
									 
endmodule
