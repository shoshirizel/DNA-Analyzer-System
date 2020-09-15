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
    size_t getId();
    std::string getName();
    DnaSequence* getDna();

private:
    size_t m_id;
    std::string m_name;
    IDnaSequence* m_dna;

};

inline DnaMetaData::DnaMetaData(DnaSequence *seq, std::string name, size_t id):
    m_id(id), m_name(name), m_dna(seq){}


inline size_t DnaMetaData::getId() {return m_id;}

inline std::string DnaMetaData::getName() {return m_name;}

inline DnaSequence * DnaMetaData::getDna() {return (DnaSequence*)m_dna;}

#endif //CODE_META_DATA_H
