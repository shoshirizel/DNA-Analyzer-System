//
// Created by shoshi on 8/18/20.
//


#ifndef CODE_PARSER_H
#define CODE_PARSER_H


#include "../controller/commands/icommand.h"
#include "../model/dna_data/data.h"

class Parser
{
public:
    static std::vector<std::string> parser(std::string line);
};


#endif //CODE_PARSER_H
