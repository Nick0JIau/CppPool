#pragma once

#include "IMonitorModule.hpp"

class RAMModule : public IMonitorModule
{
private:
    std::string _moduleName;
    std::string _ramInfo;

public:
    RAMModule();
    RAMModule(RAMModule const& src);
    virtual ~RAMModule();

    RAMModule& operator=(RAMModule const& src);

	std::string getData(const char* command);
	std::string getModuleName() const;
	std::string getModuleData() const;
};