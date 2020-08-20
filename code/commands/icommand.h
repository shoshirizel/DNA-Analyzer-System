//
// Created by shoshi on 8/18/20.
//

#ifndef CODE_ICOMMAND_H
#define CODE_ICOMMAND_H


#include <string>
#include <vector>

class ICommand
{
public:
    virtual ~ICommand(){}
    virtual std::string action(std::vector<std::string>&)=0;
    virtual void help()=0;
};


#endif //CODE_ICOMMAND_H
