
#include <fstream>
#include <map>
#include "parser.h"
using namespace std; 

parser::parser() //default constructor
{

	
}

parser::parser(std::string fileName) //constructor when parameter is read in 
{
	std::string str; 
		ifstream inFile;  //names the file
		inFile.open(fileName, ios::in);

		while(getline(inFile, str)) //loop that reads each line(places in the string variable)
		{
			if(str[0]=='/'|| str[1]=='/') //checks to see if there is a comment
			{
		
			}
			if(str.empty()) //checks to see if it is empty
			{

			}
			else
			{
				cout<<str<<endl;
				}
		}
	
}

//stream& operator>>(istream& input, const parser& fileName)
	//{

		//input.ignore('@');
		
		//return input; 
	//}
//determine whether the file is at the end 
/*bool parser::endofFile(std::string fileName)
{
	return true; 
}

int getChar(std::string fileName)
{
	ifstream inFile(fileName);  //opens the file
	c=inFile.get();

	return 0; 
}
*/

	
	

		/*std::string str; //declares variable that holds the contents of file, one line at a time
		ifstream inFile;  //names the file
		inFile.open(fileName, ios::in);

		char c; 
		int lines=0; 

		while(!inFile.eof())
		{
			cin.get(c);
			cout << c;
			if(c=='\n')
			{
				++lines; 
			}

		cout << lines <<endl; 
		}
		*/
	

		/*
		while(inFile.get(str))
		{
			cout <<c; 
			if(inFile.eof())
			{
				cout <<"End of File Reached" <<endl; 
			}
			else
			{
				cout << c <<endl; 


			}

			inFile.close();


		}
		*/




	

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





