//
// Created by shoshi on 8/18/20.
//

#include <sstream>

#include "load.h"
#include "../../read_write/DnaReader.h"
#include "../../commands_container.h"
#include "../../../model/dna_data/data.h"
#include "../../errors/InvalidCommand.h"




Load::Load(Data *data, ICommand* creation):m_data(data), m_creation(creation) {}

std::string Load::action(const std::vector<std::string>& args)
{
    if (args.size() < 2 || args.size() > 3 || (args.size() == 3 && args[2][0] != '@'))
    {
        throw InvalidCommand();
    }

    DnaReader reader(args[1]);
    std::vector<std::string> newVec = args;
    newVec[1] = reader.read();

    return m_creation->action(newVec);
}

std::string Load::help()
{
    return "load:\n Loads the sequence from the file\n"
           "<>: parameters []: optional parameters.\n"
           "load <file_name>  [@<sequence_name>]";
}
