//
// Created by shoshi on 8/18/20.
//

#include "controller/Controller.h"
#include "view/interface/cli.h"

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

