//
// Created by shoshi on 9/22/20.
//

#include "SliceParams.h"

#include "../../../errors/InvalidCommand.h"

SliceParams::SliceParams(Data *data): m_data(data), m_metaData(NULL), m_start(0), m_end(0), m_colon(NULL) {}

SliceParams::~SliceParams()
{
    delete m_colon;
}

void SliceParams::init(const std::vector<std::string>& params)
{
    validateInput(params);
    delete m_colon;
    m_metaData = m_data ->getMetaData(params[1]);
    m_start = size_t(std::atoi(params[2].c_str()));
    m_end = size_t(std::atoi(params[3].c_str()));

    if(params.size() == 6)
    {
        m_colon = new Colon(params[5]);
    }

    else if(params.size() == 5)
        m_colon = new Colon(m_data->getDefName());
    else
        m_colon = NULL;
}

void SliceParams::validateInput(const std::vector<std::string>& params)
{
    if (params.size() < 4 || params.size() > 6 || (params.size() > 4 && params[4] != ":"))
        throw InvalidCommand();
}
