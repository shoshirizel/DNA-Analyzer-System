#ifndef COMMANDS_CONTAINER_H
#define COMMANDS_CONTAINER_H

#include <list>
#include <string>
#include <map>
#include "../commands/icommand.h"
#include "../dna_data/data.h"

class CommandsContainer
{
public:
	static void init_map_command(Data*);
	static ICommand* get_command(std::string);

private:
	static std::map<std::string,ICommand*> commands;
};

#endif
