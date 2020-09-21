//
// Created by shoshi on 9/14/20.
//

#include "Help.h"
#include "../../commands_container.h"
#include "../../errors/InvalidCommand.h"

std::string Help::action(const std::vector<std::string> &vec)
{
    if (vec.size() > 2)
        throw InvalidCommand();

    if (vec.size() == 1)
    {
        return CommandsContainer::getCommandsList();
    }

    ICommand* command = CommandsContainer::getCommand(vec[1]);
    return command->help();
}

std::string Help::help()
{
    return "help:\n If <command> is not provided, help lists all the available commands.\n"
           "If a valid command is provided, it shows a short explanation of it.\n"
           "<>: parameters []: optional parameters.\n"
           "help [<command>]";
}
