// This file is part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: projects/04/Fill.asm

// Runs an infinite loop that listens to the keyboard input.
// When a key is pressed (any key), the program blackens the screen,
// i.e. writes "black" in every pixel;
// the screen should remain fully black as long as the key is pressed. 
// When no key is pressed, the program clears the screen, i.e. writes
// "white" in every pixel;
// the screen should remain fully clear as long as no key is pressed.

// A instruction is used to set the A register to a 15 bit value 
	//provides the only way to enter a constant in by computer control
	//sets the stage for a C instruction designed to manipulate a certain data memory location, by setting  A to the address of that location 
	//It sets the stage for a subsequent C instruction that specifies a jump, first by loading the address of the jump destination into the A regesiter 

(BEGIN)
	@SCREEN//refers to the screen location
	D=A //sets D=Screen
	@i //refers to some memory location
	M=D //sets the memory of i to D (i=SCREEN), start location 

(LOOP)
	
	@BEGIN
	D;JLT

	@KBD //refers to the keyboard location
	D=M //sets memory of D=M[KBD]

	@BLACK //refers to the BLACK loop
	0; JMP//jumps D (which is set to the keyboard input) is equal to 1

	@WHITE //refers to the WHITE loop
	D; JEQ //jumps if D(which is set to the keyboard input) is equal to 0


(BlACK)
	@i //fefers to the memory of i
	M=M+1 //increments the memeory location
	D=M //stores this in the D register
	@BEGIN
	D;JLT
	
	@i
	D=M
	A=D
	M=-1

	@LOOP//goes back to the loop
	0;JMP

(WHITE)
	@i //fefers to the memory of i
	M=M-1 //deincrements the memory location
	D=M //stores this in the D register
	@BEGIN
	D;JLT
	
	@i
	D=M
	A=D
	M=0//sets the memory location to 0

	@LOOP//goes back to the loop
	0;JMP

(END)

	@LOOP
	D;JMP //infinite loop
