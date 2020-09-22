//
// Created by shoshi on 9/22/20.
//

#include "ReplaceParams.h"

ReplaceParams::ReplaceParams(Data *data): m_data(data), m_metaData(NULL), m_index(0), m_newNuc((Nucleotide)'A'), m_colon(NULL) {}

ReplaceParams::~ReplaceParams()
{
    delete m_colon;
}

void ReplaceParams::init(const std::vector<std::string>& params)
{
    validateInput(params);
    delete m_colon;
    m_metaData = m_data ->getMetaData(params[1]);
    m_index = size_t(std::atoi(params[2].c_str()));
    m_newNuc = (Nucleotide)params[3][0];

    if(params.size() == 6)
    {
        m_colon = new Colon(params[5]);
    }

    else if(params.size() == 5)
        m_colon = new Colon(m_data->getDefName());
    else
        m_colon = NULL;
}

void ReplaceParams::validateInput(const std::vector<std::string>& params)
{
    if (params.size() < 4 || params.size() > 6 || (params.size() > 4 && params[4] != ":"))
        throw InvalidCommand();
}
