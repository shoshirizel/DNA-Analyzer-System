//
// Created by shoshi on 8/20/20.
//

#include <iostream>
#include "DnaReader.h"
#include "../errors/OpenFileError.h"

DnaReader::DnaReader(std::string name)
{
    name = "dnaFiles/" + name + ".rawdna";
    myfile.open(name.c_str());

    if (!myfile.is_open())
        throw OpenFileError();
}

std::string  DnaReader::read()
{
    myfile.seekg (0, std::ios::end);
    int length = myfile.tellg();
    myfile.seekg(0);
    char *output = new char[length+1];
    while (!myfile.eof()) {
        myfile >> output;
    }
    return output;
}

DnaReader::~DnaReader()
{
    myfile.close();
}
