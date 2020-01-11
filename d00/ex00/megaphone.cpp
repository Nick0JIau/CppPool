/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 11:15:22 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 15:30:59 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_capitalizer(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return c;
}

int		main(int ac, char** av)
{
	int i = 0;
	int j = -1;

	if (ac > 1)
	{
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
				std::cout << ft_capitalizer(av[i][j]);
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
