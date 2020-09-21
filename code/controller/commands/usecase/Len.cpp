//
// Created by shoshi on 9/21/20.
//

#include "Len.h"

#include <sstream>
#include "../../../model/dna_data/data.h"
#include "../../errors/InvalidCommand.h"

Len::Len(Data* data) : m_data(data) {}


std::string Len::action(const std::vector<std::string>& args)
{
    if (args.size() != 2)
        throw InvalidCommand();
    DnaSequence* d = m_data->getMetaData(args[1])->getDna();

    std::stringstream ss;
    ss << d->length();
    return ss.str();
}

std::string Len::help()
{
    return "len: <seq_id> prints the length of the sequence.\n";
}
