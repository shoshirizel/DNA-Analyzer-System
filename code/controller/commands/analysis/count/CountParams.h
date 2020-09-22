//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_COUNTPARAMS_H
#define CODE_COUNTPARAMS_H

#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"

class CountParams: public IParameters
{
public:
    CountParams(Data*);
    /*virtual*/ void init(const std::vector<std::string>&);

    Data *m_data;
    DnaSequence* m_seqToFindIn;
    DnaSequence* m_seqToBeFound;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_COUNTPARAMS_H
