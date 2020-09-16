//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_META_DATA_H
#define CODE_META_DATA_H


#include "../dna/DnaSequence.h"
#include "../../SharedPtr.h"

class DnaMetaData
{
public:
    DnaMetaData(SharedPtr<IDnaSequence> seq, std::string name, size_t id);
    size_t getId();
    std::string getName();
    DnaSequence* getDna();
    SharedPtr<IDnaSequence> getSharedDnaPtr();
    void decoratePtr(SharedPtr<IDnaSequence>);

private:
    size_t m_id;
    std::string m_name;
    SharedPtr<IDnaSequence> m_dna;
};

inline DnaMetaData::DnaMetaData(SharedPtr<IDnaSequence> seq, std::string name, size_t id):
    m_id(id), m_name(name), m_dna(seq){}


inline size_t DnaMetaData::getId() {return m_id;}

inline std::string DnaMetaData::getName() {return m_name;}

inline DnaSequence* DnaMetaData::getDna() {return (DnaSequence*)m_dna.get();}

inline void DnaMetaData::decoratePtr(SharedPtr<IDnaSequence> ptr) {m_dna = ptr;}

inline SharedPtr<IDnaSequence> DnaMetaData::getSharedDnaPtr() {return m_dna;}

#endif //CODE_META_DATA_H
