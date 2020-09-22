//
// Created by shoshi on 9/22/20.
//

#include "HelpParams.h"

HelpParams::HelpParams(): m_commandName("") {}

void HelpParams::init(const std::vector<std::string> &args)
{
    validateInput(args);

    if (args.size() == 2)
    {
        m_commandName = args[1];
    }
    else
    {
        m_commandName = "";
    }

}

void HelpParams::validateInput(const std::vector<std::string> &args)
{
    if (args.size() > 2)
        throw InvalidCommand();
}
