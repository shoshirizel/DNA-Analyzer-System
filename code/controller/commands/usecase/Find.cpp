//
// Created by shoshi on 9/21/20.
//

#include "Find.h"

#include "../../../model/dna_data/data.h"
#include "../../errors/InvalidCommand.h"

#include <sstream>


Find::Find(Data* data) : m_data(data) {}

std::string Find::action(const std::vector<std::string>& args)
{
    if (args.size() != 3)
        throw InvalidCommand();
    DnaSequence* d = m_data->getMetaData(args[1])->getDna();
    std::stringstream ss;
    size_t flag = d->find(args[2]);
    if (flag < d->length())
        ss << flag + 1;
    else
        ss << "Not Exist";
    return ss.str();
}

std::string Find::help()
{
    return "find <seq name> <sub seq>.\n";
}

