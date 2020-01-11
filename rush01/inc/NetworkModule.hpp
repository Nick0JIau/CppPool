#pragma once

#include "IMonitorModule.hpp"

class NetworkModule : public IMonitorModule
{
private:
    std::string _moduleName;
    std::string _networkInfo;

public:
    NetworkModule();
    NetworkModule(NetworkModule const& src);
    virtual ~NetworkModule();

    NetworkModule& operator=(NetworkModule const& src);

    std::string getData(const char* command);
	std::string getModuleName() const;
	std::string getModuleData() const;
    void update();
};