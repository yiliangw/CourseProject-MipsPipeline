`timescale 1ns / 1ps
`include "head.v"

module MUXPCNPC(
	input  [`WIDTH_MUXPCNPCSEL: 1] MUXPCNPCSel,
	input  [31:0] PC_P_PCADD4,
	input	 [31:0] NPC_P_NPC,
	output reg [31:0] Out
	);
	
	always @(*)
	begin
		case (MUXPCNPCSel)
			0:	Out = PC_P_PCADD4;
			1:	Out = NPC_P_NPC;
			default: Out = 32'h00003000;
		endcase
	end
	
endmodule


module MUXALUA(
	input [`WIDTH_MUXALUASEL:1] MUXALUASel,
	input [31:0] EForward_P_RD1,
	input [31:0] EPipelineReg_P_Shamt,
	output reg [31:0] Out
	);
	
	always @(*)
	begin
		case(MUXALUASel)
			0: Out = EForward_P_RD1;
			1: Out = EPipelineReg_P_Shamt;
			default: Out = 32'b0;
		endcase
	end
	
endmodule


module MUXALUB(
	input	 [`WIDTH_MUXALUBSEL:1] MUXALUBSel,
	input  [31:0] EForward_P_RD2,
	input  [31:0] EPipelineReg_P_Ext,
	output reg [31:0] Out
	);
	
	always @(*)
	begin
		case (MUXALUBSel)
			0:	Out = EForward_P_RD2;
			1:	Out = EPipelineReg_P_Ext;
			default:	Out = 32'b0;
		endcase
	end
	
endmodule
		
						
	
