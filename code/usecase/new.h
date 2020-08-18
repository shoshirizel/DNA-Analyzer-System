//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_NEW_H
#define CODE_NEW_H


#include <icommand.h>
#include <data.h>

class New: public ICommand
{

public:
    New(Data,std::string name);
    /*virtual*/ void action(){std::cout<<"in New\n";}
    /*virtual*/ void help();

private:
    static size_t s_id;
    static size_t s_name;
};



#endif //CODE_NEW_H
