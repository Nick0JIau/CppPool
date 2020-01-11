#include "../inc/OSInfoModule.hpp"

OSInfoModule::OSInfoModule()
{
    _moduleName = " * OS Info * ";
    _osInfo = getData("sw_vers");
}

OSInfoModule::OSInfoModule(OSInfoModule const& src)
{
    *this = src;
}

OSInfoModule::~OSInfoModule() {}

OSInfoModule& OSInfoModule::operator=(OSInfoModule const& src)
{
    if (this != &src)
        *this = src;
    return *this;
}

std::string OSInfoModule::getData(const char* command)
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

std::string OSInfoModule::getModuleName() const
{
	return _moduleName;
}

std::string OSInfoModule::getModuleData() const
{
    return _osInfo;
}
