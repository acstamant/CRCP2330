#include <string>
#include <iostream>

class symbolTable
{
public:
	//constructor that creates new table
	symbolTable();
	//Adds the pair (symbol, address) to the table
	void addEntry(std::string symbol, int address);

	//Does the symbol table contain the given symbol? 
	bool contrain(std::string symbol);

	//returns the address associated with the symbol 
	int GetAddress(std::string symbol);

	void maps();

	private:
		std::string symbol; 
		int address; 



};