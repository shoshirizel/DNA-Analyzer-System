//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_NEW_H
#define CODE_NEW_H


#include "../../icommand.h"
#include "../../IParameters.h"

class Data;

class New: public ICommand
{
public:
    /*virtual*/ std::string action(const IParameters&);
    /*virtual*/ std::string help();
};



#endif //CODE_NEW_H