`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:55:04 12/22/2019 
// Design Name: 
// Module Name:    Control 
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
module Control(
	input CLK, Stall,
   input [5:0]funct, opcode,  //define function field and opcode in 32bit instruction as input
	output reg Write_EN, MEMWrite, ExtOP,	//define write enable bit for writing	into register file
	output reg b_invert, ALUSRC, RegDST, MEM2REG, J, BEQ, BNE,			//define b invert bit for subtraction
	output reg [1:0]ALUop		//define ALU Operation 2Bits 
    );
always@(posedge CLK)begin		//always block triggered at change in function field or opcode
	if(Stall == 0)begin
		Write_EN <= 0;						
		b_invert <= 0;						
		ALUop <= 2'bxx;
		MEMWrite <= 0;	
		ALUSRC <= 1;
		MEM2REG <= 0;
		case(opcode)
			6'h00:begin						//check if opcode is 0 (means R type instruction)
					ALUSRC <= 0; 						//set write enable as 1 to write the result of ALU in the register file
					case(funct)							//case statement condition for the some function field values 
						6'h20:begin ALUop <= 2'b10; Write_EN <= 1;end		//add
						6'h21:begin ALUop <= 2'b10; Write_EN <= 1;end			//add
						6'h22:begin b_invert <= 1; ALUop <= 2'b10; Write_EN <= 1;end 	//subtract
						6'h23:begin b_invert <= 1; ALUop <= 2'b10; Write_EN <= 1;end 	//subtract
						6'h24:begin ALUop <= 2'b00; Write_EN <= 1;end			//AND
						6'h25:begin ALUop <= 2'b01; Write_EN <= 1;end			//OR
						6'h26:begin b_invert <= 1; ALUop <= 2'b11; Write_EN <= 1;end   //set if less than (SLT)
					endcase							//end of case statement 
					end	//end of if condition
			6'h08:begin				//ADDI
					Write_EN <= 1;
					ALUop <= 2'b10;
					end
			6'h09:begin			//ADDIU
					Write_EN <= 1;
					ALUop <= 2'b10;
					end
			6'h0a:begin				//SLTI
					b_invert <= 1;
					ALUop <= 2'b11;
					MEM2REG <= 0;
					Write_EN <= 1;
					end
			6'h0c:begin				//ANDI
					Write_EN <= 1;
					ALUop <= 2'b00;
					end
			6'h0d:begin					//ORI
					Write_EN <= 1;
					ALUop <= 2'b01;
					end
			6'h23:begin						//LW
					ALUop <= 2'b10;
					Write_EN <= 1;
					MEM2REG <= 1;
					end
			6'h2b:begin						//SW
					ALUop <= 2'b10;
					MEMWrite <= 1;
					end
			6'h04:begin					//BEQ
					ALUSRC <= 0;
					b_invert <= 1;
					ALUop <= 2'b10;
					end
			6'h05:begin						//BNE
					ALUSRC <= 0;
					b_invert <= 1;
					ALUop <= 2'b10;
					end
		endcase
	end
	else begin
		Write_EN <= 0;						
		b_invert <= 0;						
		ALUop <= 2'bxx;
		MEMWrite <= 0;	
		ALUSRC <= 0;
		MEM2REG <= 0;
	end	
end
always @ (opcode)begin
	J = 0;
	RegDST = 0;
	ExtOP = 0;
	BNE = 0;
	BEQ = 0;
	case(opcode)
		6'h00:RegDST = 1;
		6'h02:J = 1;
		6'h08:ExtOP = 1;
		6'h09:ExtOP = 1;
		6'h23:ExtOP = 1;
		6'h2b:ExtOP = 1;
		6'h04:begin ExtOP = 1; BEQ = 1;end
		6'h05:begin ExtOP = 1; BNE = 1;end
	endcase
end	
endmodule
