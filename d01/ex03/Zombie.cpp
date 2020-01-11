/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:28:59 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:29:01 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "Zombie is watching you" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName()
{
	const char* names[] = { "Tom", "Tim", "Andy", "Peter" };
	int random = std::rand() % 4;
	this->_name = names[random];
}

void Zombie::setType(std::string str)
{
	this->_type = str;
}
