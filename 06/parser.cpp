
#include <fstream>
#include <map>
#include "parser.h"
using namespace std; 



parser::parser() //default constructor
{}

parser::parser(std::string fileName) //constructor when parameter is read in 
{
	std::string str; 

	ifstream inFile(fileName, ios::in);//creates a stream and opens the file

	if(inFile.is_open())//tests that the file opened correctly
	{
		while(getline(inFile, str)) //loop that reads each line(places in the string variable)
		{
			cout<<str<<endl; 
		}
	}
}



void parser::advance()
{

}

void numOfLines(int num_lines)
{
	num_lines=0; 
	num_lines--; 
	cout<< "Number of Lines:" << num_lines <<endl; 
}
bool parser::hasMoreCommands(std::string fileName, int& num_lines)
{
	string line; 
	ifstream inFile(fileName);

	if(inFile.is_open())
	{
		while(!inFile.eof())
		{
			getline(inFile, line);
			cout <<line <<endl; 
			num_lines++;

		}
		inFile.close();
	}

}
string parser::commandType()
{
	return 0;
}
	
string parser::symbol()
{
	return 0;
}
string parser::dest()
{
	return 0;
	}
string parser::comp()
{
	return 0;
}
string parser::jump()
{
	return 0;
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





