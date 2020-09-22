//
// Created by shoshi on 9/22/20.
//

#ifndef CODE_COLON_H
#define CODE_COLON_H

#include <string>

class Colon
{
public:
    Colon(std::string);
    std::string m_name;
};

inline Colon::Colon(std::string name) :m_name(name){}

#endif //CODE_COLON_H
