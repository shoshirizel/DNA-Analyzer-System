//
// Created by shoshi on 9/14/20.
//

#ifndef CODE_INVALIDCOMMAND_H
#define CODE_INVALIDCOMMAND_H

#include "DnaException.h"


class InvalidCommand: public DnaException
{
public:
    InvalidCommand();
};


inline InvalidCommand::InvalidCommand(): DnaException("Invalid command, type the help to know which parameters you need.") {}

#endif //CODE_INVALIDCOMMAND_H
