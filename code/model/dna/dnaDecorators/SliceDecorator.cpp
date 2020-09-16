//
// Created by shoshi on 9/16/20.
//

#include "SliceDecorator.h"

SliceDecorator::SliceDecorator(SharedPtr<IDnaSequence> dnaPtr, size_t start, size_t end):
        m_dna(dnaPtr), m_start(start), m_end(end){}


size_t SliceDecorator::length() const {return m_end - m_start;}

//const Nucleotide & SliceDecorator::operator[](size_t i) const
//{
//    return (*m_dna)[m_start + i];
//}

Nucleotide & SliceDecorator::operator[](size_t i)
{
    return (*m_dna)[m_start + i];
}


