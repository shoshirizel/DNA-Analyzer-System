//
// Created by shoshi on 8/18/20.
//

#include "manager/manager.h"
#include "interface/cli.h"

int main()
{
    Data d;
    Cli c;

    Manager m(&c, &d);
    m.start();
    m.run();
    m.exit();
    return 0;
}

