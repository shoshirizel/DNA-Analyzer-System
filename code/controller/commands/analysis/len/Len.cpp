//
// Created by shoshi on 9/21/20.
//



#include <sstream>

#include "Len.h"
#include "LenParams.h"


std::string Len::action(const IParameters& fatherArgs)
{
    const LenParams& args = dynamic_cast<const LenParams&>(fatherArgs);

    std::stringstream ss;
    ss << args.m_seq->length();
    return ss.str();
}

std::string Len::help()
{
    return "len: <seq_id> prints the length of the sequence.\n";
}
