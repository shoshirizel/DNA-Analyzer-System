//
// Created by shoshi on 8/18/20.
//

#include "../../model/read_write/DNAReader.h"
#include "../../dna_data/data.h"
#include <sstream>
#include "load.h"

Load::Load(Data *data):m_data(data) {}

std::string Load::action(const std::vector<std::string>& args)
{
    DNAReader reader(args[1]);
    std::string name = m_data->getNameDnaByArgs(args);
    m_data->newDna(name, reader.read());

    std::stringstream ss;
    ss << "[" << m_data->getByName(name)->getId() << "] " << name <<": " << *(m_data->getByName(name)->getDna()) << "\n";
    return ss.str();
}

void Load::help(){}
