//
// Created by shoshi on 8/18/20.
//


#include "cli.h"

std::string Cli::input()
{
    std::cout << "cmd >>>";
    std:: string command;
    std::getline (std::cin, command);
    return command;
}
void Cli::output(std::string output)
{
    std::cout << output << "\n";
}
