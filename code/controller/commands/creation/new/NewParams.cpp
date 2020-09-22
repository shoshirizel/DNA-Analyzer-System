//
// Created by shoshi on 9/21/20.
//

#include "NewParams.h"

NewParams::NewParams(Data *data): m_data(data), m_name(""), m_seq("") {}

void NewParams::init(const std::vector<std::string> &args)
{
   validateInput(args);

   m_seq = args[1];
   m_name = m_data->getNameDnaByArgs(args);
}

void NewParams::validateInput(const std::vector<std::string> &args)
{
    if (args.size() < 2 || args.size() > 3 || (args.size() == 3 && args[2][0] != '@'))
    {
        throw InvalidCommand();
    }
}
