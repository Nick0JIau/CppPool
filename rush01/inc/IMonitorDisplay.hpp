#pragma once

#include "ncurses.h"

struct Window {
	WINDOW *ptr;
	int x;
	int y;
	int width;
	int height;
};

class IMonitorDisplay
{
public:
    virtual ~IMonitorDisplay(){};
	virtual void displayNcursesView() = 0;
	
};