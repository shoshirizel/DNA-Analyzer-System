//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_SAVEPARAMS_H
#define CODE_SAVEPARAMS_H

#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"

class SaveParams: public IParameters
{
public:
    SaveParams(Data*);
    /*virtual*/ void init(const std::vector<std::string>&);

    Data* m_data;
    DnaMetaData* m_metaData;
    std::string m_fileName;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_SAVEPARAMS_H
