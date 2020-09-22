//
// Created by shoshi on 9/22/20.
//

#include "LenParams.h"

LenParams::LenParams(Data *data): m_data(data), m_seq(NULL) {}

void LenParams::init(const std::vector<std::string> &args)
{
    validateInput(args);

    m_seq = m_data->getMetaData(args[1])->getDna();
}

void LenParams::validateInput(const std::vector<std::string> &args)
{
    if (args.size() != 2)
    {
        throw InvalidCommand();
    }
}
