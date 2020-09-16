//
// Created by shoshi on 9/13/20.
//

#include "DnaWriter.h"
#include "../errors/OpenFileError.h"


DNAWriter::DNAWriter(std::string name)
{
    name = "dnaFiles/" + name +".rawdna";
    myfile.open(name.c_str());

    if (!myfile.is_open())
        throw OpenFileError();
}


void DNAWriter::Write(const DnaSequence* other)
{
    for (size_t i = 0; i < other->length(); ++i)
        myfile << (other)[i];
}


DNAWriter::~DNAWriter()
{
    myfile.close();
}
