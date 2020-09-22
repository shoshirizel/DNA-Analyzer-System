//
// Created by shoshi on 9/22/20.
//

#include "CountParams.h"

CountParams::CountParams(Data *data): m_data(data), m_seqToFindIn(NULL), m_seqToBeFound(NULL) {}

void CountParams::init(const std::vector<std::string> &args)
{
    validateInput(args);

    m_seqToFindIn = m_data->getMetaData(args[1])->getDna();
    m_seqToBeFound = m_data->getMetaData(args[2])->getDna();
}

void CountParams::validateInput(const std::vector<std::string> &args)
{
    if (args.size() != 3)
    {
        throw InvalidCommand();
    }
}
