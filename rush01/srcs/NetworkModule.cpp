#include "../inc/NetworkModule.hpp"

NetworkModule::NetworkModule()
{
    _moduleName = " * Network module * ";
    _networkInfo = getData("top -l 1 -i 1 -n 0 | awk '/packets:/ {print $3;}'");
}

NetworkModule::NetworkModule(NetworkModule const& src)
{
    *this = src;
}

NetworkModule::~NetworkModule() {}

NetworkModule& NetworkModule::operator=(NetworkModule const& src)
{
    if (this != &src)
        *this = src;
    return *this;
}

std::string NetworkModule::getData(const char* command)
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

std::string NetworkModule::getModuleName() const
{
	return _moduleName;
}

std::string NetworkModule::getModuleData() const
{
	return _networkInfo;
}

void NetworkModule::update()
{
	_networkInfo.clear();
	_networkInfo = getData("top -l 1 -i 1 -n 0 | awk '/packets:/ {print $3;}'");
}