
#include <fstream>
#include <map>
#include "parser.h"
using namespace std; 

//creates the parse class

//class parser 
//{

//public:
	//std::map<std::string, std::string> my_map;
	//std::map<std::string, std::string> my_mapC; 
	//std::map<std::string, std::string> my_mapM;
	//std::map<std::string, std::string> dstMap;
	//std::map<std::string, std::string> jmpMap;

	char c; 
	char* ptr; 
	ifstream::pos_type size; 

	parser::parser() //default constructor
	 {
		//mapInit();
		//cout << "Map A: " << my_map["THAT"] << endl;
	}
	istream& operator>>(istream& input, const parser& fileName)
	{

		input.ignore('@');
		
		return input; 
	}

//determine whether the file is at the end 
bool parser::endofFile(std::string fileName)
{
	

	return true; 
}

int getChar(std::string fileName)
{
	ifstream inFile(fileName);  //opens the file
	c=inFile.get();

	return 0; 
}
//void parser::nextLine()
//{
	//if(!(endofFile(line)))
	//{
		//++line;
	//}
//}
	
	void parser::parseText(std::string fileName)
	{
		
		std::string str; //declares variable that holds the contents of file, one line at a time
	

		ifstream inFile(fileName);  //opens the file

		while(inFile.get(c))
		{
			cout <<c; 
			if(inFile.eof())
			{
				cout <<"End of File Reached" <<endl; 
			}
			else
			{
				cout << "error" <<endl; 

			}

			inFile.close();


		}



		/*while(getline(inFile, str)) //loop that reads each line(places in the string variable)
		{
			if(!inputF)
			if(str[0]=='/'|| str[1]=='/') //checks to see if there is a commebt
			{
			
			}
			else if(str.empty()) //checks to see if it is empty
			{

			}
			else
			{
				cout<<str<<endl;
			}
		}*/

	}
	

	//bool parser::hasMoreCommands()
	//{
		/*if(!inFile.eof())
		{
			return true; 
		}
		else
		{
			return false; 
		}*/
	//}

	
	//bool hasMoreCommands(ifstream inputFile){
		//return !(inputFile.eof());





