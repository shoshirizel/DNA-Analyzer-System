//
// Created by shoshi on 8/18/20.
//

#include "save.h"
#include "../../../read_write/DnaWriter.h"
#include "SaveParams.h"

std::string Save::action(const IParameters& fatherArgs)
{
    const SaveParams& args = dynamic_cast<const SaveParams&>(fatherArgs);
    DNAWriter writer(args.m_fileName);
    writer.Write(args.m_metaData->getDna());

    return "Saved completely.";
}

std::string Save::help()
{
    return "save:\nSaves sequence <seq> to a file\n"
           "<>: parameters []: optional parameters.\n"
           "save <seq> [<filename>]";
}
