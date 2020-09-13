#include "commands_container.h"
#include "../commands/usecase/new.h"
#include "../commands/usecase/load.h"
#include "../commands/usecase/save.h"
#include <string>

std::map<std::string,ICommand*> CommandsContainer::commands;

CommandsContainer::~CommandsContainer()
{
    for(std::map<std::string, ICommand*>::iterator it = commands.begin(); it != commands.end(); ++it)
    {
        delete it->second;
        it->second = NULL;
    }
}

void CommandsContainer::initMapCommand(Data* dna_data)
{
	commands["load"] = new Load(dna_data);
	commands["new"] = new New(dna_data);
    commands["save"] = new Save(dna_data);
}


ICommand* CommandsContainer::get_command(std::string str)
{
	return commands[str];
}



