/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:29:15 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:29:17 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) : _number(n)
{
	if (n > 0)
	{
		this->_zombie = new Zombie[n];
		for (int i = 0; i != n; ++i)
		{
			this->_zombie[i].setType("Horde");
			this->_zombie[i].setName();
		}
	}
}

ZombieHorde::ZombieHorde() {}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Destructor called" << std::endl;
	delete[] this->_zombie;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i != this->_number; ++i)
		this->_zombie[i].announce();
}
