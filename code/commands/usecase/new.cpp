//
// Created by shoshi on 8/18/20.
//
#include <sstream>

#include "new.h"
#include "../../dna_data/data.h"
#include "../../errors/InvalidCommand.h"


New::New(Data* data) : m_data(data) {}

std::string New::action(const std::vector<std::string>& args)
{
    if (args.size() < 2 || args.size() > 3 || (args.size() == 3 && args[2][0] != '@'))
    {
        throw InvalidCommand();
    }

    std::string seq = args[1];
    std::string name = m_data->getNameDnaByArgs(args);
    m_data->newDna(name, seq);

    std::stringstream ss;
    ss << "[" << m_data->getByName(name)->getId() << "]  " << name << ": " << seq << std::endl;
    return ss.str();
}

std::string New::help()
{
    return "new:\n Creates a new sequence\n"
           "<>: parameters []: optional parameters.\n"
           "new <sequence> [@<sequence_name>]";
}
