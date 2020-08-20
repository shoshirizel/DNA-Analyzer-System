//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_CLI_H
#define CODE_CLI_H


#include <iostream>
#include "icli.h"

class Cli : public ICli
{
public:
    /*virtual*/ std::string input();
    /*virtual */ void output(std::string);

};




#endif //CODE_CLI_H
