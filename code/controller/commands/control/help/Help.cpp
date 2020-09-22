//
// Created by shoshi on 9/14/20.
//

#include "Help.h"
#include "HelpParams.h"
#include "../../../commands_container.h"
#include "../../../errors/InvalidCommand.h"

std::string Help::action(const IParameters& fatherArgs)
{
    const HelpParams& args = dynamic_cast<const HelpParams&>(fatherArgs);

    if (args.m_commandName == "")
    {
        return CommandsContainer::getCommandsList();
    }

    ICommand* command = CommandsContainer::getCommand(args.m_commandName).first;
    return command->help();
}

std::string Help::help()
{
    return "help:\n If <command> is not provided, help lists all the available commands.\n"
           "If a valid command is provided, it shows a short explanation of it.\n"
           "<>: parameters []: optional parameters.\n"
           "help [<command>]";
}