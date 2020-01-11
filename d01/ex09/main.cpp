/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:52:16 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:38:08 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Logger.hpp"

int main()
{
	Logger	logg("log");

	logg.log("logToConsole", "First log to console");
	logg.log("logToConsole", "Second log to console");
	logg.log("logToFile", "First log to file");
	logg.log("logToFile", "Second log to file");
	logg.log("unknown", "qwerty");
	return 0;
}
