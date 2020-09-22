//
// Created by shoshi on 9/21/20.
//

#ifndef CODE_NEWPARAMS_H
#define CODE_NEWPARAMS_H

#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"

class NewParams: public IParameters
{
public:
    NewParams(Data*);
    /*virtual*/ void init(const std::vector<std::string>&);

    Data *m_data;
    std::string m_name;
    std::string m_seq;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_NEWPARAMS_H
