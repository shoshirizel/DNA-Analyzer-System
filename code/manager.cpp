#include "manager.h"


Manager::Manager(ICli *cli, Data *dnaData): m_cli(cli), m_dnaData(dnaData){}

void Manager::run()
{
    //std::string str=m_cli->input();
//    ICommand* command = m_parser->parser(m_cli->input()) ;
//    command->action();
    m_cli->output("output");
}
