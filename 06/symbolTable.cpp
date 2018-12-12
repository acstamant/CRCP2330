#include <fstream>
#include <map>
#include "symbolTable.h"
#include <map>
using namespace std; 

symbolTable::symbolTable() //default constructor
{

}


void symbolTable::maps()
{
	std::map<std::string, std::string> predefinedMap;
	std::map<std::string, std::string> comp; 
	std::map<std::string, std::string> dest;
	std::map<std::string, std::string> jump; 

//PREDEFINED MAP
	predefinedMap.emplace("SP", "0"); 
	predefinedMap.emplace("LCL", "1"); 
	predefinedMap.emplace("ARG", "2");
	predefinedMap.emplace("THIS", "3"); 
	predefinedMap.emplace("THAT", "4"); 
	predefinedMap.emplace("R0", "0");
	predefinedMap.emplace("R1", "1"); 
	predefinedMap.emplace("R2", "2"); 
	predefinedMap.emplace("R3", "3");
	predefinedMap.emplace("R4", "4"); 
	predefinedMap.emplace("R5", "5"); 
	predefinedMap.emplace("R6", "6");
	predefinedMap.emplace("R7", "7"); 
	predefinedMap.emplace("R8", "8"); 
	predefinedMap.emplace("R9", "9");
	predefinedMap.emplace("R10", "10"); 
	predefinedMap.emplace("R11", "11"); 
	predefinedMap.emplace("R12", "12");
	predefinedMap.emplace("R13", "13"); 
	predefinedMap.emplace("R14", "14"); 
	predefinedMap.emplace("R15", "5");
	predefinedMap.emplace("SCREEN", "16384"); 
	predefinedMap.emplace("KBD", "24576");

//COMP MAP
	comp.emplace("0", "101010"); 
	comp.emplace("1", "111111"); 
	comp.emplace("-1", "111010");
	comp.emplace("D", "001100"); 
	comp.emplace("A", "110000"); 
	comp.emplace("!D", "001101");
	comp.emplace("!A", "110001"); 
	comp.emplace("-D", "001111"); 
	comp.emplace("-A", "110011");
	comp.emplace("D+1", "011111"); 
	comp.emplace("A+1", "110111"); 
	comp.emplace("D-1", "001110");
	comp.emplace("A-1", "110010"); 
	comp.emplace("D+A", "000010"); 
	comp.emplace("D-A", "010011");		
	comp.emplace("A-D", "000111"); 
	comp.emplace("D&A", "000000"); 
	comp.emplace("D|A", "010101");

	comp.emplace("M", "110000"); 
	comp.emplace("!M", "110001"); 
	comp.emplace("-M", "110011");
	comp.emplace("M+1", "110111"); 
	comp.emplace("M-1", "110010"); 
	comp.emplace("D+M", "000010");
	comp.emplace("D-M", "010011"); 
	comp.emplace("M-D", "000111"); 
	comp.emplace("D&M", "000000");
	comp.emplace("D|M", "010101");

//DEST MAP
	dest.emplace("","000");
	dest.emplace("M","001"); 
	dest.emplace("D","010");
	dest.emplace("MD","011");   
	dest.emplace("A","100");
	dest.emplace("AM","101"); 
	dest.emplace("AD","110");
	dest.emplace("AMD","111"); 

//COMP MAP 
	jump.emplace("","000");
	jump.emplace("JGT","001");
	jump.emplace("JEQ","010");
	jump.emplace("JGE","011");   
	jump.emplace("JLT","100");
	jump.emplace("JNE","101");
	jump.emplace("JLE","110");
	jump.emplace("JMP","111"); 

}
