//
// Created by shoshi on 8/18/20.
//


#ifndef CODE_PARSER_H
#define CODE_PARSER_H


#include "icommand.h"
#include "data.h"
#include <list>

class Parser
{
public:
    static std::list<std::string> parser(std::string line);
};


#endif //CODE_PARSER_H
