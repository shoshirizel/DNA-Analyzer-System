//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_LOADPARAMS_H
#define CODE_LOADPARAMS_H


#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"

class LoadParams: public IParameters
{
public:
    LoadParams(Data*);
    /*virtual*/ void init(const std::vector<std::string>&);

    Data *m_data;
    std::string m_seqName;
    std::string m_fileName;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_LOADPARAMS_H
