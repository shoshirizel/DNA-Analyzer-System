//
// Created by shoshi on 9/16/20.
//

#ifndef CODE_SLICEDECORATOR_H
#define CODE_SLICEDECORATOR_H

#include "../IDnaSequence.h"
#include "../../../SharedPtr.h"

class SliceDecorator: public IDnaSequence
{
public:
    SliceDecorator(SharedPtr<IDnaSequence>, size_t, size_t);
    size_t length() const;
//    const Nucleotide& operator[](size_t) const;
    Nucleotide& operator[](size_t);

private:
    SharedPtr<IDnaSequence> m_dna;
    size_t m_start;
    size_t m_end;
};


#endif //CODE_SLICEDECORATOR_H
