//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_FINDPARAMS_H
#define CODE_FINDPARAMS_H

#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"

class FindParams: public IParameters
{
public:
    FindParams(Data*);
    /*virtual*/ void init(const std::vector<std::string>&);

    Data *m_data;
    DnaSequence* m_seqToFindIn;
    DnaSequence* m_seqToBeFound;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_FINDPARAMS_H
