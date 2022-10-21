//instructions
`define ADD_OP				6'b000000
`define ADD_FUNCT			6'b100000
`define ADDU_OP 			6'b000000
`define ADDU_FUNCT 		6'b100001
`define ADDI_OP			6'b001000
`define ADDIU_OP			6'b001001
`define AND_OP				6'b000000
`define AND_FUNCT			6'b100100
`define ANDI_OP			6'b001100
`define SUB_OP				6'b000000
`define SUB_FUNCT			6'b100010
`define SUBU_OP 			6'b000000
`define SUBU_FUNCT 		6'b100011
`define OR_OP				6'b000000
`define OR_FUNCT			6'b100101
`define ORI_OP 			6'b001101
`define XOR_OP				6'b000000
`define XOR_FUNCT			6'b100110
`define XORI_OP			6'b001110
`define NOR_OP				6'b000000
`define NOR_FUNCT			6'b100111
`define LUI_OP 			6'b001111
`define SLL_OP				6'b000000
`define SLL_FUNCT			6'b000000
`define SLLV_OP			6'b000000
`define SLLV_FUNCT		6'b000100
`define SRL_OP				6'b000000
`define SRL_FUNCT			6'b000010
`define SRLV_OP			6'b000000
`define SRLV_FUNCT		6'b000110
`define SRA_OP				6'b000000
`define SRA_FUNCT			6'b000011
`define SRAV_OP			6'b000000
`define SRAV_FUNCT		6'b000111

`define LB_OP				6'b100000
`define LBU_OP				6'b100100
`define LH_OP				6'b100001
`define LHU_OP				6'b100101
`define LW_OP 				6'b100011

`define SB_OP				6'b101000
`define SH_OP				6'b101001
`define SW_OP 				6'b101011

`define SLT_OP				6'b000000
`define SLT_FUNCT			6'b101010
`define SLTU_OP			6'b000000
`define SLTU_FUNCT		6'b101011
`define SLTI_OP			6'b001010
`define SLTIU_OP			6'b001011

`define BEQ_OP 			6'b000100
`define BNE_OP				6'b000101
`define BLEZ_OP			6'b000110
`define BLTZ_OP			6'b000001
`define BLTZ_RT			5'b00000
`define BGEZ_OP			6'b000001
`define BGEZ_RT			5'b00001
`define BGTZ_OP			6'b000111

`define J_OP				6'b000010
`define JAL_OP 			6'b000011
`define JALR_OP			6'b000000
`define JALR_FUNCT		6'b001001
`define JR_OP 				6'b000000
`define JR_FUNCT 			6'b001000
`define NOP_OP 			6'b000000
`define NOP_FUNCT 		6'b000000

`define MULT_OP			6'b000000
`define MULT_FUNCT		6'b011000
`define MULTU_OP			6'b000000
`define MULTU_FUNCT		6'b011001
`define DIV_OP				6'b000000
`define DIV_FUNCT			6'b011010
`define DIVU_OP			6'b000000
`define DIVU_FUNCT		6'b011011
`define MFHI_OP			6'b000000
`define MFHI_FUNCT		6'b010000
`define MFLO_OP			6'b000000
`define MFLO_FUNCT		6'b010010
`define MTHI_OP			6'b000000
`define MTHI_FUNCT		6'b010001
`define MTLO_OP			6'b000000
`define MTLO_FUNCT		6'b010011

//basic modules

//IM
`define INSTRMEM_SIZE {1, 14'b0}

//EXT
`define WIDTH_EXTSEL		3
`define ZERO_EXT 			3'b000
`define SIGN_EXT 			3'b001
`define SIGN_EXT_SLL_2	3'b010
`define CAT_ZERO 			3'b011

//NPC
`define WIDTH_NPCSEL			4
`define NPCSEL_BEQ 			4'b0000
`define NPCSEL_BNE			4'b0001
`define NPCSEL_BLEZ 			4'b0010
`define NPCSEL_BLTZ			4'b0011
`define NPCSEL_BGEZ			4'b0100
`define NPCSEL_BGTZ			4'b0101
`define NPCSEL_INSTRINDEX	4'b0110
`define NPCSEL_RD1			4'b0111

//ALU
`define WIDTH_ALUSEL		4
`define ALUSEL_ADD  		4'b0000
`define ALUSEL_AND		4'b0001
`define ALUSEL_SUB  		4'b0010
`define ALUSEL_OR	 		4'b0011
`define ALUSEL_XOR		4'b0100
`define ALUSEL_NOR		4'b0101
`define ALUSEL_SLL		4'b0110
`define ALUSEL_SRL		4'b0111
`define ALUSEL_SRA		4'b1000
`define ALUSEL_SLT		4'b1001
`define ALUSEL_SLTU		4'b1010

//MD
`define WIDTH_MDSEL		3
`define MDSEL_MULT		3'b000
`define MDSEL_MULTU		3'b001
`define MDSEL_DIV			3'b010
`define MDSEL_DIVU		3'b011
`define MDSEL_MTHI		3'b100
`define MDSEL_MTLO		3'b101

//DM
`define WIDTH_DMSIZESEL 2
`define WIDTH_DMEXTSEL	1
`define DATAMEM_SIZE  	{1, 14'b0}

`define DMSIZESEL_WORD	2'b00
`define DMSIZESEL_HALF	2'b01
`define DMSIZESEL_BYTE	2'b10

`define DMEXTSEL_SIGN	1'b0
`define DMEXTSEL_UNSIGN	1'b1

//MUXs
`define WIDTH_MUXPCNPCSEL	2
`define WIDTH_MUXALUASEL	2
`define WIDTH_MUXALUBSEL	2

//MD
`define WIDTH_MDSEL		3
`define MDSEL_MULT		3'b000
`define MDSEL_MULTU		3'b001
`define MDSEL_DIV			3'b010
`define MDSEL_DIVU		3'b011
`define MDSEL_MTHI		3'b100
`define MDSEL_MTLO		3'b101


//hazard modules
`define WIDTH_WDSOURCE		3
`define WDSOURCE_NONE		3'b000
`define WDSOURCE_ALUC		3'b001
`define WDSOURCE_DMRD		3'b010
`define WDSOURCE_EXTEXT		3'b011
`define WDSOURCE_PC4			3'b100
`define WDSOURCE_HI			3'b101
`define WDSOURCE_LO			3'b110
