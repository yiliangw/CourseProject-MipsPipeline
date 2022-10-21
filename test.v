`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:48 12/10/2019 
// Design Name: 
// Module Name:    test 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module test(
    input [31:0] A,
    input [31:0] B,
    output reg [31:0] C,
    output reg [31:0] D
    );
	
	always @(*)
	begin
		{C, D} = A * B;
	end

endmodule
