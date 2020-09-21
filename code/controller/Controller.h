#ifndef CODE_CONTROLLER_H
#define CODE_CONTROLLER_H

#include <cstddef>
#include <map>
#include <string>
#include <iostream>

#include "../model/dna/DnaSequence.h"
#include "../model/dna_data/data.h"
#include "../view/interface/UI.h"

class Controller
{
public:
	Controller(UI* cli, Data* dnaData);
	void run();
	void start(){std::cout<<"start\n";}
	void exit(){std::cout<<"exit\n";}

private:
	UI* m_cli;
	Data* m_dnaData;
};


#endif




