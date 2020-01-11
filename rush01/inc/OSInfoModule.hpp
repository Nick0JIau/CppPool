#pragma once

#include "IMonitorModule.hpp"

class OSInfoModule : public IMonitorModule
{
private:
	std::string _moduleName;
	std::string _osInfo;

public:
	OSInfoModule();
	OSInfoModule(OSInfoModule const& src);
	virtual ~OSInfoModule();

	OSInfoModule& operator=(OSInfoModule const& src);

    std::string getData(const char* command);
	std::string getModuleName() const;
	std::string getModuleData() const;
};