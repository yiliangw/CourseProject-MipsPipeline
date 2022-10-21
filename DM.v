`timescale 1ns / 1ps
`include "head.v"

module DM(
	 input [`WIDTH_DMSIZESEL:1] DMSizeSel,
	 input [`WIDTH_DMEXTSEL:1] DMExtSel,
    input Reset,
    input Clk,
	 input WE,
    input [31:0] Addr,
    input [31:0] WD,
	 input [31:0] PC4,
    output reg [31:0] RD
    );
	 
	wire [31:0] PC = PC4 - 32'd4;
	wire [`DATAMEM_SIZE-1:0] RealAddr = (Addr>>2);
	reg [31:0] DataMem[`DATAMEM_SIZE - 1:0];
	
	wire [31:0] OriginalWord = DataMem[RealAddr];
	reg [31:0] WriteData;
	
/////read
	always @(*)
	begin
		case (DMSizeSel)
		`DMSIZESEL_WORD: begin
									RD = OriginalWord;
							  end
		`DMSIZESEL_HALF: begin: readHalf
									reg [15:0] temp;
									case (Addr[1])
										1'b0: temp = OriginalWord[15:0];
										1'b1: temp = OriginalWord[31:16];
										default: temp = 16'b0;
									endcase
									case (DMExtSel)
										`DMEXTSEL_SIGN: 	RD = {{16{temp[15]}}, temp};
										`DMEXTSEL_UNSIGN: RD = {{16{1'b0}}, temp};
										default: 			RD = 32'b0;
									endcase
								end
		`DMSIZESEL_BYTE: begin: readByte
									reg [7:0] temp;
									case (Addr[1:0])
										2'b00: temp = OriginalWord[7:0];
										2'b01: temp = OriginalWord[15:8];
										2'b10: temp = OriginalWord[23:16];
										2'b11: temp = OriginalWord[31:24];
										default: temp = 8'b0;
									endcase
									case (DMExtSel)
										`DMEXTSEL_SIGN: 	RD = {{24{temp[7]}}, temp};
										`DMEXTSEL_UNSIGN:	RD = {{24{1'b0}}, temp};
										default: 			RD = 32'b0;
									endcase
								end
		endcase
	end

//////

//////write generate

	always @(*)
	begin
		case (DMSizeSel)
			`DMSIZESEL_WORD: begin
									WriteData = WD;
								  end
			`DMSIZESEL_HALF: begin
									case (Addr[1])
										1'b0: WriteData = {OriginalWord[31:16], WD[15:0]};
										1'b1: WriteData = {WD[15:0], OriginalWord[15:0]};
										default: WriteData = 32'b0;
									endcase
								  end
			`DMSIZESEL_BYTE: begin
									case (Addr[1:0])
										2'b00: WriteData = {OriginalWord[31:8], WD[7:0]};
										2'b01: WriteData = {OriginalWord[31:16], WD[7:0], OriginalWord[7:0]};
										2'b10: WriteData = {OriginalWord[31:24], WD[7:0], OriginalWord[15:0]};
										2'b11: WriteData = {WD[7:0], OriginalWord[23:0]};
										default: WriteData = 32'b0;
									endcase
								  end
		endcase
	end
			
		

//////

//////write			

	always @(posedge Clk)
	begin
		if (Reset)
		begin: DataMem_init
			reg [31:0] i;
			for (i=0; i<`DATAMEM_SIZE; i=i+1)
				begin
					DataMem[i]<=0;
				end
		end
		else
		begin
			if (WE)
			begin
				DataMem[RealAddr] <= WriteData;
				$display ("%d@%h: *%h <= %h",$time, PC, {Addr[31:2], 2'b00}, WriteData);
			end
		end
	end

endmodule
