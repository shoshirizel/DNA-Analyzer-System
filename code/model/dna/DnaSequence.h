//
// Created by shoshi on 6/1/20.
//

#ifndef DNA_DNASEQUENCE_H
#define DNA_DNASEQUENCE_H


#include <string>
#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>


#include "Nucleotide.h"
#include "IDnaSequence.h"


class DnaSequence: public IDnaSequence
{
public:

    DnaSequence(const std::string&);

    DnaSequence(const DnaSequence&);

    ~DnaSequence();

    DnaSequence& operator=(const DnaSequence&);

    DnaSequence& operator=(const std::string&);

    const Nucleotide operator[](size_t) const;

    Nucleotide& operator[](size_t);

    size_t length() const;

    const Nucleotide* getDna() const;

    std::string getDnaAsStr() const;

    inline DnaSequence slicing(size_t start, size_t end) const;

    DnaSequence pair() const;

    size_t find(const DnaSequence& sub, size_t = 0) const;

    size_t count(const DnaSequence& sub) const;

    std::vector<size_t> findAll(const DnaSequence& sub) const;

    std::vector<DnaSequence> findConsensus() const;



private:

    void initStr(const std::string&);

    void initDna(const DnaSequence&);

    Nucleotide* strToDna(std::string);

    Nucleotide* m_dna;

    size_t m_length;
};



inline DnaSequence::DnaSequence(const std::string& dna) : m_dna(NULL), m_length(0) { initStr(dna); }

inline DnaSequence::DnaSequence(const DnaSequence& dna) : m_dna(NULL), m_length(0) { initDna(dna); }

inline DnaSequence::~DnaSequence() { delete[] m_dna; }

inline void DnaSequence::initStr(const std::string& s)
{
    Nucleotide* tmp = strToDna(s);
    delete[] m_dna;
    m_dna = tmp;
    m_length = s.length();
}

inline void DnaSequence::initDna(const DnaSequence& s)
{
    size_t l = s.length();
    Nucleotide* tmp = new Nucleotide[l];
    delete[] m_dna;
    m_dna = tmp;

    for (size_t i = 0; i < l; ++i)
    {
        m_dna[i] = s[i];
    }

    m_length = l;
}

inline DnaSequence& DnaSequence::operator=(const DnaSequence& dna)
{
    initDna(dna);
    return *this;
}

inline DnaSequence& DnaSequence::operator=(const std::string& dna)
{
    initStr(dna);
    return *this;
}

inline Nucleotide& DnaSequence::operator[](size_t i)
{
    if (i >= m_length)
        throw std::overflow_error("out of range.");
    return m_dna[i];
}

inline const Nucleotide DnaSequence::operator[](size_t i) const
{
    if (i >= m_length)
        throw std::overflow_error("out of range.");
    return m_dna[i];
}


inline size_t DnaSequence::length() const { return m_length; }

inline const Nucleotide* DnaSequence::getDna() const { return m_dna; }

bool operator==(const DnaSequence&, const DnaSequence&);

bool operator!=(const DnaSequence&, const DnaSequence&);

inline bool operator==(const DnaSequence& d1, const DnaSequence& d2)
{
    size_t l = d1.length();
    if (l != d2.length())
        return 0;

    for (size_t i = 0; i < l; ++i)
    {
        if (d1[i] != d2[i])
            return 0;
    }
    return 1;
}

inline bool operator!=(const DnaSequence& d1, const DnaSequence& d2)
{
    return !(d1.getDna() == d2.getDna());
}


inline  std::ostream& operator<<(std::ostream& os, const DnaSequence& d)
{
    os << d.getDnaAsStr() << std::endl;
    return os;
}

DnaSequence dnaFromFile(const char* filename);

std::basic_ofstream<char> fileFromDna(const DnaSequence& d, const char* fileName);

inline DnaSequence DnaSequence::slicing(size_t start, size_t end) const
{
    if(start > end || end > length())
        throw std::out_of_range("Your range is incorrect.");
    std::string myDna = getDnaAsStr(), s = "";

    for (size_t i = start; i < end; ++i)
    {
        s += myDna[i];
    }

    return DnaSequence(s);
}



#endif //DNA_DNASEQUENCE_H

