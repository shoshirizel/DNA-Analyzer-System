#include "Controller.h"
#include "commands_container.h"

Controller::Controller(UI *cli, Data *dnaData): m_cli(cli), m_dnaData(dnaData)
{
    CommandsContainer::initMapCommand(m_dnaData);
}

void Controller::run()
{
    m_cli->run();
}

