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