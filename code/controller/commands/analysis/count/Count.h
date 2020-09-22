//
// Created by shoshi on 9/21/20.
//

#ifndef CODE_COUNT_H
#define CODE_COUNT_H

#include "../../icommand.h"

class Data;

class Count: public ICommand
{
public:
    /*virtual*/ std::string action(const IParameters&);
    /*virtual*/ std::string help();
};



#endif //CODE_COUNT_H
