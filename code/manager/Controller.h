#ifndef CODE_CONTROLLER_H
#define CODE_CONTROLLER_H

#include <cstddef>
#include <map>
#include <string>
#include <iostream>

#include "../dna/DnaSequence.h"
#include "../interface/input_output.h"
#include "../dna_data/data.h"

class Controller
{
public:
	Controller(ICli* cli, Data* dnaData);
	void run();
	void start(){std::cout<<"start\n";}
	void exit(){std::cout<<"exit\n";}

private:
	ICli* m_cli;
	Data* m_dnaData;
};


#endif




