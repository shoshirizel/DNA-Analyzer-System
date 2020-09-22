//
// Created by shoshi on 9/21/20.
//

#include <sstream>

#include "Replace.h"
#include "ReplaceParams.h"
#include "../../../../model/dna/dnaDecorators/ReplaceDecorator.h"


std::string Replace::action(const IParameters &fatherArgs)
{
    const ReplaceParams& args = dynamic_cast<const ReplaceParams&>(fatherArgs) ;

    if (args.m_colon == NULL)
    {
        IDnaSequence *r = new ReplaceDecorator(args.m_metaData->getSharedDnaPtr(), args.m_index, args.m_newNuc);
        SharedPtr<IDnaSequence> d(r);
        args.m_metaData->decoratePtr(d);

        std::stringstream ss;
        ss << "[" << args.m_data->getByName(args.m_metaData->getName())->getId() << "]  " << args.m_metaData->getName() << ": " << (*args.m_metaData->getDna()) << std::endl;
        return ss.str();
    }


    return "";
}

std::string Replace::help()
{
    return "replace <seq> <index> <new_letter> [: [@<new_seq_name>|@@]]";
}
