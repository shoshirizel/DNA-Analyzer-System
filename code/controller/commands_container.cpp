#include "commands_container.h"

#include "allCommands.h"

#include "errors/CommandNotFound.h"

#include <string>

std::map<std::string, std::pair<ICommand*, IParameters*>> CommandsContainer::commands;

CommandsContainer::~CommandsContainer()
{
    for(std::map<std::string, std::pair<ICommand*, IParameters*>>::iterator it = commands.begin(); it != commands.end(); ++it)
    {
        delete it->second.first;
        delete it->second.second;
        it->second = std::pair<ICommand*, IParameters*>(NULL, NULL);
    }
}

void CommandsContainer::initMapCommand(Data* dnaData)
{
    commands["new"] = std::pair<ICommand*, IParameters*>(new New, new NewParams(dnaData));
	commands["load"] = std::pair<ICommand*, IParameters*>(new Load, new LoadParams(dnaData));
    commands["save"] = std::pair<ICommand*, IParameters*>(new Save, new SaveParams(dnaData));
    commands["slice"] = std::pair<ICommand*, IParameters*>(new Slice, new SliceParams(dnaData));
    commands["len"] = std::pair<ICommand*, IParameters*>(new Len, new LenParams(dnaData));
    commands["findall"] = std::pair<ICommand*, IParameters*>(new FindAll, new FindAllParams(dnaData));
    commands["replace"] = std::pair<ICommand*, IParameters*>(new Replace, new ReplaceParams(dnaData));
    commands["find"] = std::pair<ICommand*, IParameters*>(new Find, new FindParams(dnaData));
    commands["count"] = std::pair<ICommand*, IParameters*>(new Count, new CountParams(dnaData));
    commands["help"] = std::pair<ICommand*, IParameters*>(new Help, new HelpParams);
}


std::pair<ICommand*, IParameters*> CommandsContainer::getCommand(std::string str)
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

    for(std::map<std::string, std::pair<ICommand*, IParameters*>>::iterator it = commands.begin(); it != commands.end(); ++it)
    {
        res += it->first + "\n";
    }

    return res;
}