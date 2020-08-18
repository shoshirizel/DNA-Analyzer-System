//
// Created by shoshi on 8/18/20.
//

#include "parser.h"
#include <sstream>

std::list<std::string> Parser::parser(std::string line)
{
    char delimiter = ' ';
    std::list<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(line);
    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}


