//
// Created by shoshi on 9/21/20.
//

#ifndef CODE_FIND_H
#define CODE_FIND_H

#include "../../icommand.h"

class Data;

class Find: public ICommand
{
public:
    /*virtual*/ std::string action(const IParameters&);
    /*virtual*/ std::string help();
};



#endif //CODE_FIND_H
