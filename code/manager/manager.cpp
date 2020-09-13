#include "manager.h"
#include "parser.h"
#include "commands_container.h"


Manager::Manager(ICli *cli, Data *dnaData): m_cli(cli), m_dnaData(dnaData)
{
    CommandsContainer::initMapCommand(m_dnaData);
}

void Manager::run()
{
    while (1)
    {
        std::string input = m_cli->input();
        std::vector<std::string> parse = Parser::parser(input);

        if (parse[0] == "exit")
        {
            break;
        }
        ICommand* command = CommandsContainer::get_command(parse[0]);
        std::string output = command->action(parse);
        m_cli->output(output);
    }

}

