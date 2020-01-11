#pragma once

#include "IMonitorModule.hpp"

class HostUserModule : public IMonitorModule
{
private:
    std::string _moduleName;
    std::string _hostName;
    std::string _userName;

public:
    HostUserModule();
    HostUserModule(HostUserModule const& src);
    virtual ~HostUserModule();

    HostUserModule& operator=(HostUserModule const& src);

    std::string getData(const char* command);
    std::string getModuleName() const;
    std::string getHostName() const;
    std::string getModuleData() const;
};