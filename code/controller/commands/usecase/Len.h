//
// Created by shoshi on 9/21/20.
//

#ifndef CODE_LEN_H
#define CODE_LEN_H

#include "../icommand.h"

class Data;

class Len: public ICommand
{
public:
    Len(Data*);
    /*virtual*/ std::string action(const std::vector<std::string>&);
    /*virtual*/ std::string help();
private:
    Data* m_data;
};


#endif //CODE_LEN_H
