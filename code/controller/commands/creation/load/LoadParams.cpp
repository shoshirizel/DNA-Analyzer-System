//
// Created by shoshi on 9/22/20.
//

#include "LoadParams.h"

LoadParams::LoadParams(Data *data): m_data(data), m_seqName(""), m_fileName("") {}

void LoadParams::init(const std::vector<std::string> &args)
{
    validateInput(args);

    m_fileName = args[1];
    m_seqName = m_data->getNameDnaByArgs(args);
}

void LoadParams::validateInput(const std::vector<std::string> &args)
{
    if (args.size() < 2 || args.size() > 3 || (args.size() == 3 && args[2][0] != '@'))
    {
        throw InvalidCommand();
    }
}
