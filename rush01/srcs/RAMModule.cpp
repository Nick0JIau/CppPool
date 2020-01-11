#include "../inc/RAMModule.hpp"

RAMModule::RAMModule()
{
    _moduleName = " * RAM module * ";
    _ramInfo = getData("system_profiler SPHardwareDataType | grep Mem | sed 's/^ *//'");
}

RAMModule::RAMModule(RAMModule const& src)
{
    *this = src;
}

RAMModule::~RAMModule() {}

RAMModule& RAMModule::operator=(RAMModule const& src)
{
    if (this != &src)
        *this = src;
    return *this;
}

std::string RAMModule::getData(const char* command)
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

std::string RAMModule::getModuleName() const
{
	return _moduleName;
}

std::string RAMModule::getModuleData() const
{
	return _ramInfo;
}