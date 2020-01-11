/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:28:18 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:28:20 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void)
{
	std::cout << "ZombieEvent Constructor" << std::endl;
}

ZombieEvent::~ZombieEvent(void)
{
	std::cout << "ZombieEvent Destructor" << std::endl;
}

void	ZombieEvent::setZombieType(std::string type)
{
	std::cout << "Method 'setZombieType' run" << std::endl;
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	std::cout << "Method 'newZombie' run" << std::endl;
	Zombie* newZombie = new Zombie(name, this->_type);
	return newZombie;
}
