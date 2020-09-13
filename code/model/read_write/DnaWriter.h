//
// Created by shoshi on 9/13/20.
//

#ifndef CODE_DNAWRITER_H
#define CODE_DNAWRITER_H


#include <fstream>
#include "../../dna/DnaSequence.h"


class DNAWriter
{
public:
    DNAWriter(std::string);
    void Write(const DnaSequence* other);
    ~DNAWriter();

private:
    // composition
    std::ofstream myfile;
};


#endif //CODE_DNAWRITER_H
