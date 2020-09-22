//
// Created by shoshi on 9/21/20.
//

#ifndef CODE_LEN_H
#define CODE_LEN_H

#include "../../icommand.h"

class Data;

class Len: public ICommand
{
public:
    /*virtual*/ std::string action(const IParameters&);
    /*virtual*/ std::string help();
};


#endif //CODE_LEN_H
