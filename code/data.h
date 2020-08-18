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
    DnaMetaData* getByName(std::string){return new DnaMetaData();}
    DnaMetaData* getById(size_t){return new DnaMetaData();}
private:
    std::map<std::string,DnaMetaData*> m_names;
    std::map<size_t,DnaMetaData*> m_ids;

};


#endif //CODE_DATA_H
