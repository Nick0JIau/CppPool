#pragma once

#include "IMonitorModule.hpp"

class DateTimeModule : public IMonitorModule
{
private:
	std::string _moduleName;
	std::string _timeInfo;

public:
	DateTimeModule();
	DateTimeModule(DateTimeModule const& src);
	virtual ~DateTimeModule();

	DateTimeModule& operator=(DateTimeModule const& src);

	std::string getData(const char* command);
	std::string getModuleName() const;
	std::string getModuleData() const;
	void update();
};