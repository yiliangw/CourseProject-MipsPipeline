`timescale 1ns / 1ps
`include "head.v"

module CTRL(
   input [5:0] Op,
   input [5:0] Funct,
	input [4:0] Rt,
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
	output [`WIDTH_MUXALUASEL:1] MUXALUASel,
	output [`WIDTH_MUXALUBSEL:1] MUXALUBSel
   );

	////Instruction line definitons
	wire Iadd = ({Op, Funct} == {`ADD_OP, `ADD_FUNCT});
	wire Iaddu = ({Op, Funct} == {`ADDU_OP, `ADDU_FUNCT});
	wire Iaddi = (Op == `ADDI_OP);
	wire Iaddiu = (Op == `ADDIU_OP);
	wire Iand = ({Op, Funct} == {`AND_OP, `AND_FUNCT});
	wire Iandi = (Op == `ANDI_OP);
	wire Isub = ({Op, Funct} == {`SUB_OP, `SUB_FUNCT});
	wire Isubu = ({Op, Funct} == {`SUBU_OP, `SUBU_FUNCT});
	wire Ior = ({Op, Funct} == {`OR_OP, `OR_FUNCT});
	wire Iori = (Op == `ORI_OP);
	wire Ixor = ({Op, Funct} == {`XOR_OP, `XOR_FUNCT});
	wire Ixori = (Op == `XORI_OP);
	wire Inor = ({Op, Funct} == {`NOR_OP, `NOR_FUNCT});
	wire Ilui = (Op == `LUI_OP);
	wire Isll = ({Op, Funct} == {`SLL_OP, `SLL_FUNCT});
	wire Isllv = ({Op, Funct} == {`SLLV_OP, `SLLV_FUNCT});
	wire Isrl = ({Op, Funct} == {`SRL_OP, `SRL_FUNCT});
	wire Isrlv = ({Op, Funct} == {`SRLV_OP, `SRLV_FUNCT});
	wire Isra = ({Op, Funct} == {`SRA_OP, `SRA_FUNCT});
	wire Israv = ({Op, Funct} == {`SRAV_OP, `SRAV_FUNCT});
	wire Ilb = (Op == `LB_OP);	
	wire Ilbu = (Op == `LBU_OP);
	wire Ilh = (Op == `LH_OP);
	wire Ilhu = (Op == `LHU_OP);
	wire Ilw = (Op == `LW_OP);
	wire Isb = (Op == `SB_OP);
	wire Ish = (Op == `SH_OP);
	wire Isw = (Op == `SW_OP);
	wire Islt = ({Op, Funct} == {`SLT_OP, `SLT_FUNCT});
	wire Isltu = ({Op, Funct} == {`SLTU_OP, `SLTU_FUNCT});
	wire Islti = (Op == `SLTI_OP);
	wire Isltiu = (Op == `SLTIU_OP);
	wire Ibeq = (Op == `BEQ_OP);
	wire Ibne = (Op == `BNE_OP);
	wire Iblez = (Op == `BLEZ_OP);
	wire Ibltz = ({Op, Rt} == {`BLTZ_OP, `BLTZ_RT});
	wire Ibgez = ({Op, Rt} == {`BGEZ_OP, `BGEZ_RT});
	wire Ibgtz = (Op == `BGTZ_OP);
	wire Ij = (Op == `J_OP);
	wire Ijal = (Op == `JAL_OP);
	wire Ijalr = ({Op, Funct} == {`JALR_OP, `JALR_FUNCT});
	wire Ijr = ({Op, Funct} == {`JR_OP, `JR_FUNCT});
	wire Imult = ({Op, Funct} == {`MULT_OP, `MULT_FUNCT});
	wire Imultu = ({Op, Funct} == {`MULTU_OP, `MULTU_FUNCT});
	wire Idiv = ({Op, Funct} == {`DIV_OP, `DIV_FUNCT});
	wire Idivu = ({Op, Funct} == {`DIVU_OP, `DIVU_FUNCT});
	wire Imfhi = ({Op, Funct} == {`MFHI_OP, `MFHI_FUNCT});
	wire Imflo = ({Op, Funct} == {`MFLO_OP, `MFLO_FUNCT});
	wire Imthi = ({Op, Funct} == {`MTHI_OP, `MTHI_FUNCT});
	wire Imtlo = ({Op, Funct} == {`MTLO_OP, `MTLO_FUNCT});

	
	////

	assign NPCSel = Ibeq? 			`NPCSEL_BEQ:
						 Ibgez?			`NPCSEL_BGEZ:
						 Ibgtz?			`NPCSEL_BGTZ:
						 Iblez?			`NPCSEL_BLEZ:
						 Ibltz?			`NPCSEL_BLTZ:
						 Ibne?			`NPCSEL_BNE:
						 Ij|Ijal? 		`NPCSEL_INSTRINDEX:
						 Ijalr|Ijr?		`NPCSEL_RD1:
											0;
											
	assign GRFWE = Iadd|Iaddu|Iaddi|Iaddiu|Iand|Iandi|Isub|Isubu|
						Ior|Iori|Ixor|Ixori|Inor|Ilui|Isll|Isllv|Isrl|
						Isrlv|Isra|Israv|Ilb|Ilbu|Ilh|Ilhu|Ilw|Islt|Isltu|
						Islti|Isltiu|Ijal|Ijalr|Imfhi|Imflo?		1:0;
						 
																				  
	assign EXTSel = Iandi|Iori|Ixori?									`ZERO_EXT:
						 Iaddi|Iaddiu|Ilb|Ilbu|Ilh|Ilhu|Ilw|Isb|Ish|
						 Isw|Islti|Isltiu? 									`SIGN_EXT:
						 Ibeq|Ibne|Iblez|Ibltz|Ibgez|Ibgtz?				`SIGN_EXT_SLL_2:
						 Ilui? 													`CAT_ZERO:
																					0;

	assign ALUSel = Iadd|Iaddu|Iaddi|Iaddiu|
						 Ilb|Ilbu|Ilh|Ilhu|Ilw|
						 Isb|Ish|Isw?					`ALUSEL_ADD:
						 Iand|Iandi?					`ALUSEL_AND:
						 Inor?							`ALUSEL_NOR:
						 Ior|Iori?						`ALUSEL_OR:
						 Isll|Isllv?					`ALUSEL_SLL:
						 Islt|Islti?					`ALUSEL_SLT:
						 Isltu|Isltiu?					`ALUSEL_SLTU:
						 Isra|Israv?					`ALUSEL_SRA:
						 Isrl|Isrlv?					`ALUSEL_SRL:
						 Isub|Isubu?					`ALUSEL_SUB:
						 Ixor|Ixori?					`ALUSEL_XOR:
															0;
															
	
	assign MDStart = Imult|Imultu|Idiv|Idivu|Imthi|Imtlo?	1:0;
	
	
	assign MDSel = Imult?	`MDSEL_MULT:
						Imultu?	`MDSEL_MULTU:
						Idiv?		`MDSEL_DIV:
						Idivu?	`MDSEL_DIVU:
						Imthi?	`MDSEL_MTHI:
						Imtlo?	`MDSEL_MTLO:
									0;
						
	
	assign DMWE = Isb|Ish|Isw? 	1'b1:
											1'b0;
											
	
	assign DMSizeSel = Ilb|Ilbu|Isb?	 `DMSIZESEL_BYTE:
							 Ilh|Ilhu|Ish?	 `DMSIZESEL_HALF:
							 Ilw|Isw?		 `DMSIZESEL_WORD:
												 0;
												 
	assign DMExtSel = Ilb|Ilh?		`DMEXTSEL_SIGN:
							Ilbu|Ilhu?	`DMEXTSEL_UNSIGN:
											0;
											
	assign MUXPCNPCSel = Ibeq|Ibne|Iblez|Ibltz|Ibgez|
								Ibgtz|Ij|Ijal|Ijalr|Ijr? 		1:0;

	assign MUXALUASel = Iadd|Iaddu|Iaddi|Iaddiu|Iand|Iandi|Isub|
							  Isubu|Ior|Iori|Ixor|Ixori|Inor|Isllv|
							  Isrlv|Israv|Ilb|Ilbu|Ilh|Ilhu|Ilw|Isb|
							  Ish|Isw|Islt|Isltu|Islti|Isltiu?					0:
							  Isll|Isrl|Isra?											1:
																							0;
																							
	assign MUXALUBSel = Iadd|Iaddu|Iand|Isub|Isubu|Ior|Ixor|
							  Inor|Isllv|Isrlv|Israv|Islt|Isltu|Isll|
							  Isrl|Isra?												0:
							  Iaddi|Iaddiu|Iandi|Iori|Ixori|Ilb|
							  Ilbu|Ilh|Ilhu|Ilw|Isb|Ish|Isw|Islti|Isltiu?	1:
																							0;
					

endmodule
