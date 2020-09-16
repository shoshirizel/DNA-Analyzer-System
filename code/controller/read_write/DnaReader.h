//
// Created by shoshi on 8/20/20.
//

#ifndef CODE_DNAREADER_H
#define CODE_DNAREADER_H


#include <fstream>
class DNA;

class DnaReader
{
public:
    DnaReader(std::string name);
    std::string read();
    ~DnaReader();

private:
    std::ifstream myfile;
};


#endif //CODE_DNAREADER_H
