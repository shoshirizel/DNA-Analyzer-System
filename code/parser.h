//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_PARSER_H
#define CODE_PARSER_H


#include <usecase/load.h>
#include "manager.h"

class Parser
{
public:
    ICommand* parser(Data* data)
    {
        std::cout<<"in parser\n";
        return new Load(data);
    }
};


#endif //CODE_PARSER_H
