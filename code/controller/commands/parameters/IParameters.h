//
// Created by shoshi on 9/21/20.
//

#ifndef CODE_IPARAMETERS_H
#define CODE_IPARAMETERS_H

#include <vector>
#include <string>

class IParameters
{
public:
    virtual void init(const std::vector<std::string>&) = 0;

protected:
    virtual void validateInput(const std::vector<std::string>&) = 0;
};



#endif //CODE_IPARAMETERS_H
