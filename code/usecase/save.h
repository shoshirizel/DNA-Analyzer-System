//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_SAVE_H
#define CODE_SAVE_H

#include <iostream>
#include <icommand.h>
#include <data.h>

class Save: public ICommand
{
public:
    Save(Data*);
    /*virtual*/ void action(){std::cout<<"in Save\n";}
    /*virtual*/ void help();
};


#endif //CODE_SAVE_H
