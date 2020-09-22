//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_UI_H
#define CODE_UI_H


#include <string>

#include "../../controller/CallBack.h"

class UI
{
public:
    virtual void run(const CallBack&) = 0;
    virtual std::string input() = 0;
    virtual void output(std::string) = 0;

};



#endif //CODE_UI_H
