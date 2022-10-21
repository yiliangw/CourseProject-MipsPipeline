`timescale 1ns / 1ps
`include "head.v"

module DForward(
    input [31:0] D_GRFRD1,
    input [31:0] D_GRFRD2,
	 input [4:0] D_Rs,
	 input [4:0] D_Rt,
    input E_GRFWE,
    input [4:0] E_Addr,
    input [31:0] E_WD,
    input [1:0] E_Tnew,
    input M_GRFWE,
    input [4:0] M_Addr,
    input [31:0] M_WD,
    input [1:0] M_Tnew,
    output [31:0] RD1,
    output [31:0] RD2
    );
	 
	 wire EForwardRD1, EForwardRD2, MForwardRD1, MForwardRD2;
	 
	 assign EForwardRD1 = ((E_GRFWE == 1) & (E_Addr == D_Rs) & (D_Rs != 5'b0) & (E_Tnew == 0))? 1: 0;
	 assign MForwardRD1 = ((M_GRFWE == 1) & (M_Addr == D_Rs) & (D_Rs != 5'b0) & (M_Tnew == 0))? 1: 0;
	 assign EForwardRD2 = ((E_GRFWE == 1) & (E_Addr == D_Rt) & (D_Rt != 5'b0) & (E_Tnew == 0))? 1: 0;
	 assign MForwardRD2 = ((M_GRFWE == 1) & (M_Addr == D_Rt) & (D_Rt != 5'b0) & (M_Tnew == 0))? 1: 0;
	
	 assign RD1 = EForwardRD1? E_WD:
					  MForwardRD1? M_WD:
										D_GRFRD1;
									
	 assign RD2 = EForwardRD2? E_WD:
					  MForwardRD2? M_WD:
										D_GRFRD2;
									  

endmodule
