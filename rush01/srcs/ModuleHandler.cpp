#include "../inc/ModuleHandler.hpp"
#include <sstream>

void *		ModuleHandler::_mlx = NULL;
void *		ModuleHandler::_win = NULL;

ModuleHandler::ModuleHandler() {}

ModuleHandler::ModuleHandler(ModuleHandler const& src)
{
    *this = src;
}

ModuleHandler::~ModuleHandler() {}

void ModuleHandler::initMLX()
{
	std::string name = "ft_gkrellm";
	_mlx = mlx_init();
    _win = mlx_new_window(_mlx, 1300, 800, const_cast<char*> (name.c_str()));
    mlx_clear_window (_mlx, _win);
    mlx_hook(_win, 17, 1L << 17, exit_x, const_cast<char*> (name.c_str()));
    mlx_loop_hook(_mlx, displayAllMLX, NULL);
	mlx_loop(_mlx);
}


void ModuleHandler::showNcurses()
{
	initscr();
    start_color();
    noecho();
    nodelay(stdscr, TRUE);
    curs_set(0);
    keypad(stdscr, TRUE);
    createModuleWindow(&_cpumodule,0);
    createModuleWindow(&_datetimemodule,1);
    createModuleWindow(&_hostusermodule,2);
    createModuleWindow(&_networkmodule,3);
    createModuleWindow(&_osinfomodule,4);
    createModuleWindow(&_rammodule,5);
    while(true){
        displayNcursesView();
		sleep(1);
    }
    endwin();
}

ModuleHandler& ModuleHandler::operator=(ModuleHandler const& src)
{
    if (this != &src)
        *this = src;
    return *this;
}

void ModuleHandler::displayNcursesView()
{
    _datetimemodule.update();
    _networkmodule.update();
    init_color(COLOR_CYAN, 500, 500, 500);
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
    displayModule(&_cpumodule,0);
    displayModule(&_datetimemodule,1);
    displayModule(&_hostusermodule,2);
    displayModule(&_networkmodule,3);
    displayModule(&_osinfomodule,4);
    displayModule(&_rammodule,5);
}

void ModuleHandler::createModuleWindow(IMonitorModule *module, int i)
{
    windows[i].x = 0;
	windows[i].y = i * 5 + 1;
	windows[i].width = COLS;
	windows[i].height = 5;
	windows[i].ptr = newwin(windows[i].height, windows[i].width, windows[i].y, windows[i].x);
}

void ModuleHandler::displayModule(IMonitorModule *module, int i)
{
	wattron(windows[i].ptr, COLOR_PAIR(1));
	wmove(windows[i].ptr, 0, 0);
	whline(windows[i].ptr, ACS_HLINE, COLS);
    wmove(windows[i].ptr, 0, 2);
	waddstr(windows[i].ptr, module->getModuleName().c_str());
	wattroff(windows[i].ptr, COLOR_PAIR(1));
    wmove(windows[i].ptr, 1, 0);
    waddstr(windows[i].ptr, module->getModuleData().c_str());
    wrefresh(windows[i].ptr);
    redrawwin(windows[i].ptr);
}

int ModuleHandler::displayAllMLX()
{
    mlx_clear_window (_mlx, _win);

    CPUModule cpum;
    DateTimeModule dtm;
    HostUserModule hum;
    NetworkModule nm;
    OSInfoModule osim;
    RAMModule ramm;

    displayMLX(&cpum,0, 16711680);
    displayMLX(&dtm,1, 8069595);
    displayMLX(&hum,2, 16711935);
    displayMLX(&nm,3, 13158400);
    displayMLX(&osim,4,16743680);
    displayMLX(&ramm,5, 32045);
    napms(600);
    return 1;
}

void ModuleHandler::displayMLX(IMonitorModule *module, int j, int color)
{
    int x = (j % 2 == 0) ? 25 : 650;
    int y = (j % 2 == 0) ? 120 * j + 25: 120 * (j - 1) + 25;
    mlx_string_put(_mlx, _win, x, y, color, const_cast<char*>(module->getModuleName().c_str()));
    std::stringstream f;   
    std::string s;
    int k = 0;
    f << module->getModuleData();
    while (getline(f, s, '\n')) {
        mlx_string_put(_mlx, _win, x, y + 40 * (++k), color , const_cast<char*> (s.c_str()));
    }
}

CPUModule& ModuleHandler::getCPUModule( void )
{
    return this->_cpumodule;
}

DateTimeModule& ModuleHandler::getDateTimeModule( void )
{
    return this->_datetimemodule;
}

HostUserModule& ModuleHandler::getHostUserModule( void )
{
    return this->_hostusermodule;
}

NetworkModule& ModuleHandler::getNetworkModule( void )
{
    return this->_networkmodule;
}

OSInfoModule& ModuleHandler::getOSInfoModule( void )
{
    return this->_osinfomodule;
}

RAMModule& ModuleHandler::getRAMModule( void )
{
    return this->_rammodule;
}

void *		ModuleHandler::getMlx(void) 
{
	return _mlx;
}

void *		ModuleHandler::getWin(void) 
{
	return _win;
}

int		ModuleHandler::exit_x(void)
{
	exit(1);
}
