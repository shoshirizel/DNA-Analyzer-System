#include "commands_container.h"

#include "commands/usecase/new.h"
#include "commands/usecase/load.h"
#include "commands/usecase/save.h"
#include "commands/usecase/Help.h"
#include "commands/usecase/Slice.h"
#include "commands/usecase/Len.h"
#include "commands/usecase/Replace.h"
#include "commands/usecase/Find.h"
#include "commands/usecase/Count.h"

#include "errors/CommandNotFound.h"

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
    commands["new"] = new New(dna_data);
	commands["load"] = new Load(dna_data, commands["new"]);
    commands["save"] = new Save(dna_data);
    commands["slice"] = new Slice(dna_data);
    commands["len"] = new Len(dna_data);
    commands["replace"] = new Replace(dna_data);
    commands["find"] = new Find(dna_data);
    commands["count"] = new Count(dna_data);
    commands["help"] = new Help();
}


ICommand* CommandsContainer::getCommand(std::string str)
{
    if (commands.find(str) == commands.end())
    {
        throw CommandNotFound();
    }

	return commands[str];
}

std::string CommandsContainer::getCommandsList()
{
    std::string res;

    for(std::map<std::string, ICommand*>::iterator it = commands.begin(); it != commands.end(); ++it)
    {
        res += it->first + "\n";
    }

    return res;
}



