#include "../inc/HostUserModule.hpp"

HostUserModule::HostUserModule()
{
	_moduleName = " * Host/User name * ";
	_hostName = "Hostname " + getData("hostname");
	_userName = "Username " + getData("echo $(id -un)");
}

HostUserModule::HostUserModule(HostUserModule const& src)
{
	*this = src;
}

HostUserModule::~HostUserModule() {}

HostUserModule& HostUserModule::operator=(HostUserModule const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

std::string HostUserModule::getData(const char* command)
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

std::string HostUserModule::getModuleName() const
{
	return _moduleName;
}

std::string HostUserModule::getHostName() const
{
	return _hostName;
}

std::string HostUserModule::getModuleData() const
{
	return _userName + _hostName;
}
