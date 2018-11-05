// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Mult.asm

// Multiplies R0 and R1 and stores the result in R2.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

@sum 
 M=0

 (LOOP)

	 @0
 	D;JEQ
 	@1
 	D;JEQ

 	@0
 	D=M
 	@1
 	M=M+D

	 @sum
	D=M 

 	@LOOP
	 0;JMP

 (END)

 @sum
 D=M
 @2
 M=D

 0;JMP