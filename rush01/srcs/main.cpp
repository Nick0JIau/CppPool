#include <curses.h>
#include <iostream>
#include <limits>
#include <map>
#include <sys/sysctl.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <stdio.h>
#include "ncurses.h"

#include "../inc/ModuleHandler.hpp"

int main(int ac, char **av)
{   
    ModuleHandler mh = ModuleHandler();
    if (ac == 1) {
        mh.showNcurses();
    } else if (ac == 2 && std::string(av[1]) == "vis"){
        ModuleHandler mh = ModuleHandler();
        mh.initMLX();
    } else {
        std::cout << "Usage: " << std::endl <<
        "text view: ./ft_gkrellm" << std::endl <<
        "graphic view: ./ft_gkrellm vis" << std::endl;
    }
    return 0;
}
