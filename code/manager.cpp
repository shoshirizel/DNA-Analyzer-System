#include "manager.h"
#include "parser.h"
#include <list>

Manager::Manager(ICli *cli, Data *dnaData): m_cli(cli), m_dnaData(dnaData){}

void Manager::run()
{
    std::string input = m_cli->input();
//    Parser parser;
    std::list<std::string> parse = Parser::parser(input);
//    ICommand* command = m_parser->parser(m_cli->input()) ;
//    command->action();
    m_cli->output("output");
}
