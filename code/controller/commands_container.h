#ifndef COMMANDS_CONTAINER_H
#define COMMANDS_CONTAINER_H

#include <list>
#include <string>
#include <map>
#include <utility>

#include "commands/icommand.h"
#include "commands/IParameters.h"
#include "../model/dna_data/data.h"

class CommandsContainer
{
public:
    ~CommandsContainer();
    static void initMapCommand(Data*);
    static std::pair<ICommand*, IParameters*> getCommand(std::string);
    static std::string getCommandsList();

private:
    static std::map<std::string, std::pair<ICommand*, IParameters*>> commands;
};

#endif