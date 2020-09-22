//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_HELPPARAMS_H
#define CODE_HELPPARAMS_H

#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"

class HelpParams: public IParameters
{
public:
    HelpParams();
    /*virtual*/ void init(const std::vector<std::string>&);

    std::string m_commandName;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_HELPPARAMS_H
