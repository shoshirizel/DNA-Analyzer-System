#ifndef CODE_MANAGER_H
#define CODE_MANAGER_H

#include <cstddef>
#include <map>
#include <string>
#include <iostream>

#include "../dna/DnaSequence.h"
#include "../interface/icli.h"
#include "../dna_data/data.h"

class Manager
{
public:
	Manager(ICli* cli, Data* dnaData);
	void run();
	void start(){std::cout<<"start\n";}
	void exit(){std::cout<<"exit\n";}

private:
	ICli* m_cli;
	Data* m_dnaData;
};


#endif




