//
// Created by shoshi on 6/1/20.
//

#ifndef DNA_INVALIDDNA_H
#define DNA_INVALIDDNA_H


#include <stdexcept>

class InvalidDna: public std::invalid_argument
{
public:
    InvalidDna(std::string);
};

inline InvalidDna::InvalidDna(std::string e): std::invalid_argument(e) {}


#endif //DNA_INVALIDDNA_H
