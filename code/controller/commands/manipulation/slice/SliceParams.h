//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_SLICEPARAMS_H
#define CODE_SLICEPARAMS_H

#include <string>
#include "../../IParameters.h"
#include "../../../../model/dna_data/data.h"
#include "../Colon.h"

class SliceParams: public IParameters
{
public:
    SliceParams(Data*);
    ~SliceParams();
    /*virtual*/ void init(const std::vector<std::string>&);

    Data* m_data;
    DnaMetaData* m_metaData;
    size_t m_start;
    size_t m_end;
    Colon* m_colon;

protected:
    /*virtual*/ void validateInput(const std::vector<std::string>&);
};


#endif //CODE_SLICEPARAMS_H
