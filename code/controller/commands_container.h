#ifndef COMMANDS_CONTAINER_H
#define COMMANDS_CONTAINER_H

#include <list>
#include <string>
#include <map>
#include "commands/icommand.h"
#include "../model/dna_data/data.h"

class CommandsContainer
{
public:
    ~CommandsContainer();
	static void initMapCommand(Data*);
	static ICommand* getCommand(std::string);
	static std::string getCommandsList();

private:
	static std::map<std::string, ICommand*> commands;
};

#endif
