//
// Created by shoshi on 8/18/20.
//
#include <sstream>

#include "new.h"
#include "../../../model/dna_data/data.h"
#include "../../errors/InvalidCommand.h"



std::string New::action(const NewParams& args)
{
    args.m_data->newDna(args.m_name, args.m_name);

    std::stringstream ss;
    ss << "[" << args.m_data->getByName(args.m_name)->getId() << "]  " << args.m_name << ": " << args.m_name << std::endl;
    return ss.str();
}

std::string New::help()
{
    return "new:\n Creates a new sequence\n"
           "<>: parameters []: optional parameters.\n"
           "new <sequence> [@<sequence_name>]";
}
