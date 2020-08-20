//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_ICLI_H
#define CODE_ICLI_H


#include <string>

class ICli
{
public:
    virtual std::string input() = 0;
    virtual void output(std::string) = 0;

};



#endif //CODE_ICLI_H
