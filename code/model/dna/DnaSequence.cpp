
//
// Created by shoshi on 6/1/20.
//

#include <algorithm>

#include "DnaSequence.h"
#include "../../controller/errors/InvalidDna.h"


Nucleotide* DnaSequence::strToDna(std::string s)
{
    if (s.find_first_not_of("ACGTacgt") != std::string::npos)
        throw InvalidDna();
    size_t len = s.length();
    Nucleotide* dna = new Nucleotide[len];

    for (size_t i = 0; i < len; i++)
    {
        if (s[i] == 'A' || s[i] == 'a')
            dna[i] = A;

        else if (s[i] == 'C' || s[i] == 'c')
            dna[i] = C;

        else if (s[i] == 'G' || s[i] == 'g')
            dna[i] = G;

        else if (s[i] == 'T' || s[i] == 't')
            dna[i] = T;
    }
    return dna;
}

std::string DnaSequence::getDnaAsStr() const
{
    std::string s = "";
    size_t l = length();
    std::cout << "-------------------" << l << "----------";
    for (size_t i = 0; i < l; ++i)
    {
        switch (m_dna[i])
        {
            case A:
                s += "A";
                break;

            case C:
                s += "C";
                break;

            case G:
                s += "G";
                break;

            case T:
                s += "T";
                break;

            default:
                std::cout << "\n" <<"-=-=-=-=-="<< m_dna[i] <<"-=-=-=-=-="<< "\n";
        }
    }

    return s;
}

DnaSequence dnaFromFile(const char* filename)
{
    std::ifstream fin;
    fin.open(filename);

    if(fin.is_open())
    {
        std::string line;
        getline(fin, line);
        fin.close();
        DnaSequence dna(line);
        return dna;
    }
    else throw std::domain_error("We couldnt open the file.");

}

std::basic_ofstream<char> fileFromDna(const DnaSequence& d, const char* fileName)
{
    std::ofstream myfile;
    myfile.open(fileName);
    myfile << d.getDnaAsStr() <<"\n";
    myfile.close();

    return myfile;
}

DnaSequence DnaSequence::pair() const
{
    std::string s = "" ;
    const Nucleotide* first = getDna();
    size_t l = length();
    for (size_t i = 0; i < l; ++i)
    {
        switch (first[i])
        {
            case A:
                s += "C";
                break;

            case C:
                s += "A";
                break;

            case G:
                s += "T";
                break;

            case T:
                s += "G";
                break;
        }
    }
    std::reverse(s.begin(), s.end());

    return DnaSequence(s);
}

size_t DnaSequence::find(const DnaSequence& sub, size_t start) const
{
    size_t j = 0;
    size_t lSeq = length(), lSub = sub.length();

    for (size_t i = start; i < lSeq - lSub + 1; ++i)
    {
        for (; j < lSub && i + j < m_length; ++j)
        {
            if(m_dna[i + j] != sub[j])
                break;
        }

        if(lSub == j)
            return i;
    }

    return std::string::npos;
}

size_t DnaSequence::count(const DnaSequence& sub) const
{
    size_t res = 0;
    size_t i = find(sub, 0);

    while(i != std::string::npos)
    {
        i = find(sub, i + 1);
        res += 1;
    }

    return res;
}

std::vector<size_t> DnaSequence::findAll(const DnaSequence& sub) const
{
    std::vector<size_t> res;
    size_t i = find(sub, 0);

    while ( i != std::string::npos )
    {
        res.push_back(i);
        i = find(sub, i + 1);
    }

    return res;
}

std::vector<DnaSequence> DnaSequence::findConsensus() const
{
    std::vector<size_t> start = findAll(DnaSequence("ATG"));
    std::vector<size_t> end = findAll(DnaSequence("TAG"));
    std::vector<size_t> end2 = findAll(DnaSequence("TAA")),  end3 = findAll(DnaSequence("TGA"));
    std::vector<DnaSequence> res;
    end.insert(end.end(), end2.begin(), end2.end());

    for (size_t i = 0; i < start.size(); ++i)
    {
        for (size_t j = 0; j < end.size(); ++j)
        {
            if(start[i] < end[j] && (start[i] - end[j]) % 3 == 0)
                res.push_back(slicing(start[i], end[j] + 2));
        }

    }

    return res;
}