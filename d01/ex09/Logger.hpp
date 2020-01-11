/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:52:10 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:52:11 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ctime>

class Logger
{
private:

	std::string	_fileName;
	std::string	makeLogEntry(std::string str);
	void		logToConsole(std::string const &str);
	void		logToFile(std::string const &str);

public:

	void		log(std::string const& dest, std::string const& message);

	Logger(std::string name);
	~Logger();
};
