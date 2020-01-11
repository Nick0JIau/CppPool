/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:21:05 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:37:03 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	replace(std::string fileName, std::string s1, std::string s2)
{
	std::ifstream	from_file;
	std::ofstream	to_file;
	std::string		line;
	size_t			start = 0;

	from_file.open(fileName, std::ios::in);
	to_file.open(fileName + ".replace", std::ios::out | std::ios::trunc);
	if (from_file.is_open() && to_file.is_open())
	{
		while (std::getline(from_file, line))
		{
			start = 0;
			while ((start = line.find(s1, start)) != std::string::npos)
				line.replace(start, s2.size(), s2);
			to_file << line << std::endl;
		}
		from_file.close();
		to_file.close();
	}
	else
	{
		std::cout << "Can`t open file" << std::endl;
		return ;
	}
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		replace(av[1], av[2], av[3]);
	}
	else
	{
		std::cout << "Usage: ./replace \"filename\" \"text to replace\" \"new text\"" << std::endl;
		return 0;
	}
	return 0;
}
