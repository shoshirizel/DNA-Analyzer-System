#include "Controller.h"
#include "parser.h"
#include "commands_container.h"
#include "errors/DnaException.h"


Controller::Controller(ICli *cli, Data *dnaData): m_cli(cli), m_dnaData(dnaData)
{
    CommandsContainer::initMapCommand(m_dnaData);
}

void Controller::run()
{
    while (1)
    {
        std::string input = m_cli->input();
        std::vector<std::string> parse = Parser::parser(input);

        if (parse[0] == "exit")
        {
            break;
        }

        std::string output;

        try
        {
            ICommand* command = CommandsContainer::getCommand(parse[0]);
            output = command->action(parse);
        }

        catch (DnaException& err)
        {
            output = err.what();
        }

        m_cli->output(output);
    }

}

