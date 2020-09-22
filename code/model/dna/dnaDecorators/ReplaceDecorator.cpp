//
// Created by shoshi on 9/21/20.
//

#include "ReplaceDecorator.h"

ReplaceDecorator::ReplaceDecorator(SharedPtr<IDnaSequence> dna, size_t index, Nucleotide n)
                                            : m_dna(dna), m_index(index), m_nuc(n){}

Nucleotide& ReplaceDecorator::operator[](size_t index)
{
    if (index == m_index)
    {
        return m_nuc;
    }

    return (*m_dna)[index];
}

const Nucleotide& ReplaceDecorator::operator[](size_t index) const
{
    if (index == m_index)
    {
        return m_nuc;
    }

    return (*m_dna)[index];
}

size_t ReplaceDecorator::length() const
{
    return m_dna->length();
}

