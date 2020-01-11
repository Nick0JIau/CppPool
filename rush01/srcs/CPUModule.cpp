#include "../inc/CPUModule.hpp"
#include "string"

CPUModule::CPUModule()
{
    _moduleName = " * CPU * ";
    _cpuInfo = getData("sysctl -a | grep brand");
	_cpuInfo.erase(0, 26);
	_cpuInfo.erase(39, 39);
	_cpuInfo += "\nCores: " + getData("getconf _NPROCESSORS_ONLN");
}

CPUModule::CPUModule(CPUModule const& src)
{
    *this = src;
}

CPUModule::~CPUModule() {}

CPUModule& CPUModule::operator=(CPUModule const& src)
{
    if (this != &src)
        *this = src;
    return *this;
}

std::string CPUModule::getData(const char* command)
{
	std::string res;
	char 		line[500];

	try
	{
		FILE* input = popen(command, "r");
		while (!feof(input))
			if (fgets(line, 500, input))
				res += line;
		pclose(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return res;
}

std::string CPUModule::getModuleName() const
{
	return _moduleName;
}

std::string CPUModule::getModuleData() const
{
	return _cpuInfo;
}