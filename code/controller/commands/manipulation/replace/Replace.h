//
// Created by shoshi on 9/21/20.
//

#ifndef CODE_REPLACE_H
#define CODE_REPLACE_H

#include "../../icommand.h"

class Data;

class Replace: public ICommand
{
public:
    /*virtual*/ std::string action(const IParameters&);
    /*virtual*/ std::string help();
};


#endif //CODE_REPLACE_H
