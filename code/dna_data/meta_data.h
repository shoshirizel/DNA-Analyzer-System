//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_META_DATA_H
#define CODE_META_DATA_H


#include "../dna/DnaSequence.h"

class DnaMetaData
{
public:
    DnaMetaData(DnaSequence* seq, std::string name, size_t id);
    size_t getId(){return 1;}
    std::string getName(){return m_name;}
    DnaSequence* getDna(){return m_dna;}

private:
    size_t m_id;
    std::string m_name;
    DnaSequence* m_dna;

};

inline DnaMetaData::DnaMetaData(DnaSequence *seq, std::string name, size_t id):
    m_id(id), m_name(name), m_dna(seq){}
#endif //CODE_META_DATA_H
