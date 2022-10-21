`timescale 1ns / 1ps
`include "head.v"
`include "PC.v"
`include "IM.v"
`include "PipelineReg.v"
`include "MUX.v"
`include "NPC.v"
`include "GRF.v"
`include "EXT.v"
`include "DForward.v"
`include "EQU.v"
`include "EForward.v"
`include "ALU.v"
`include "MD.v"
`include "MForward.v"
`include "DM.v"
`include "WriteInfGenerator.v"
`include "WriteInf.v"
`include "StallCTRL.v"
`include "StallActor.v"

module mips(
    input clk,
    input reset
    );
	 ////////////////////////////////
	 //output wires begin
	 ////////////////////////////////
	 
	 //// output wires of basic modules
	 
	 //PC
	 wire [31:0] PC_P_PC;
	 
	 //IM
	 wire [31:0] IM_P_Instr;
	 
	 //GRF
	 wire [31:0] GRF_P_RD1;
	 wire [31:0] GRF_P_RD2;
	 
	 //EQU
	 wire EQU_P_Zero;
	 
	 //EXT
	 wire [31:0] EXT_P_Ext;
	 
	 //NPC
	 wire [31:0] NPC_P_NPC;
	 
	 //ALU
	 wire [31:0] ALU_P_C;
	 
	 //MD
	 wire MD_P_Busy;
	 wire [31:0] MD_P_HI;
	 wire [31:0] MD_P_LO;
	
	 //DM
	 wire [31:0] DM_P_RD;
	 
	 //MUXPCNPC
	 wire [31:0] MUXPCNPC_P_Out;
	 
	 //MUXALUA
	 wire [31:0] MUXALUA_P_Out;
	 
	 //MUXALUB
	 wire [31:0] MUXALUB_P_Out;
	 
	 ////output wires of pipelineRegs
	 
	 //DPipelineReg
	 wire [31:0] DPipelineReg_P_Instr;
	 wire [31:0] DPipelineReg_P_PC4;
	 wire [31:0] DPipelineReg_P_RD1;
	 wire [31:0] DPipelineReg_P_RD2;
	 wire [31:0] DPipelineReg_P_Ext;
	 wire [31:0] DPipelineReg_P_AO;
	 wire [31:0] DPipelineReg_P_HI;
	 wire [31:0] DPipelineReg_P_LO;
	 wire [31:0] DPipelineReg_P_DMRD;
	 wire [5:0]	 DPipelineReg_P_Op;
	 wire [4:0]	 DPipelineReg_P_Rs;
	 wire [4:0]	 DPipelineReg_P_Rt;
	 wire [4:0]	 DPipelineReg_P_Rd;
	 wire [4:0]	 DPipelineReg_P_Shamt;
	 wire [5:0]	 DPipelineReg_P_Funct;
	 wire [15:0] DPipelineReg_P_Imm;
	 wire [25:0] DPipelineReg_P_InstrIndex;
	 wire	[`WIDTH_NPCSEL:1] DPipelineReg_P_NPCSel;
	 wire [`WIDTH_EXTSEL:1]	DPipelineReg_P_EXTSel;
	 wire	[`WIDTH_ALUSEL:1]	DPipelineReg_P_ALUSel;
	 wire [`WIDTH_MDSEL:1]	DPipelineReg_P_MDSel;
	 wire DPipelineReg_P_MDStart;
	 wire	DPipelineReg_P_DMWE;
	 wire [`WIDTH_DMSIZESEL:1] DPipelineReg_P_DMSizeSel;
	 wire [`WIDTH_DMEXTSEL:1]	DPipelineReg_P_DMExtSel;
	 wire DPipelineReg_P_GRFWE;
	 wire [`WIDTH_MUXPCNPCSEL:1] DPipelineReg_P_MUXPCNPCSel;
	 wire [`WIDTH_MUXALUASEL:1] DPipelineReg_P_MUXALUASel;
	 wire [`WIDTH_MUXALUBSEL:1] DPipelineReg_P_MUXALUBSel;
	 
	 //EPipelineReg
	 wire [31:0] EPipelineReg_P_Instr;
	 wire [31:0] EPipelineReg_P_PC4;
	 wire [31:0] EPipelineReg_P_RD1;
	 wire [31:0] EPipelineReg_P_RD2;
	 wire [31:0] EPipelineReg_P_Ext;
	 wire [31:0] EPipelineReg_P_AO;
	 wire [31:0] EPipelineReg_P_HI;
	 wire [31:0] EPipelineReg_P_LO;
	 wire [31:0] EPipelineReg_P_DMRD;
	 wire [5:0]	 EPipelineReg_P_Op;
	 wire [4:0]	 EPipelineReg_P_Rs;
	 wire [4:0]	 EPipelineReg_P_Rt;
	 wire [4:0]	 EPipelineReg_P_Rd;
	 wire [4:0]	 EPipelineReg_P_Shamt;
	 wire [5:0]	 EPipelineReg_P_Funct;
	 wire [15:0] EPipelineReg_P_Imm;
	 wire [25:0] EPipelineReg_P_InstrIndex;
	 wire	[`WIDTH_NPCSEL:1] EPipelineReg_P_NPCSel;
	 wire [`WIDTH_EXTSEL:1]	EPipelineReg_P_EXTSel;
	 wire	[`WIDTH_ALUSEL:1]	EPipelineReg_P_ALUSel;
	 wire [`WIDTH_MDSEL:1] EPipelineReg_P_MDSel;
	 wire EPipelineReg_P_MDStart;
	 wire	EPipelineReg_P_DMWE;
	 wire [`WIDTH_DMSIZESEL:1] EPipelineReg_P_DMSizeSel;
	 wire [`WIDTH_DMEXTSEL:1]	EPipelineReg_P_DMExtSel;
	 wire EPipelineReg_P_GRFWE;
	 wire [`WIDTH_MUXPCNPCSEL:1] EPipelineReg_P_MUXPCNPCSel;
	 wire [`WIDTH_MUXALUASEL:1] EPipelineReg_P_MUXALUASel;
	 wire [`WIDTH_MUXALUBSEL:1] EPipelineReg_P_MUXALUBSel;
	 
	 //MPipelineReg
	 wire [31:0] MPipelineReg_P_Instr;
	 wire [31:0] MPipelineReg_P_PC4;
	 wire [31:0] MPipelineReg_P_RD1;
	 wire [31:0] MPipelineReg_P_RD2;
	 wire [31:0] MPipelineReg_P_Ext;
	 wire [31:0] MPipelineReg_P_AO;
	 wire [31:0] MPipelineReg_P_HI;
	 wire [31:0] MPipelineReg_P_LO;
	 wire [31:0] MPipelineReg_P_DMRD;
	 wire [5:0]	 MPipelineReg_P_Op;
	 wire [4:0]	 MPipelineReg_P_Rs;
	 wire [4:0]	 MPipelineReg_P_Rt;
	 wire [4:0]	 MPipelineReg_P_Rd;
	 wire [4:0]	 MPipelineReg_P_Shamt;
	 wire [5:0]	 MPipelineReg_P_Funct;
	 wire [15:0] MPipelineReg_P_Imm;
	 wire [25:0] MPipelineReg_P_InstrIndex;
	 wire	[`WIDTH_NPCSEL:1] MPipelineReg_P_NPCSel;
	 wire [`WIDTH_EXTSEL:1]	MPipelineReg_P_EXTSel;
	 wire	[`WIDTH_ALUSEL:1]	MPipelineReg_P_ALUSel;
	 wire [`WIDTH_MDSEL:1]	MPipelineReg_P_MDSel;
	 wire MPipelineReg_P_MDStart;
	 wire	MPipelineReg_P_DMWE;
	 wire [`WIDTH_DMSIZESEL:1] MPipelineReg_P_DMSizeSel;
	 wire [`WIDTH_DMEXTSEL:1]	MPipelineReg_P_DMExtSel;
	 wire MPipelineReg_P_GRFWE;
	 wire [`WIDTH_MUXPCNPCSEL:1] MPipelineReg_P_MUXPCNPCSel;
	 wire [`WIDTH_MUXALUASEL:1] MPipelineReg_P_MUXALUASel;
	 wire [`WIDTH_MUXALUBSEL:1] MPipelineReg_P_MUXALUBSel;
	 
	 //WPipelineReg
	 wire [31:0] WPipelineReg_P_Instr;
	 wire [31:0] WPipelineReg_P_PC4;
	 wire [31:0] WPipelineReg_P_RD1;
	 wire [31:0] WPipelineReg_P_RD2;
	 wire [31:0] WPipelineReg_P_Ext;
	 wire [31:0] WPipelineReg_P_AO;
	 wire [31:0] WPipelineReg_P_HI;
	 wire [31:0] WPipelineReg_P_LO;
	 wire [31:0] WPipelineReg_P_DMRD;
	 wire [5:0]	 WPipelineReg_P_Op;
	 wire [4:0]	 WPipelineReg_P_Rs;
	 wire [4:0]	 WPipelineReg_P_Rt;
	 wire [4:0]	 WPipelineReg_P_Rd;
	 wire [4:0]	 WPipelineReg_P_Shamt;
	 wire [5:0]	 WPipelineReg_P_Funct;
	 wire [15:0] WPipelineReg_P_Imm;
	 wire [25:0] WPipelineReg_P_InstrIndex;
	 wire	[`WIDTH_NPCSEL:1] WPipelineReg_P_NPCSel;
	 wire [`WIDTH_EXTSEL:1]	WPipelineReg_P_EXTSel;
	 wire	[`WIDTH_ALUSEL:1]	WPipelineReg_P_ALUSel;
	 wire [`WIDTH_MDSEL:1]	WPipelineReg_P_MDSel;
	 wire WPipelineReg_P_MDStart;
	 wire	WPipelineReg_P_DMWE;
	 wire [`WIDTH_DMSIZESEL:1] WPipelineReg_P_DMSizeSel;
	 wire [`WIDTH_DMEXTSEL:1]	WPipelineReg_P_DMExtSel;
	 wire WPipelineReg_P_GRFWE;
	 wire [`WIDTH_MUXPCNPCSEL:1] WPipelineReg_P_MUXPCNPCSel;
	 wire [`WIDTH_MUXALUASEL:1] WPipelineReg_P_MUXALUASel;
	 wire [`WIDTH_MUXALUBSEL:1] WPipelineReg_P_MUXALUBSel;

	////output wires of hazard control modules
	
	//WriteInfGenerator
	wire [31:0] WriteInfGenerator_P_WD;
	wire [4:0] WriteInfGenerator_P_Addr;
	wire [1:0] WriteInfGenerator_P_Tnew;
	wire [`WIDTH_WDSOURCE:1] WriteInfGenerator_P_WDSource;
	wire WriteInfGenerator_P_GRFWE;
	wire [1:0] WriteInfGenerator_P_TuseRs;
	wire [1:0] WriteInfGenerator_P_TuseRt;
	wire WriteInfGenerator_P_MDInstr;
	
	//EWriteInf
	wire [31:0] EWriteInf_P_WD;
	wire [4:0] EWriteInf_P_Addr;
	wire [1:0] EWriteInf_P_Tnew;
	wire EWriteInf_P_GRFWE;
	wire [`WIDTH_WDSOURCE:1] EWriteInf_P_WDSource;
	
	//MWriteInf
	wire [31:0] MWriteInf_P_WD;
	wire [4:0] MWriteInf_P_Addr;
	wire [1:0] MWriteInf_P_Tnew;
	wire MWriteInf_P_GRFWE;
	wire [`WIDTH_WDSOURCE:1] MWriteInf_P_WDSource;

	//WWriteInf
	wire [31:0] WWriteInf_P_WD;
	wire [4:0] WWriteInf_P_Addr;
	wire [1:0] WWriteInf_P_Tnew;
	wire WWriteInf_P_GRFWE;
	wire [`WIDTH_WDSOURCE:1] WWriteInf_P_WDSource;
	
	//StallCTRL
	wire StallCTRL_P_StallSignal;
	
	//StallActor
	wire StallActor_P_PCEn;
	wire StallActor_P_DPipelineRegEn;
	wire StallActor_P_EWriteInfReset;
	wire StallActor_P_EPipelineRegReset;
	
	//DForward
	wire [31:0] DForward_P_RD1;
	wire [31:0] DForward_P_RD2;	
	
	//EForward
	wire [31:0] EForward_P_RD1;
	wire [31:0] EForward_P_RD2;
	
	//MForward
	wire [31:0] MForward_P_RD1;
	wire [31:0] MForward_P_RD2;
	
	////////////////////////////////
	//output wires end
	////////////////////////////////
	
	////////////////////////////////
	//instantiation of modules begin
	////////////////////////////////
	
	////basic modules, pipelineRegs and forwarding modules
	
	PC PC (.Reset(reset), .Clk(clk), .En(StallActor_P_PCEn),
			 .NPC(MUXPCNPC_P_Out), .PC(PC_P_PC));
			 
	MUXPCNPC MUXPCNPC (.MUXPCNPCSel(DPipelineReg_P_MUXPCNPCSel), .PC_P_PCADD4(PC_P_PC + 32'd4),
							 .NPC_P_NPC(NPC_P_NPC), .Out(MUXPCNPC_P_Out));
			 
	IM IM (.Reset(reset), .Clk(clk), .Addr(PC_P_PC), .Instr(IM_P_Instr));
	
	PipelineReg DPipelineReg (.En(StallActor_P_DPipelineRegEn), .Reset(reset), .Clk(clk), .Instr_in(IM_P_Instr),
									  .PC4_in(PC_P_PC + 32'd4), .RD1_in(), .RD2_in(), .Ext_in(), .AO_in(), .HI_in(),
									  .LO_in(), .DMRD_in(), .Instr(DPipelineReg_P_Instr), .PC4(DPipelineReg_P_PC4),
									  .RD1(DPipelineReg_P_RD1), .RD2(DPipelineReg_P_RD2), .Ext(DPipelineReg_P_Ext),
									  .AO(DPipelineReg_P_AO), .HI(DPipelineReg_P_HI), .LO(DPipelineReg_P_LO),
									  .DMRD(DPipelineReg_P_DMRD), .Op(DPipelineReg_P_Op),
									  .Rs(DPipelineReg_P_Rs), .Rt(DPipelineReg_P_Rt),
									  .Rd(DPipelineReg_P_Rd), .Shamt(DPipelineReg_P_Shamt),
									  .Funct(DPipelineReg_P_Funct), .Imm(DPipelineReg_P_Imm),
									  .InstrIndex(DPipelineReg_P_InstrIndex), .NPCSel(DPipelineReg_P_NPCSel), 
									  .EXTSel(DPipelineReg_P_EXTSel), .ALUSel(DPipelineReg_P_ALUSel), .MDSel(DPipelineReg_P_MDSel),
									  .MDStart(DpipelineReg_P_MDStart), .DMWE(DPipelineReg_P_DMWE), .DMSizeSel(DPipelineReg_P_DMSizeSel),
									  .DMExtSel(DPipelineReg_P_DMExtSel), .GRFWE(DPipelineReg_P_GRFWE),
									  .MUXPCNPCSel(DPipelineReg_P_MUXPCNPCSel), .MUXALUASel(DPipelineReg_P_MUXALUASel),
									  .MUXALUBSel(DPipelineReg_P_MUXALUBSel));
									  
	DForward DForward (.D_GRFRD1(GRF_P_RD1), .D_GRFRD2(GRF_P_RD2), .D_Rs(DPipelineReg_P_Rs),
							 .D_Rt(DPipelineReg_P_Rt), .E_GRFWE(EWriteInf_P_GRFWE), .E_Addr(EWriteInf_P_Addr),
							 .E_WD(EWriteInf_P_WD), .E_Tnew(EWriteInf_P_Tnew), .M_GRFWE(MWriteInf_P_GRFWE), 
							 .M_Addr(MWriteInf_P_Addr), .M_WD(MWriteInf_P_WD), .M_Tnew(MWriteInf_P_Tnew), 
							 .RD1(DForward_P_RD1), .RD2(DForward_P_RD2));
							 
	GRF GRF (.Reset(reset), .Clk(clk), .WE(WWriteInf_P_GRFWE), .A1(DPipelineReg_P_Rs), .A2(DPipelineReg_P_Rt),
				.A3(WWriteInf_P_Addr), .WD(WWriteInf_P_WD), .PC4(WPipelineReg_P_PC4), .RD1(GRF_P_RD1), .RD2(GRF_P_RD2));
				
	EXT EXT (.EXTSel(DPipelineReg_P_EXTSel), .Imm(DPipelineReg_P_Imm), .Ext(EXT_P_Ext));
	
	EQU EQU (.RD1(DForward_P_RD1), .RD2(DForward_P_RD2), .Zero(EQU_P_Zero));
	
	NPC NPC (.NPCSel(DPipelineReg_P_NPCSel), .Zero(EQU_P_Zero), .PC4(DPipelineReg_P_PC4),
				.BranchAddr(EXT_P_Ext), .InstrIndex(DPipelineReg_P_InstrIndex), .RD1(DForward_P_RD1),
				.NPC(NPC_P_NPC));
				
	PipelineReg EPipelineReg (.En(1'b1), .Reset(reset | StallActor_P_EPipelineRegReset), .Clk(clk),
									  .Instr_in(DPipelineReg_P_Instr),
									  .PC4_in(DPipelineReg_P_PC4), .RD1_in(DForward_P_RD1), .RD2_in(DForward_P_RD2), 
									  .Ext_in(EXT_P_Ext),
									  .AO_in(), .HI_in(), .LO_in(),
									  .DMRD_in(), .Instr(EPipelineReg_P_Instr), .PC4(EPipelineReg_P_PC4),
									  .RD1(EPipelineReg_P_RD1), .RD2(EPipelineReg_P_RD2), .Ext(EPipelineReg_P_Ext),
									  .AO(EPipelineReg_P_AO), .HI(EPipelineReg_P_HI), .LO(EPipelineReg_P_LO),
									  .DMRD(EPipelineReg_P_DMRD), 
									  .Op(EPipelineReg_P_Op), .Rs(EPipelineReg_P_Rs),
									  .Rt(EPipelineReg_P_Rt),.Rd(EPipelineReg_P_Rd), .Shamt(EPipelineReg_P_Shamt),
									  .Funct(EPipelineReg_P_Funct), .Imm(EPipelineReg_P_Imm),
									  .InstrIndex(EPipelineReg_P_InstrIndex), .NPCSel(EPipelineReg_P_NPCSel), 
									  .EXTSel(EPipelineReg_P_EXTSel), .ALUSel(EPipelineReg_P_ALUSel), .MDSel(EPipelineReg_P_MDSel),
									  .MDStart(EPipelineReg_P_MDStart), .DMWE(EPipelineReg_P_DMWE), .DMSizeSel(EPipelineReg_P_DMSizeSel),
									  .DMExtSel(EPipelineReg_P_DMExtSel),
									  .GRFWE(EPipelineReg_P_GRFWE),
									  .MUXPCNPCSel(EPipelineReg_P_MUXPCNPCSel), .MUXALUASel(EPipelineReg_P_MUXALUASel),
									  .MUXALUBSel(EPipelineReg_P_MUXALUBSel));
	
	EForward EForward (.EPipelineRegRD1(EPipelineReg_P_RD1), .EPipelineRegRD2(EPipelineReg_P_RD2),
							 .E_Rs(EPipelineReg_P_Rs), .E_Rt(EPipelineReg_P_Rt), .M_GRFWE(MWriteInf_P_GRFWE),
							 .M_Addr(MWriteInf_P_Addr), .M_WD(MWriteInf_P_WD), .M_Tnew(MWriteInf_P_Tnew),
							 .W_GRFWE(WWriteInf_P_GRFWE), .W_Addr(WWriteInf_P_Addr), .W_WD(WWriteInf_P_WD),
							 .W_Tnew(WWriteInf_P_Tnew), .RD1(EForward_P_RD1), .RD2(EForward_P_RD2));
		
	MUXALUA MUCALUA (.MUXALUASel(EPipelineReg_P_MUXALUASel), .EForward_P_RD1(EForward_P_RD1),
						  .EPipelineReg_P_Shamt({{27{1'b0}}, EPipelineReg_P_Shamt}), .Out(MUXALUA_P_Out));
						  
	MUXALUB MUXALUB (.MUXALUBSel(EPipelineReg_P_MUXALUBSel), .EForward_P_RD2(EForward_P_RD2),
						  .EPipelineReg_P_Ext(EPipelineReg_P_Ext), .Out(MUXALUB_P_Out));
						  
	ALU ALU (.ALUSel(EPipelineReg_P_ALUSel), .A(MUXALUA_P_Out), .B(MUXALUB_P_Out), .C(ALU_P_C));
	
	MD MD (.MDSel(EPipelineReg_P_MDSel), .Start(EPipelineReg_P_MDStart), .Reset(reset), .Clk(clk), .A(EForward_P_RD1),
			 .B(EForward_P_RD2), .Busy(MD_P_Busy), .HI(MD_P_HI), .LO(MD_P_LO));
	
	PipelineReg MPipelineReg (.En(1'b1), .Reset(reset), .Clk(clk), .Instr_in(EPipelineReg_P_Instr),
									  .PC4_in(EPipelineReg_P_PC4), .RD1_in(EForward_P_RD1),
									  .RD2_in(EForward_P_RD2), .Ext_in(EPipelineReg_P_Ext),
									  .AO_in(ALU_P_C), .HI_in(MD_P_HI), .LO_in(MD_P_LO),.DMRD_in(), 
									  .Instr(MPipelineReg_P_Instr), .PC4(MPipelineReg_P_PC4),
									  .RD1(MPipelineReg_P_RD1), .RD2(MPipelineReg_P_RD2),
									  .Ext(MPipelineReg_P_Ext), .AO(MPipelineReg_P_AO), .HI(MPipelineReg_P_HI),
									  .LO(MPipelineReg_P_LO), .DMRD(MPipelineReg_P_DMRD),
									  .Op(MPipelineReg_P_Op), .Rs(MPipelineReg_P_Rs),
									  .Rt(MPipelineReg_P_Rt),.Rd(MPipelineReg_P_Rd), .Shamt(MPipelineReg_P_Shamt),
									  .Funct(MPipelineReg_P_Funct), .Imm(MPipelineReg_P_Imm),
									  .InstrIndex(MPipelineReg_P_InstrIndex), .NPCSel(MPipelineReg_P_NPCSel), 
									  .EXTSel(MPipelineReg_P_EXTSel), .ALUSel(MPipelineReg_P_ALUSel), .MDSel(MPipelineReg_P_MDSel),
									  .MDStart(MPipelineReg_P_MDStart),
									  .DMWE(MPipelineReg_P_DMWE), .DMSizeSel(MPipelineReg_P_DMSizeSel),
									  .DMExtSel(MPipelineReg_P_DMExtSel), .GRFWE(MPipelineReg_P_GRFWE),
									  .MUXPCNPCSel(MPipelineReg_P_MUXPCNPCSel), .MUXALUASel(MPipelineReg_P_MUXALUASel),
									  .MUXALUBSel(MPipelineReg_P_MUXALUBSel));
									  
	MForward MForward (.MPipelineRegRD1(MPipelineReg_P_RD1), .MPipelineRegRD2(MPipelineReg_P_RD2),
							 .M_Rs(MPipelineReg_P_Rs), .M_Rt(MPipelineReg_P_Rt), 
							 .W_GRFWE(WWriteInf_P_GRFWE), .W_Addr(WWriteInf_P_Addr), .W_WD(WWriteInf_P_WD),
							 .W_Tnew(WWriteInf_P_Tnew), .RD1(MForward_P_RD1), .RD2(MForward_P_RD2));
							 
	DM DM (.DMSizeSel(MPipelineReg_P_DMSizeSel), .DMExtSel(MPipelineReg_P_DMExtSel), .Reset(reset), .Clk(clk),
			 .WE(MPipelineReg_P_DMWE), .Addr(MPipelineReg_P_AO), .WD(MForward_P_RD2),
			 .PC4(MPipelineReg_P_PC4), .RD(DM_P_RD));
			 
	PipelineReg WPipelineReg (.En(1'b1), .Reset(reset), .Clk(clk), .Instr_in(MPipelineReg_P_Instr),
									  .PC4_in(MPipelineReg_P_PC4), .RD1_in(MForward_P_RD1),
									  .RD2_in(MForward_P_RD2), .Ext_in(MPipelineReg_P_Ext),
									  .AO_in(MPipelineReg_P_AO), .HI_in(MPipelineReg_P_HI), .LO_in(MPipelineReg_P_LO),
									  .DMRD_in(DM_P_RD), 
									  .Instr(WPipelineReg_P_Instr), .PC4(WPipelineReg_P_PC4),
									  .RD1(WPipelineReg_P_RD1), .RD2(WPipelineReg_P_RD2),
									  .Ext(WPipelineReg_P_Ext), .AO(WPipelineReg_P_AO), .HI(WPipelineReg_P_HI), .LO(WPipelineReg_P_LO),
									  .DMRD(WPipelineReg_P_DMRD), .Op(WPipelineReg_P_Op), .Rs(WPipelineReg_P_Rs),
									  .Rt(WPipelineReg_P_Rt),.Rd(WPipelineReg_P_Rd), .Shamt(WPipelineReg_P_Shamt),
									  .Funct(WPipelineReg_P_Funct), .Imm(WPipelineReg_P_Imm),
									  .InstrIndex(WPipelineReg_P_InstrIndex), .NPCSel(WPipelineReg_P_NPCSel), 
									  .EXTSel(WPipelineReg_P_EXTSel), .ALUSel(WPipelineReg_P_ALUSel), .MDSel(WPipelineReg_P_MDSel), .MDStart(WPipelineReg_P_MDStart),
									  .DMWE(WPipelineReg_P_DMWE), .DMSizeSel(WPipelineReg_P_DMSizeSel), .DMExtSel(WPipelineReg_P_DMExtSel), 
									  .GRFWE(WPipelineReg_P_GRFWE),
									  .MUXPCNPCSel(WPipelineReg_P_MUXPCNPCSel), .MUXALUASel(WPipelineReg_P_MUXALUASel),
									  .MUXALUBSel(WPipelineReg_P_MUXALUBSel));		
	
	////WriteInfGenerator and WriteInf
	
	//WriteInfGenerator
	WriteInfGenerator WriteInfGenerator (.Op(DPipelineReg_P_Op), .Funct(DPipelineReg_P_Funct), .Rs(DPipelineReg_P_Rs),
													 .Rt(DPipelineReg_P_Rt), .Rd(DPipelineReg_P_Rd), .WD(WriteInfGenerator_P_WD), 
													 .Addr(WriteInfGenerator_P_Addr), .Tnew(WriteInfGenerator_P_Tnew),
													 .WDSource(WriteInfGenerator_P_WDSource), .GRFWE(WriteInfGenerator_P_GRFWE),
													 .TuseRs(WriteInfGenerator_P_TuseRs), .TuseRt(WriteInfGenerator_P_TuseRt),
													 .MDInstr(WriteInfGenerator_P_MDInstr));
													 
	//WriteInfs
	WriteInf EWriteInf (.En(1'b1), .Reset(reset | StallActor_P_EWriteInfReset), .Clk(clk), .WDSource_in(WriteInfGenerator_P_WDSource),
							  .WD_in(WriteInfGenerator_P_WD), .Addr_in(WriteInfGenerator_P_Addr), .Tnew_in(WriteInfGenerator_P_Tnew),
							  .GRFWE_in(WriteInfGenerator_P_GRFWE), .RD1(DForward_P_RD1), .RD2(DForward_P_RD2),
							  .PC4(DPipelineReg_P_PC4), .Ext(EXT_P_Ext), .AO(), .HI(), .LO(), .DMRD(), .WD(EWriteInf_P_WD),
							  .Addr(EWriteInf_P_Addr), .Tnew(EWriteInf_P_Tnew), .GRFWE(EWriteInf_P_GRFWE),
							  .WDSource(EWriteInf_P_WDSource));
							  
	WriteInf MWriteInf (.En(1'b1), .Reset(reset), .Clk(clk), .WDSource_in(EWriteInf_P_WDSource),
							  .WD_in(EWriteInf_P_WD), .Addr_in(EWriteInf_P_Addr), .Tnew_in(EWriteInf_P_Tnew),
							  .GRFWE_in(EWriteInf_P_GRFWE), .RD1(EForward_P_RD1), .RD2(EForward_P_RD2),
							  .PC4(), .Ext(), .AO(ALU_P_C), .HI(MD_P_HI), .LO(MD_P_LO), .DMRD(), .WD(MWriteInf_P_WD),
							  .Addr(MWriteInf_P_Addr), .Tnew(MWriteInf_P_Tnew), .GRFWE(MWriteInf_P_GRFWE),
							  .WDSource(MWriteInf_P_WDSource));
							  
	WriteInf WWriteInf (.En(1'b1), .Reset(reset), .Clk(clk), .WDSource_in(MWriteInf_P_WDSource),
							  .WD_in(MWriteInf_P_WD), .Addr_in(MWriteInf_P_Addr), .Tnew_in(MWriteInf_P_Tnew),
							  .GRFWE_in(MWriteInf_P_GRFWE), .RD1(MForward_P_RD1), .RD2(MForward_P_RD2),
							  .PC4(), .Ext(), .AO(), .HI(), .LO(), .DMRD(DM_P_RD), .WD(WWriteInf_P_WD),
							  .Addr(WWriteInf_P_Addr), .Tnew(WWriteInf_P_Tnew), .GRFWE(WWriteInf_P_GRFWE),
							  .WDSource(WWriteInf_P_WDSource));
	
	//StallCTRL and StallActor
	StallCTRL StallCTRL (.D_TuseRs(WriteInfGenerator_P_TuseRs), .D_TuseRt(WriteInfGenerator_P_TuseRt),
								.D_Rs(DPipelineReg_P_Rs), .D_Rt(DPipelineReg_P_Rt), .E_GRFWE(EWriteInf_P_GRFWE),
								.E_Addr(EWriteInf_P_Addr), .E_Tnew(EWriteInf_P_Tnew), .M_GRFWE(MWriteInf_P_GRFWE),
								.M_Addr(MWriteInf_P_Addr), .M_Tnew(MWriteInf_P_Tnew), .Busy(MD_P_Busy), 
								.D_MDInstr(WriteInfGenerator_P_MDInstr), .StallSignal(StallCTRL_P_StallSignal));
								
	StallActor StallActor (.StallSignal(StallCTRL_P_StallSignal), .PCEn(StallActor_P_PCEn), .DPipelineRegEn(StallActor_P_DPipelineRegEn),
								  .EWriteInfReset(StallActor_P_EWriteInfReset), .EPipelineRegReset(StallActor_P_EPipelineRegReset));
	
	////////////////////////////////
	//instantiation of modules end
	////////////////////////////////
	
endmodule
