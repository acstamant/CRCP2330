#include <iostream>
#include <string> 
#include <fstream>
#include <string>
#include <map>

using namespace std; 

//creates the parse class

class parser 
{

public:
	//std::map<std::string, std::string> my_map;
	//std::map<std::string, std::string> my_mapC; 
	//std::map<std::string, std::string> my_mapM;
	//std::map<std::string, std::string> dstMap;
	//std::map<std::string, std::string> jmpMap;

	parser() //default constructor
	 {
		//mapInit();
		//cout << "Map A: " << my_map["THAT"] << endl;

	}

	//function that reads in the text file 
	void parseText(string fileName)
	{
		std::string str;
		std::string content;

		std::cout << "Parser Class Start" << endl;

		ifstream inFile(fileName, fstream::in);  //opens the file

		while(inFile>>content) //loop that reads in the files line by line
		{
			cout <<content<< endl;
		}

	}

	//bool hasMoreCommands(ifstream inputFile){
		//return !(inputFile.eof());


	
/*
	//void mapInit()
	{

		//the predifined variables
		my_map.emplace("SP", "0"); 
		my_map.emplace("LCL", "1"); 
		my_map.emplace("ARG", "2");
		my_map.emplace("THIS", "3"); 
		my_map.emplace("THAT", "4"); 
		my_map.emplace("R0", "0");
		my_map.emplace("R1", "1"); 
		my_map.emplace("R2", "2"); 
		my_map.emplace("R3", "3");
		my_map.emplace("R4", "4"); 
		my_map.emplace("R5", "5"); 
		my_map.emplace("R6", "6");
		my_map.emplace("R7", "7"); 
		my_map.emplace("R8", "8"); 
		my_map.emplace("R9", "9");
		my_map.emplace("R10", "10"); 
		my_map.emplace("R11", "11"); 
		my_map.emplace("R12", "12");
		my_map.emplace("R13", "13"); 
		my_map.emplace("R14", "14"); 
		my_map.emplace("R15", "5");
		my_map.emplace("SCREEN", "16384"); 
		my_map.emplace("KBD", "24576");

		//Comp, dest, and jumps 
		my_mapC.emplace("0", "101010"); 
		my_mapC.emplace("1", "111111"); 
		my_mapC.emplace("-1", "111010");
		my_mapC.emplace("D", "001100"); 
		my_mapC.emplace("A", "110000"); 
		my_mapC.emplace("!D", "001101");
		my_mapC.emplace("!A", "110001"); 
		my_mapC.emplace("-D", "001111"); 
		my_mapC.emplace("-A", "110011");
		my_mapC.emplace("D+1", "011111"); 
		my_mapC.emplace("A+1", "110111"); 
		my_mapC.emplace("D-1", "001110");
		my_mapC.emplace("A=1", "110010"); 
		my_mapC.emplace("D+A", "000010"); 
		my_mapC.emplace("D-A", "010011");
		my_mapC.emplace("A-D", "000111"); 
		my_mapC.emplace("D&A", "000000"); 
		my_mapC.emplace("D|A", "010101");


		my_mapM.emplace("M", "110000"); 
		my_mapM.emplace("!M", "110001"); 
		my_mapM.emplace("-M", "110011");
		my_mapM.emplace("M+1", "110111"); 
		my_mapM.emplace("M-1", "110010"); 
		my_mapM.emplace("D+M", "000010");
		my_mapM.emplace("D-M", "010011"); 
		my_mapM.emplace("M-D", "000111"); 
		my_mapM.emplace("D&M", "000000");
		my_mapM.emplace("D|M", "010101");


		dstMap.emplace("","000");
		dstMap.emplace("M","001"); 
		dstMap.emplace("D","010");
		dstMap.emplace("MD","011");   
		dstMap.emplace("A","100");
		dstMap.emplace("AM","101"); 
		dstMap.emplace("AD","110");
		dstMap.emplace("AMD","111"); 

		jmpMap.emplace("","000");
		jmpMap.emplace("JGT","001");
		jmpMap.emplace("JEQ","010");
		//jmpMap.emplace("JGE","011");   
		//jmpMap.emplace("JLT","100");
		//jmpMap.emplace("JNE","101");
		//jmpMap.emplace("JLE","110");
		//jmpMap.emplace("JMP","111"); 

		//do a double four loops 

	}
	*/
};


