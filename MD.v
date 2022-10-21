`timescale 1ns / 1ps
`include "head.v"

module MD(
	input [`WIDTH_MDSEL:1] MDSel,
	input Start,
	input Reset,
	input Clk,
	input [31:0] A,
	input [31:0] B,
	output Busy,
	output reg [31:0] HI,
	output reg [31:0] LO
    );
	
	reg [4:0] state;
	reg [`WIDTH_MDSEL:1] MDSelReg;
	reg processing;
	
	assign Busy = processing | (Start & ((MDSel==`MDSEL_MULT)|(MDSel==`MDSEL_MULTU)
													|(MDSel==`MDSEL_DIV)|(MDSel==`MDSEL_DIVU)));

	////processing and state
	always @(posedge Clk)
	begin
		if (Reset)
		begin
			{processing, state} <= 0;
		end
		else
		case (state)
			0: begin
					if (Start & ((MDSel==`MDSEL_MULT) | (MDSel==`MDSEL_MULTU)
					| (MDSel==`MDSEL_DIV) | (MDSel==`MDSEL_DIVU)))
					begin
						state <= 1;
						processing <= 1;
					end
					else
					begin
						state <= 0;
						processing <= 0;
					end
				end
			1: begin
					state <= 2;
					processing <= 1;
				end
			2: begin
					state <= 3;
					processing <= 1;
				end
			3: begin
					state <= 4;
					processing <= 1;
				end
			4: begin	
					state <= 5;
					processing <= 1;
				end
			5: begin
					if ((MDSelReg == `MDSEL_MULT) | (MDSelReg == `MDSEL_MULTU))
					begin
						state <= 0;
						processing <= 0;
					end
					else if ((MDSelReg == `MDSEL_DIV) | (MDSelReg == `MDSEL_DIVU))
					begin
						state <= 6;
						processing <= 1;
					end
					else
					begin
						state <= 11;
						processing <= 1;
					end
				end
			6: begin
					state <= 7;
					processing <= 1;
				end
			7: begin
					state <= 8;
					processing <= 1;
				end
			8: begin
					state <= 9;
					processing <= 1;
				end
			9: begin
					state <= 10;
					processing <= 1;
				end
			10: begin
					if ((MDSelReg == `MDSEL_DIV) | (MDSelReg == `MDSEL_DIVU))
					begin
						state <= 0;
						processing <= 0;
					end
					else
					begin
						state <= 11;
						processing <= 1;
					end
				 end
			default: begin
							state <= 11;
							processing <= 1;
						end
		endcase
	end
	////
	
	////MDSelReg
	always @(posedge Clk)
	begin
		if (Reset)
			MDSelReg <= 0;
		else if (Start)
			MDSelReg <= MDSel;
		else
			MDSelReg <= MDSelReg;
	end
	
	////
	
	////HI, LO;
	always @(posedge Clk)
	begin
		if (Reset)
			begin
				{HI, LO} <= 0;
			end
		else if (Start)
			begin
				case (MDSel)
					`MDSEL_MULT: begin
										{HI, LO} <= $signed(A) * $signed(B);
									 end
					`MDSEL_MULTU: begin
										{HI, LO} <= A * B;
									  end
					`MDSEL_DIV:	begin
										HI <= $signed(A) % $signed(B);
										LO <= $signed(A) / $signed(B);
									end
					`MDSEL_DIVU: begin
										HI <= $unsigned(A) % $unsigned(B);
										LO <= $unsigned(A) / $unsigned(B);
									end
					`MDSEL_MTHI: begin
										{HI, LO} <= {A, LO};
									 end
					`MDSEL_MTLO: begin
										{HI, LO} <= {HI, A};
									 end
					default:	begin
									{HI, LO} <= {HI, LO};
								end
				endcase
			end
		else
			begin
				{HI, LO} <= {HI, LO};
			end
				
	end

	
	////
				
					


endmodule
