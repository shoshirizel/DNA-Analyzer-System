//
// Created by shoshi on 8/18/20.
//


#include <vector>
#include "cli.h"
#include "../parser.h"
#include "../../controller/commands_container.h"

void Cli::run()
{
    while (true)
    {
        std::string input_ = input();

        std::vector<std::string> parse = Parser::parser(input_);

        if (parse[0] == "exit")
        {
            break;
        }

        std::string output_;

        try
        {
            ICommand* command = CommandsContainer::getCommand(parse[0]);
            output_ = command->action(parse);
        }

        catch (DnaException& err)
        {
            output_ = err.what();
        }

        output(output_);
    }
}

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
