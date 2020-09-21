//
// Created by shoshi on 8/18/20.
//

#include "save.h"
#include "../../../controller/read_write/DnaWriter.h"
#include "../../errors/InvalidCommand.h"

Save::Save(Data *data) :m_data(data){}

std::string Save::action(const std::vector<std::string>& args)
{
    if (args.size() != 2)
    {
        throw InvalidCommand();
    }

    DnaMetaData *metaData = m_data->getMetaData(args[1]);

    DNAWriter writer(metaData->getName());
    writer.Write(metaData->getDna());

    return "Saved completely.";
}

std::string Save::help()
{
    return "save:\nSaves sequence <seq> to a file\n"
           "<>: parameters []: optional parameters.\n"
           "save <seq> [<filename>]";
}
