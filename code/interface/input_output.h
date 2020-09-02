//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_INPUT_OUTPUT_H
#define CODE_INPUT_OUTPUT_H


#include <string>

class ICli
{
public:
    virtual std::string input() = 0;
    virtual void output(std::string) = 0;

};



#endif //CODE_INPUT_OUTPUT_H
