#pragma once

#include <algorithm>
#include <vector>
#include "mlx.h"
#include <unistd.h>

#include "IMonitorDisplay.hpp"
#include "IMonitorModule.hpp"
#include "CPUModule.hpp"
#include "DateTimeModule.hpp"
#include "HostUserModule.hpp"
#include "NetworkModule.hpp"
#include "OSInfoModule.hpp"
#include "RAMModule.hpp"

class ModuleHandler : public IMonitorDisplay 
{
public:

    ModuleHandler();
    ModuleHandler(ModuleHandler const& src);
    ~ModuleHandler();
    ModuleHandler& operator=(ModuleHandler const& src);

    void showNcurses();
    virtual void displayNcursesView();
    void displayModule(IMonitorModule *module, int i);
    void createModuleWindow(IMonitorModule *module, int i);
    void displayWXView();
    
    CPUModule  &getCPUModule( void );
    DateTimeModule &getDateTimeModule( void );
    HostUserModule &getHostUserModule( void );
    NetworkModule &getNetworkModule( void );
    OSInfoModule &getOSInfoModule( void );
    RAMModule &getRAMModule( void );

    void initMLX();
    static int  displayAllMLX();
    static void displayMLX(IMonitorModule *module, int j, int color);
    static void *	getMlx(void);
	static void *	getWin(void);
    static int		exit_x(void);

private:

    static void * _mlx;
	static void * _win;
    Window windows[6];
    CPUModule _cpumodule;
    DateTimeModule _datetimemodule;
    HostUserModule _hostusermodule;
    NetworkModule _networkmodule;
    OSInfoModule _osinfomodule;
    RAMModule _rammodule;
};
