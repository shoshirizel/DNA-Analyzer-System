//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_REPLACEPARAMS_H
#define CODE_REPLACEPARAMS_H

#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"
#include "../Colon.h"

class ReplaceParams: public IParameters
{
public:
    ReplaceParams(Data*);
    ~ReplaceParams();
    /*virtual*/ void init(const std::vector<std::string>&);

    Data* m_data;
    DnaMetaData* m_metaData;
    size_t m_index;
    Nucleotide m_newNuc;
    Colon* m_colon;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_REPLACEPARAMS_H
