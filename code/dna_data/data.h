//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_DATA_H
#define CODE_DATA_H


#include <map>
#include "meta_data.h"

class Data
{
public:
    ~Data();
    DnaMetaData* getByName(std::string name);
    DnaMetaData* getById(size_t id){return m_ids[id];}
    std::string getNameDnaByArgs(std::vector<std::string>);
    bool isSeqNameExist(std::string);
    void newDna(std::string name, std::string seq);
    size_t getId();
    void setId();

private:
    std::string getNotExistName(std::string);

    std::map<std::string, DnaMetaData*> m_names;
    std::map<size_t, DnaMetaData*> m_ids;
    static size_t m_id;

};

inline size_t Data::getId()
{
    return m_id;
}

inline void Data::setId()
{
    ++m_id;
}

inline DnaMetaData * Data::getByName(std::string name) {return m_names[name];}

#endif //CODE_DATA_H
