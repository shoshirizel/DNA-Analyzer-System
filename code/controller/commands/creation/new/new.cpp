//
// Created by shoshi on 8/18/20.
//
#include <sstream>

#include "new.h"
#include "NewParams.h"


std::string New::action(const IParameters& fatherArgs)
{
    const NewParams& args = dynamic_cast<const NewParams&>(fatherArgs);
    args.m_data->newDna(args.m_name, args.m_seq);

    std::stringstream ss;
    ss << "[" << args.m_data->getByName(args.m_name)->getId() << "]  " << args.m_name << ": " << args.m_seq;
    return ss.str();
}

std::string New::help()
{
    return "new:\n Creates a new sequence\n"
           "<>: parameters []: optional parameters.\n"
           "new <sequence> [@<sequence_name>]";
}