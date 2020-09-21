//
// Created by shoshi on 9/21/20.
//

#ifndef CODE_REPLACEDECORATOR_H
#define CODE_REPLACEDECORATOR_H

#include "../IDnaSequence.h"
#include "../../../SharedPtr.h"

class ReplaceDecorator: public IDnaSequence
{
public:
    ReplaceDecorator(SharedPtr<IDnaSequence>, size_t, Nucleotide);
    size_t length() const;
    const Nucleotide& operator[](size_t) const;
    Nucleotide& operator[](size_t);

private:
    SharedPtr<IDnaSequence> m_dna;
    size_t m_index;
    Nucleotide m_nuc;
};


#endif //CODE_REPLACEDECORATOR_H
