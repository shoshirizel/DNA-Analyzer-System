//
// Created by shoshi on 9/21/20.
//

#ifndef CODE_FIND_H
#define CODE_FIND_H



#include "../icommand.h"


class Data;


class Find: public ICommand
{
public:
    Find(Data*);

    /*virtual*/ std::string action(const std::vector<std::string>&);
    /*virtual*/ std::string help();

private:
    Data* m_data;
};



#endif //CODE_FIND_H
