//
// Created by shoshi on 9/22/20.
//

#include "SaveParams.h"

SaveParams::SaveParams(Data *data): m_data(data), m_metaData(NULL), m_fileName("") {}

void SaveParams::init(const std::vector<std::string> &args)
{
    validateInput(args);

    m_metaData = m_data->getMetaData(args[1]);

    if (args.size() > 2)
    {
        m_fileName = args[2];
    }
    else
    {
        m_fileName = m_metaData->getName();
    }
}

void SaveParams::validateInput(const std::vector<std::string> &args)
{
    if (args.size() < 2 || args.size() > 3)
    {
        throw InvalidCommand();
    }
}
