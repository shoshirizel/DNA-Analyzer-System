//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_NEW_H
#define CODE_NEW_H


#include "../icommand.h"
#include "../parameters/NewParams.h"

class Data;

class New: public ICommand
{
public:
    /*virtual*/ std::string action(const NewParams&);
    /*virtual*/ std::string help();
};



#endif //CODE_NEW_H
