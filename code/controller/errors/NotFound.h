//
// Created by shoshi on 9/15/20.
//

#ifndef CODE_NOTFOUND_H
#define CODE_NOTFOUND_H

#include "DnaException.h"

class NotFound: public DnaException
{
public:
    NotFound();
};

inline NotFound::NotFound(): DnaException("The parameter wasnt found.") {}


#endif //CODE_NOTFOUND_H
