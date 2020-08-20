//
// Created by shoshi on 8/18/20.
//

#include <sstream>
#include "data.h"


size_t Data:: m_id = 0;
void Data::NewDna(std::string name, std::string seq)
{
    DnaSequence* dna_seq = new DnaSequence(seq);
    DnaMetaData* new_seq = new DnaMetaData(dna_seq, name, m_id);
    m_names[name] = new_seq;
    m_ids[m_id] = new_seq;
    setId();
}

std::string Data::getNameDnaByArgs(std::vector<std::string> args)
{
    if(args.size() == 3)
        return args[2];
    else
    {
        std::stringstream str;
        str << "def_seq_" << getId();
        return str.str();
    }


}

bool Data::isSeqNameExist(std::string name)
{
    if(m_names.find(name) == m_names.end())
    {
        return false;
    }
    return true;
}
