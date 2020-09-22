//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_FINDALLPARAMS_H
#define CODE_FINDALLPARAMS_H

#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"

class FindAllParams: public IParameters
{
public:
    FindAllParams(Data*);
    /*virtual*/ void init(const std::vector<std::string>&);

    Data *m_data;
    DnaSequence* m_seqToFindIn;
    DnaSequence* m_seqToBeFound;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_FINDALLPARAMS_H
