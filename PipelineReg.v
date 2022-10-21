`timescale 1ns / 1ps
`include "head.v"
`include "CTRL.v"

module PipelineReg(
	 input En,
	 input Reset,
	 input Clk,
    input [31:0] Instr_in,
	 input [31:0] PC4_in,
    input [31:0] RD1_in,
    input [31:0] RD2_in,
    input [31:0] Ext_in,
    input [31:0] AO_in,
	 input [31:0] HI_in,
	 input [31:0] LO_in,
	 input [31:0] DMRD_in,
    output reg [31:0] Instr,
	 output reg [31:0] PC4,
    output reg [31:0] RD1,
    output reg [31:0] RD2,
    output reg [31:0] Ext,
    output reg [31:0] AO,
	 output reg	[31:0] HI,
	 output reg [31:0] LO,
	 output reg [31:0] DMRD,
    output [5:0] Op,
    output [4:0] Rs,
    output [4:0] Rt,
    output [4:0] Rd,
    output [4:0] Shamt,
    output [5:0] Funct,
    output [15:0] Imm,
    output [25:0] InstrIndex,
    output [`WIDTH_NPCSEL:1] NPCSel,
    output [`WIDTH_EXTSEL:1] EXTSel,
    output [`WIDTH_ALUSEL:1] ALUSel,
	 output [`WIDTH_MDSEL:1] MDSel,
	 output MDStart,
	 output DMWE,
	 output [`WIDTH_DMSIZESEL:1] DMSizeSel,
	 output [`WIDTH_DMEXTSEL:1] DMExtSel,
	 output GRFWE,
    output [`WIDTH_MUXPCNPCSEL:1] MUXPCNPCSel,
	 output [`WIDTH_MUXALUASEL:1]	MUXALUASel,
    output [`WIDTH_MUXALUBSEL:1] MUXALUBSel
    );
	 
	 always @(posedge Clk)
	 begin
		if (Reset)
			begin
				{Instr, PC4, RD1, RD2, Ext, AO, HI, LO, DMRD} <= 0;
			end
		else
			begin
				if (En)
					begin
						{Instr, PC4, RD1, RD2, Ext, AO, HI, LO, DMRD} <= {Instr_in, PC4_in, RD1_in, RD2_in, Ext_in, AO_in, HI_in, LO_in, DMRD_in};
					end
			end
	 end
	 
	 assign {Op, Rs, Rt, Rd, Shamt, Funct} = Instr;
	 assign Imm = Instr[15:0];
	 assign InstrIndex = Instr[25:0];
	 
	 CTRL CTRL (.Op(Op), .Funct(Funct), .Rt(Rt), .NPCSel(NPCSel), .EXTSel(EXTSel), .ALUSel(ALUSel),
					.MDSel(MDSel), .MDStart(MDStart), .DMWE(DMWE), .DMSizeSel(DMSizeSel), .DMExtSel(DMExtSel),
					.GRFWE(GRFWE), .MUXPCNPCSel(MUXPCNPCSel),
					.MUXALUASel(MUXALUASel), .MUXALUBSel(MUXALUBSel));

endmodule
