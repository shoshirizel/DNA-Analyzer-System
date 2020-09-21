//
// Created by shoshi on 9/16/20.
//

#ifndef CODE_SLICE_H
#define CODE_SLICE_H

#include "../icommand.h"

class Data;

class Slice: public ICommand
{
public:
    Slice(Data*);
    /*virtual*/ std::string action(const std::vector<std::string>&);
    /*virtual*/ std::string help();

private:
    Data* m_data;
};


#endif //CODE_SLICE_H
