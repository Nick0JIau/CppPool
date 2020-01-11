#pragma once

#include <iostream>

class IMonitorModule
{
public:
    virtual ~IMonitorModule() {};
    virtual std::string getModuleData() const = 0;
   // virtual std::string getData(const char* command) = 0;
    virtual std::string getModuleName() const = 0;
};