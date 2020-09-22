//
// Created by shoshi on 9/21/20.
//

#include "Count.h"

#include <sstream>
#include "CountParams.h"


std::string Count::action(const IParameters& fatherArgs)
{
    const CountParams& args = dynamic_cast<const CountParams&>(fatherArgs);

    std::stringstream ss;
    size_t flag = args.m_seqToFindIn->count(*args.m_seqToBeFound);

    if (flag > 0)
        ss << flag;
    else
        ss << "Not Exist";

    return ss.str();
}

std::string Count::help()
{
    return "count: <seq_id> <sub_seq> return the number of instances of the sub-sequence within the larger sequence.\n";
}
