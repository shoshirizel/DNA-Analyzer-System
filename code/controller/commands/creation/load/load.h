//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_LOAD_H
#define CODE_LOAD_H


#include "../../icommand.h"

class Data;

class Load: public ICommand
{
public:
    /*virtual*/ std::string action(const IParameters&);
    /*virtual*/ std::string help();
} ;


#endif //CODE_LOAD_H
