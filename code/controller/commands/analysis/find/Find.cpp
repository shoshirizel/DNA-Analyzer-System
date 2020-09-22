//
// Created by shoshi on 9/21/20.
//

#include <sstream>

#include "Find.h"
#include "FindParams.h"

std::string Find::action(const IParameters& fatherArgs)
{
    const FindParams& args = dynamic_cast<const FindParams&>(fatherArgs);

    std::stringstream ss;
    size_t flag = args.m_seqToFindIn->find(*args.m_seqToFindIn);
    if (flag < args.m_seqToFindIn->length())
        ss << flag + 1;
    else
        ss << "Not Exist";
    return ss.str();
}

std::string Find::help()
{
    return "find <seq name> <sub seq>.\n";
}

