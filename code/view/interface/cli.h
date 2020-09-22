//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_CLI_H
#define CODE_CLI_H


#include <iostream>
#include "UI.h"


class Cli : public UI
{
public:
    /*virtual*/ void run(const CallBack&);
    /*virtual*/ std::string input();
    /*virtual */ void output(std::string);

};




#endif //CODE_CLI_H
