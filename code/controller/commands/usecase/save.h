//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_SAVE_H
#define CODE_SAVE_H

#include <iostream>
#include "../icommand.h"
#include "../../../model/dna_data/data.h"

class Save: public ICommand
{
public:
    Save(Data*);
    /*virtual*/ std::string action(const std::vector<std::string>&);
    /*virtual*/ std::string help();

private:
    Data* m_data;
};


#endif //CODE_SAVE_H
