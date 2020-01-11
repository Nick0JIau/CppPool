/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:30:12 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:30:13 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
	std::cout << "Default constructor PlasmaRifle called" << std::endl;
}

PlasmaRifle::~PlasmaRifle(void)
{
	std::cout << "Destructor PlasmaRifle called" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const& src)
{
	std::cout << "Copy constructor PlasmaRifle called" << std::endl;
	*this = src;
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& src)
{
	if (this != &src)
	{
		this->setName(src.getName());
		this->setAPCost(src.getAPCost());
		this->setDamage(src.getDamage());
	}
	return *this;
}
