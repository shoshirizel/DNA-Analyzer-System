//
// Created by shoshi on 8/18/20.
//
#include <sstream>

#include "parser.h"
#include "../controller/errors/InvalidCommand.h"


std::vector<std::string> Parser::parser(std::string line)
{
    if (line == "")
        throw InvalidCommand();

    char delimiter = ' ';
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(line);

    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}


