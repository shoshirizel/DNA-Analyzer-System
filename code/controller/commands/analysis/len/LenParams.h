//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_LENPARAMS_H
#define CODE_LENPARAMS_H

#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"

class LenParams: public IParameters
{
public:
    LenParams(Data*);
    /*virtual*/ void init(const std::vector<std::string>&);

    Data* m_data;
    DnaSequence* m_seq;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_LENPARAMS_H
