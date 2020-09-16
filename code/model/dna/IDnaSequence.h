//
// Created by shoshi on 9/15/20.
//

#ifndef CODE_IDNASEQUENCE_H
#define CODE_IDNASEQUENCE_H

#include "Nucleotide.h"
#include <cstddef>

class IDnaSequence
{
public:
    virtual ~IDnaSequence(){}
    virtual size_t length() const = 0;
//    virtual const Nucleotide& operator[](size_t) const = 0;
    virtual Nucleotide& operator[](size_t) = 0;
};


#endif //CODE_IDNASEQUENCE_H
