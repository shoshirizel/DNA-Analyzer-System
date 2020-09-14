//
// Created by shoshi on 9/14/20.
//

#ifndef CODE_DNAEXCEPTION_H
#define CODE_DNAEXCEPTION_H

#include  <stdexcept>


class DnaException: public std::runtime_error
{
public:
    DnaException(std::string);
};

inline DnaException::DnaException(std::string err): std::runtime_error(err) {}


#endif //CODE_DNAEXCEPTION_H
