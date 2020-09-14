//
// Created by shoshi on 9/14/20.
//

#ifndef CODE_COMMANDNOTFOUND_H
#define CODE_COMMANDNOTFOUND_H

#include "DnaException.h"

class CommandNotFound: public DnaException
{
public:
    CommandNotFound();
};

inline CommandNotFound::CommandNotFound() :DnaException("Command not found."){}


#endif //CODE_COMMANDNOTFOUND_H
