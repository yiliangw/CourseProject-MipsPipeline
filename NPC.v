`timescale 1ns / 1ps
`include "head.v"

module NPC(
	input [`WIDTH_NPCSEL:1] NPCSel,
    input Zero,
    input [31:0] PC4,
    input [31:0] BranchAddr,
    input [25:0] InstrIndex,
	 input [31:0] RD1,
    output reg [31:0] NPC
    );
	 
	wire [31:0] PC = PC4 - 32'd4;

	always @(*)
	begin
		case (NPCSel)
			`NPCSEL_BEQ: 
			begin
				if (Zero == 1)
				begin
					NPC = PC4 + BranchAddr;
				end
				else
				begin
					NPC = PC4 + 32'd4;
				end
			end
			`NPCSEL_BNE: 
			begin
				if (Zero == 0)
				begin
					NPC = PC4 + BranchAddr;
				end
				else
				begin
					NPC = PC4 + 32'd4;
				end
			end
			`NPCSEL_BLEZ: 
			begin
				if ($signed(RD1) <= $signed(32'd0))
				begin
					NPC = PC4 + BranchAddr;
				end
				else
				begin
					NPC = PC4 + 32'd4;
				end
			end
			`NPCSEL_BLTZ:
			begin
				if ($signed(RD1) < $signed(32'd0))
				begin
					NPC = PC4 + BranchAddr;
				end
				else
				begin
					NPC = PC4 + 32'd4;
				end
			end
			`NPCSEL_BGEZ: 
			begin
				if ($signed(RD1) >= $signed(32'd0))
				begin
					NPC = PC4 + BranchAddr;
				end
				else
				begin
					NPC = PC4 + 32'd4;
				end
			end
			`NPCSEL_BGTZ: 
			begin
				if ($signed(RD1) > $signed(32'd0))
				begin
					NPC = PC4 + BranchAddr;
				end
				else
				begin
					NPC = PC4 + 32'd4;
				end
			end		
			`NPCSEL_INSTRINDEX: 
			begin
				NPC = {PC[31:28], InstrIndex, 2'b00};
			end
			`NPCSEL_RD1: 
			begin
				NPC = RD1;
			end
			default:
			begin
				NPC = 32'h00003000;
			end
		endcase
	end				

endmodule
