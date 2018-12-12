#include <string>
#include <iostream>

class symbolTable
{
	//initalizes the container
public:
	void maps()
		{
			map<std::string, int> predefinedMap;

		//PREDEFINED MAP
			predefinedMap.emplace("SP", 0); 
			predefinedMap.emplace("LCL", 1); 
			predefinedMap.emplace("ARG", 2);
			predefinedMap.emplace("THIS", 3); 
			predefinedMap.emplace("THAT", 4); 
			predefinedMap.emplace("R0", 1);
			predefinedMap.emplace("R1", 1); 
			predefinedMap.emplace("R2", 2); 
			predefinedMap.emplace("R3", 3);
			predefinedMap.emplace("R4", 4); 
			predefinedMap.emplace("R5", 5); 
			predefinedMap.emplace("R6", 6);
			predefinedMap.emplace("R7", 7); 
			predefinedMap.emplace("R8", 8); 
			predefinedMap.emplace("R9", 9);
			predefinedMap.emplace("R10", 10); 
			predefinedMap.emplace("R11", 11); 
			predefinedMap.emplace("R12", 12);
			predefinedMap.emplace("R13", 13); 
			predefinedMap.emplace("R14", 14); 
			predefinedMap.emplace("R15", 15);
			predefinedMap.emplace("SCREEN", 16384); 
			predefinedMap.emplace("KBD", 24576);

	//COMP MAP
		//WHEN A=0
			//These are 7 digit, since you are including a as well
			predefinedMap.emplace("0", 0101010); 
			predefinedMap.emplace("1", 0111111); 
			predefinedMap.emplace("-1", 0111010);
			predefinedMap.emplace("D", 0001100); 
			predefinedMap.emplace("A", 0110000); 
			predefinedMap.emplace("!D", 0001101);
			predefinedMap.emplace("!A", 0110001); 
			predefinedMap.emplace("-D", 0001111); 
			predefinedMap.emplace("-A", 0110011);
			predefinedMap.emplace("D+1", 0011111); 
			predefinedMap.emplace("A+1", 0110111); 
			predefinedMap.emplace("D-1", 0001110);
			predefinedMap.emplace("A-1", 0110010); 
			predefinedMap.emplace("D+A", 0000010); 
			predefinedMap.emplace("D-A", 0010011);		
			predefinedMap.emplace("A-D", 0000111); 
			predefinedMap.emplace("D&A", 0000000); 
			predefinedMap.emplace("D|A", 0010101);
		//WHEN A=1, contain 7 digits as well
			predefinedMap.emplace("M", 1110000); 
			predefinedMap.emplace("!M", 1110001); 
			predefinedMap.emplace("-M", 1110011);
			predefinedMap.emplace("M+1",1110111); 
			predefinedMap.emplace("M-1", 1110010); 
			predefinedMap.emplace("D+M", 1000010);
			predefinedMap.emplace("D-M", 1010011); 
			predefinedMap.emplace("M-D", 1000111); 
			predefinedMap.emplace("D&M", 1000000);
			predefinedMap.emplace("D|M", 1010101);

	//DEST MAP
			predefinedMap.emplace("",000);
			predefinedMap.emplace("M",001); 
			predefinedMap.emplace("D",010);
			predefinedMap.emplace("MD",011);   
			predefinedMap.emplace("A",100);
			predefinedMap.emplace("AM",101); 
			predefinedMap.emplace("AD",110);
			predefinedMap.emplace("AMD",111); 

	//COMP MAP 
			predefinedMap.emplace("",000);
			predefinedMap.emplace("JGT",001);
			predefinedMap.emplace("JEQ",010);
			predefinedMap.emplace("JGE",011);   
			predefinedMap.emplace("JLT",100);
			predefinedMap.emplace("JNE",101);
			predefinedMap.emplace("JLE",110);
			predefinedMap.emplace("JMP",111); 
		}
	//constructor that creates new table
	symbolTable();
	//Adds the pair (symbol, address) to the table
	void addEntry(std::string symbol, int address);
	
	//Does the symbol table contain the given symbol? 
	bool contain(std::string symbol);

	//returns the address associated with the symbol 
	int GetAddress(std::string symbol);

	//displays the map
	void display();

	

	private:
		std::string symbol; 
		int address; 

};