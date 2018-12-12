#include <fstream>
#include <map>
#include "code.h"
using namespace std; 

//TRANSLATES HACK ASSEMBLY LANGUAGE MNEMONICS INTO BINARY CODES


int dest(std::string mnemonic);

int comp(std::string mnemonic);

int jump(std::string mnemonic);