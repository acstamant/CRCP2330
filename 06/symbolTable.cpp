#include <fstream>
#include <map>
#include "symbolTable.h"
#include <map>
using namespace std; 

map<std::string, int> predefinedMap; //declares the map beforehand

symbolTable::symbolTable() //default constructor
{

}

void addEntry(std::string symbol, int address)//adds (symbol, address) to the table
{
	predefinedMap.insert(make_pair(symbol, address));
}

bool contain(std::string symbol)//finds if the symbol is already in the map
{
	map<std::string, int>::iterator it=predefinedMap.find(symbol);  //searches for the symbol 
	return it != predefinedMap.end() ? true : false;  //if it is not in map, return i, else return false
}

void display() //displays the map 
{
	for(auto mapItem : predefinedMap)
	{
		cout<<mapItem.first << '\t' << mapItem.second << endl;
	}
}

int GetAddress(std::string symbol)
{
	map<std::string, int>::iterator it=predefinedMap.find(symbol);  //searches for the symbol 
	return it != predefinedMap.end() ? it->second: 0;//sets it=found symbol and outputs
}
