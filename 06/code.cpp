#include <fstream>
#include <map>
#include "code.h"
using namespace std; 

//TRANSLATES HACK ASSEMBLY LANGUAGE MNEMONICS INTO BINARY CODES
map<std::string, int> dest;
map<std::string, int> comp;
map<std::string, int> jump;
int code::destination(std::string mnemonic)
{
	
		//DEST MAP
			dest.emplace("",000);
			dest.emplace("M",001); 
			dest.emplace("D",010);
			dest.emplace("MD",011);   
			dest.emplace("A",100);
			dest.emplace("AM",101); 
			dest.emplace("AD",110);
			dest.emplace("AMD",111); 

	}


int code::computation(std::string mnemonic)
{
	//COMP MAP
		//WHEN A=0
			//These are 7 digit, since you are including a as well
			comp.emplace("0", 0101010); 
			comp.emplace("1", 0111111); 
			comp.emplace("-1", 0111010);
			comp.emplace("D", 0001100); 
			comp.emplace("A", 0110000); 
			comp.emplace("!D", 0001101);
			comp.emplace("!A", 0110001); 
			comp.emplace("-D", 0001111); 
			comp.emplace("-A", 0110011);
			comp.emplace("D+1", 0011111); 
			comp.emplace("A+1", 0110111); 
			comp.emplace("D-1", 0001110);
			comp.emplace("A-1", 0110010); 
			comp.emplace("D+A", 0000010); 
			comp.emplace("D-A", 0010011);		
			comp.emplace("A-D", 0000111); 
			comp.emplace("D&A", 0000000); 
			comp.emplace("D|A", 0010101);
		//WHEN A=1, contain 7 digits as well
			comp.emplace("M", 1110000); 
			comp.emplace("!M", 1110001); 
			comp.emplace("-M", 1110011);
			comp.emplace("M+1",1110111); 
			comp.emplace("M-1", 1110010); 
			comp.emplace("D+M", 1000010);
			comp.emplace("D-M", 1010011); 
			comp.emplace("M-D", 1000111); 
			comp.emplace("D&M", 1000000);
			comp.emplace("D|M", 1010101);
}

int code::jumpcond(std::string mnemonic)
{
	
	//COMP MAP 
			jump.emplace("",000);
			jump.emplace("JGT",001);
			jump.emplace("JEQ",010);
			jump.emplace("JGE",011);   
			jump.emplace("JLT",100);
			jump.emplace("JNE",101);
			jump.emplace("JLE",110);
			jump.emplace("JMP",111); 
}