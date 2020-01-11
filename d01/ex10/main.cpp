/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:52:35 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:39:14 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	file_to_console(char** av)
{
	std::ifstream	from_file;
	std::string		line;
	int				i = 0;

	while (av[++i])
	{
		from_file.open(av[i], std::ios::in);
		if (from_file.is_open())
		{
			while (std::getline(from_file, line))
				std::cout << line << std::endl;
			from_file.close();
		}
		else
		{
			std::cout << "Can`t open file" << std::endl;
			break;
		}
	}
}

void	console(void)
{
	std::string	str;

	while(1)
	{
		if (!(std::cin >> str))
			return;
		std::cout << str << std::endl;
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
		console();
	else
		file_to_console(av);
	return 0;
}
