//
// Created by shoshi on 9/16/20.
//
#include <sstream>

#include "Slice.h"
#include "SliceParams.h"
#include "../../../../model/dna/dnaDecorators/SliceDecorator.h"


std::string Slice::action(const IParameters& fatherArgs)
{
    const SliceParams& params = dynamic_cast<const SliceParams&>(fatherArgs) ;

    if (params.m_colon == NULL)
    {
        SharedPtr<IDnaSequence> d(new SliceDecorator(params.m_metaData->getSharedDnaPtr(), params.m_start, params.m_end));
        params.m_metaData->decoratePtr(d);

        std::stringstream ss;
        ss << "[" << params.m_data->getByName(params.m_metaData->getName())->getId() << "]  " << params.m_metaData->getName() << ": " << (*params.m_metaData->getDna());
        return ss.str();
    }

    return "";
}

std::string Slice::help()
{
    return "slice <seq> <from_ind> <to_ind> [: [@<new_seq_name>|@@]]";
}