//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_META_DATA_H
#define CODE_META_DATA_H


#include <dna/DnaSequence.h>

class DnaMetaData
{
public:
    size_t getId(){return 1;}
    std::string getName(){return "sari";}
    DnaSequence* getDna(){return new DnaSequence("AATG");}

private:
    size_t m_id;
    std::string m_name;
    DnaSequence* m_dna;

};


#endif //CODE_META_DATA_H
