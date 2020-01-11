/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:30:45 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:30:46 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& src)
{
	*this = src;
}

void RadScorpion::takeDamage(int damage)
{
	if (damage < 0 || getHP() <= 0)
		return;
	else if (getHP() < (damage - 3))
		setHP(0);
	else
		setHP(getHP() - (damage - 3));
}

RadScorpion& RadScorpion::operator=(RadScorpion const& src)
{
	if (this != &src)
	{
		this->setHP(src.getHP());
		this->setType(src.getType());
	}
	return *this;
}
