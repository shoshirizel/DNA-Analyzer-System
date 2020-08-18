//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_LOAD_H
#define CODE_LOAD_H


#include <icommand.h>
#include <data.h>
#include <iostream>

class Load: public ICommand
{
public:
    Load(Data*);
    /*virtual*/ void action(){std::cout<<"in Load\n";}
    /*virtual*/ void help();
} ;


#endif //CODE_LOAD_H
