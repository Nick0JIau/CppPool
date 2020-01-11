#include "../inc/DateTimeModule.hpp"

DateTimeModule::DateTimeModule()
{
    _moduleName = " * Time and Date * ";
    _timeInfo = getData("date");
}

DateTimeModule::DateTimeModule(DateTimeModule const& src)
{
    *this = src;
}

DateTimeModule::~DateTimeModule() {}

DateTimeModule& DateTimeModule::operator=(DateTimeModule const& src)
{
    if (this != &src)
        *this = src;
    return *this;
}

std::string DateTimeModule::getData(const char* command)
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

std::string DateTimeModule::getModuleName() const
{
	return _moduleName;
}

std::string DateTimeModule::getModuleData() const
{
	return _timeInfo;
}

void DateTimeModule::update()
{
	_timeInfo.clear() ;
    _timeInfo = getData("date");
}
