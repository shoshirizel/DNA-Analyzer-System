//
// Created by shoshi on 8/18/20.
//

#include "manager/Controller.h"
#include "interface/cli.h"

int main()
{
    Data d;
    Cli c;

    Controller m(&c, &d);
    m.start();
    m.run();
    m.exit();
    return 0;
}

