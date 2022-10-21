`timescale 1ns / 1ps
`include "head.v"

module StallCTRL(
    input [1:0] D_TuseRs,
    input [1:0] D_TuseRt,
    input [4:0] D_Rs,
    input [4:0] D_Rt,
    input E_GRFWE,
    input [4:0] E_Addr,
    input [1:0] E_Tnew,
    input M_GRFWE,
    input [4:0] M_Addr,
    input [1:0] M_Tnew,
	 input Busy,
	 input D_MDInstr,
    output StallSignal
    );
	
	wire StallRs, StallRt, StallRsE, StallRsM, StallRtE, StallRtM, StallMD;
	
	assign StallRsE = (E_GRFWE == 1'b1) & (D_Rs != 5'd0) & (D_Rs == E_Addr) & (D_TuseRs < E_Tnew);
	assign StallRsM = (M_GRFWE == 1'b1) & (D_Rs != 5'd0) & (D_Rs == M_Addr) & (D_TuseRs < M_Tnew);
	assign StallRtE = (E_GRFWE == 1'b1) & (D_Rt != 5'd0) & (D_Rt == E_Addr) & (D_TuseRt < E_Tnew);
	assign StallRtM = (M_GRFWE == 1'b1) & (D_Rt != 5'd0) & (D_Rt == M_Addr) & (D_TuseRt < M_Tnew);
	
	assign StallRs = StallRsE | StallRsM;
	assign StallRt = StallRtE | StallRtM;
	
	assign StallMD = Busy & D_MDInstr;
	
	assign StallSignal = StallRs | StallRt | StallMD;
	
endmodule
