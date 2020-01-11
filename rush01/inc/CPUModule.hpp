#pragma once

#include "IMonitorModule.hpp"

class CPUModule : public IMonitorModule
{
private:
	std::string _moduleName;
	std::string _cpuInfo;

public:
	CPUModule();
	CPUModule(CPUModule const& src);
	virtual ~CPUModule();

	CPUModule& operator=(CPUModule const& src);

	std::string getData(const char* command);
	std::string getModuleName() const;
	std::string getModuleData() const;
};