//
// Created by shoshi on 9/14/20.
//

#ifndef CODE_OPENFILEERROR_H
#define CODE_OPENFILEERROR_H

#include "DnaException.h"


class OpenFileError: public DnaException
{
public:
    OpenFileError();
};

inline OpenFileError::OpenFileError(): DnaException("Can not open this file.") {}


#endif //CODE_OPENFILEERROR_H
