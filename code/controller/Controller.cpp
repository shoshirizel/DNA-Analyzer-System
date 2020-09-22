#include "Controller.h"
#include "commands_container.h"

Controller::Controller(UI *cli, Data *dnaData): m_cli(cli), m_dnaData(dnaData), m_callBack(new CallBack)
{
    CommandsContainer::initMapCommand(m_dnaData);
}

Controller::~Controller() {delete m_callBack;}

void Controller::run()
{
    m_cli->run(*m_callBack);
}

