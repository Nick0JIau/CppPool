/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:51:59 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:52:02 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <fstream>

std::string Logger::makeLogEntry(std::string str)
{
	time_t		now = time(0);
	struct tm	tstruct;
	char		buf[512];

	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%d.%m.%Y %X ", &tstruct);
	return (buf + str);
}

void Logger::logToConsole(std::string const &str)
{
	std::cout << this->makeLogEntry(str) << std::endl;
}

void Logger::logToFile(std::string const &str)
{
	std::ofstream	to_file;

	to_file.open(this->_fileName, std::ios::app);
	if (to_file.is_open())
	{
		to_file << this->makeLogEntry(str) << std::endl;
	}
	else
	{
		std::cout << "Can`t open file" << std::endl;
		return ;
	}
}

void Logger::log(std::string const& dest, std::string const& message)
{
	std::string	log[] = 
	{
		"logToConsole",
		"logToFile"
	};
	void (Logger::*ptr[])(std::string const& ) = 
	{
		&Logger::logToConsole,
		&Logger::logToFile
	};
	for (int i = 0; i != 2; ++i)
	{
		if (log[i] == dest)
		{
			(this->*ptr[i])(message);
			break;
		}
	}
}

Logger::Logger(std::string name) : _fileName(name) {}

Logger::~Logger() {}
