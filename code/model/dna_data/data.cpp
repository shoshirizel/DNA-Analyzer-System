//
// Created by shoshi on 8/18/20.
//

#include <sstream>
#include "data.h"


size_t Data:: m_id = 0;

Data::~Data()
{
    for(std::map<std::string, DnaMetaData*>::iterator it = m_names.begin(); it != m_names.end(); ++it)
    {
        m_ids.erase(it->second->getId());
        delete it->second;
        it->second = NULL;
    }
}

void Data::newDna(std::string name, std::string seq)
{
    SharedPtr<IDnaSequence> dnaSeq(new DnaSequence(seq));
    DnaMetaData* newSeq = new DnaMetaData(dnaSeq, name, m_id);
    m_names[name] = newSeq;
    m_ids[m_id] = newSeq;
    setId();
}

std::string Data::getNameDnaByArgs(std::vector<std::string> args)
{
    if(args.size() == 3)
    {
        return getNotExistName(args[2].erase(0, 1));
    }

    else
    {
        return getDefName();
    }
}

std::string Data::getDefName()
{
    std::stringstream str;
    str << "def_seq_" << getId();
    return getNotExistName(str.str());
}

bool Data::isSeqNameExist(std::string name)
{
    if(m_names.find(name) == m_names.end())
    {
        return false;
    }
    return true;
}

std::string Data::getNotExistName(std::string s)
{
    size_t counter = 0;
    std::string newName = s;
    while (m_names.find(newName) != m_names.end())
    {
        std::stringstream name;
        name << s << "_" << counter++;
        newName = name.str();
    }

    return newName;
}
