`timescale 1ns / 1ps
`include "head.v"

module WriteInfGenerator(
    input [5:0] Op,
    input [5:0] Funct,
    input [4:0] Rs,
    input [4:0] Rt,
    input [4:0] Rd,
	 output [31:0] WD,
    output [4:0] Addr,
    output [1:0] Tnew,
	 output [`WIDTH_WDSOURCE:1] WDSource,
    output GRFWE,
    output [1:0] TuseRs,
    output [1:0] TuseRt,
	 output MDInstr
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
	wire Imultu = ({Op, Funct} == {`MULTU_OP, `MULT_FUNCT});
	wire Idiv = ({Op, Funct} == {`DIV_OP, `DIV_FUNCT});
	wire Idivu = ({Op, Funct} == {`DIVU_OP, `DIVU_FUNCT});
	wire Imfhi = ({Op, Funct} == {`MFHI_OP, `MFHI_FUNCT});
	wire Imflo = ({Op, Funct} == {`MFLO_OP, `MFLO_FUNCT});
	wire Imthi = ({Op, Funct} == {`MTHI_OP, `MTHI_FUNCT});
	wire Imtlo = ({Op, Funct} == {`MTLO_OP, `MTLO_FUNCT}); 
	
	////
			
	assign WD = 32'd0;
	
	assign Addr = Iadd|Iaddu|Iand|Isub|Isubu|Ior|Ixor|Inor|Isll|
					  Isllv|Isrl|Isrlv|Isra|Israv|Islt|Isltu|Ijalr|
					  Imfhi|Imflo?													Rd:
					  Iaddi|Iaddiu|Iandi|Iori|Ixori|Ilui|Ilb|Ilbu|
					  Ilh|Ilhu|Ilw|Islti|Isltiu?								Rt:
					  Ijal?															5'b11111:
																						5'b00000;
														
	assign Tnew = Ilui|Ijal|Ijalr?											1:
					  Iadd|Iaddu|Iaddi|Iaddiu|Iand|Iandi|Isub|Isubu|
					  Ior|Iori|Ixor|Ixori|Inor|Isll|Isllv|Isrl|Isrlv|
					  Isra|Israv|Islt|Isltu|Islti|Isltiu|Imfhi|Imflo?	2:
					  Ilb|Ilbu|Ilh|Ilhu|Ilw?									3:
																						0;
	 
	assign WDSource = Iadd|Iaddu|Iaddi|Iaddiu|Iand|Iandi|Isub|
							Isubu|Ior|Iori|Ixor|Ixori|Inor|Isll|Isllv|
							Isrl|Isrlv|Isra|Israv|Islt|Isltu|Islti|Isltiu?	`WDSOURCE_ALUC:
							Ilb|Ilbu|Ilh|Ilhu|Ilw?									`WDSOURCE_DMRD:
							Ilui?															`WDSOURCE_EXTEXT:
							Imfhi?														`WDSOURCE_HI:
							Imflo?														`WDSOURCE_LO:
							Ijal|Ijalr?													`WDSOURCE_PC4:
																							0;
	
	assign GRFWE = (Addr == 5'b00000)? 								0:
						Iadd|Iaddu|Iaddi|Iaddiu|Iand|Iandi|Isub|
						Isubu|Ior|Iori|Ixor|Ixori|Inor|Ilui|Isll|
						Isllv|Isrl|Isrlv|Isra|Israv|Ilb|Ilbu|Ilh|
						Ilhu|Ilw|Islt|Isltu|Islti|Isltiu|Ijal|
						Ijalr|Imfhi|Imflo?								1:
																				0;
																				
														
	
	assign TuseRs = Ibeq|Ibne|Iblez|Ibltz|Ibgez|Ibgtz|Ijalr|Ijr?		0:
						 Iadd|Iaddu|Iaddi|Iaddiu|Iand|Iandi|Isub|Isubu|
						 Ior|Iori|Ixor|Ixori|Inor|Isllv|Isrlv|Israv|
						 Ilb|Ilbu|Ilh|Ilhu|Ilw|Isb|Ish|Isw|Islt|Isltu|
						 Islti|Isltiu|Imult|Imultu|Idiv|Idivu|Imthi|Imtlo?	1:
																							3;
																							
																		
	assign TuseRt = Ibeq|Ibne?														0:
						 Iadd|Iaddu|Iand|Isub|Isubu|Ior|Ixor|Inor|Isll|
						 Isllv|Isrl|Isrlv|Isra|Israv|Islt|Isltu|Imult|
						 Imultu|Idiv|Idivu?											1:
						 Isb|Ish|Isw?													2:
																							3;
	
	assign MDInstr = Imult|Imultu|Idiv|Idivu|Imfhi|Imflo|Imthi|Imtlo;
	
endmodule
