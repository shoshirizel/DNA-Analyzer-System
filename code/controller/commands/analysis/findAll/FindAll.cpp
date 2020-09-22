//
// Created by shoshi on 9/22/20.
//

#include <sstream>
#include <vector>

#include "FindAll.h"
#include "FindAllParams.h"


std::string FindAll::action(const IParameters& fatherArgs)
{
    const FindAllParams& args = dynamic_cast<const FindAllParams&>(fatherArgs);

    std::stringstream ss;
    std::string str = "";
    std::vector<size_t> res = args.m_seqToFindIn->findAll(*args.m_seqToBeFound);

    if(res.size() > 0)
    {
        for(std::vector<size_t>::iterator it = res.begin(); it != res.end(); ++it)
        {
            ss << *it + 1;
            ss << " ";
        }
    }

    else
    {
        ss << "Not exist";
    }

    return ss.str();
}

std::string FindAll::help()
{
    return "findall: <seq_id> <sub_seq> return all the indices where the sub-sequence appears.\n";
}
