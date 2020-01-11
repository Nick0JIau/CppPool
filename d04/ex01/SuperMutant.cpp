/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:30:57 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:31:00 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const& src)
{
	*this = src;
}

void SuperMutant::takeDamage(int damage)
{
	if (damage < 0 || getHP() <= 0)
		return;
	else if (getHP() < (damage - 3))
		setHP(0);
	else
		setHP(getHP() - (damage - 3));
}

SuperMutant& SuperMutant::operator=(SuperMutant const& src)
{
	if (this != &src)
	{
		this->setHP(src.getHP());
		this->setType(src.getType());
	}
	return *this;
}
