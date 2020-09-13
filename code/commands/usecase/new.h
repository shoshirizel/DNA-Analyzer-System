//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_NEW_H
#define CODE_NEW_H


#include "../icommand.h"

class Data;

class New: public ICommand
{
public:
    New(Data*);

    /*virtual*/ std::string action(const std::vector<std::string>&);
    /*virtual*/ void help(){}

private:
    Data* m_data;
};



#endif //CODE_NEW_H
