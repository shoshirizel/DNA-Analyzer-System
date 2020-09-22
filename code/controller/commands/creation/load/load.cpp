//
// Created by shoshi on 8/18/20.
//

#include <sstream>

#include "load.h"
#include "LoadParams.h"
#include "../../../read_write/DnaReader.h"


std::string Load::action(const IParameters& fatherArgs)
{
    const LoadParams& args = dynamic_cast<const LoadParams&>(fatherArgs);
    DnaReader reader(args.m_fileName);

    std::string seq = reader.read();
    args.m_data->newDna(args.m_seqName, seq);

    std::stringstream ss;
    ss << "[" << args.m_data->getByName(args.m_seqName)->getId() << "]  " << args.m_seqName << ": " << seq;
    return ss.str();
}

std::string Load::help()
{
    return "load:\n Loads the sequence from the file\n"
           "<>: parameters []: optional parameters.\n"
           "load <file_name>  [@<sequence_name>]";
}
