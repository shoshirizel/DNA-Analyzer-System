//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_FINDALL_H
#define CODE_FINDALL_H

#include "../../icommand.h"

class Data;

class FindAll: public ICommand
{
public:
    /*virtual*/ std::string action(const IParameters&);
    /*virtual*/ std::string help();
};


#endif //CODE_FINDALL_H
