//
// Created by shoshi on 9/22/20.
//

#include "CallBack.h"

#include "../view/parser.h"
#include "commands_container.h"

std::string CallBack::execute(const std::vector<std::string> &parse) const
{
    std::pair<ICommand*, IParameters*> command = CommandsContainer::getCommand(parse[0]);
    command.second->init(parse);
    return command.first->action(*command.second);
}
