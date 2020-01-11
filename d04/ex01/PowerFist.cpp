/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:30:22 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:30:23 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	std::cout << "Default constructor PowerFist called" << std::endl;
}

PowerFist::~PowerFist(void)
{
	std::cout << "Destructor PowerFist called" << std::endl;
}

PowerFist::PowerFist(PowerFist const& src)
{
	std::cout << "Copy constructor PowerFist called" << std::endl;
	*this = src;
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist& PowerFist::operator=(PowerFist const& src)
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setAPCost(src.getAPCost());
		this->setDamage(src.getDamage());
	}
	return *this;
}
