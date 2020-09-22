//
// Created by shoshi on 9/16/20.
//

#ifndef CODE_SLICE_H
#define CODE_SLICE_H

#include "../../icommand.h"

class Data;

class Slice: public ICommand
{
public:
    /*virtual*/ std::string action(const IParameters&);
    /*virtual*/ std::string help();
};


#endif //CODE_SLICE_H