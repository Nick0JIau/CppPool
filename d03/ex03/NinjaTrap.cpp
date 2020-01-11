/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:05:10 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:05:12 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << "Default Ninja constructor called" << std::endl;

	setName("Ninja default");
	setHitPoints(60);
	setMaxHitPoints(60);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(5);
	setArmorDamageReduction(0);
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "Constructor Ninja called" << std::endl;

	setName(name);
	setHitPoints(60);
	setMaxHitPoints(60);
	setEnergyPoints(120);
	setMaxEnergyPoints(120);
	setLevel(1);
	setMeleeAttackDamage(60);
	setRangedAttackDamage(5);
	setArmorDamageReduction(0);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor Ninja called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& src)
{
	std::cout << "Copy constructor Ninja called" << std::endl;
	*this = src;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const& rhs)
{
	if (this != &rhs)
	{
		setName(rhs.getName());
		setHitPoints(rhs.getHitPoints());
		setMaxHitPoints(rhs.getMaxHitPoints());
		setEnergyPoints(rhs.getEnergyPoints());
		setMaxEnergyPoints(rhs.getMaxEnergyPoints());
		setLevel(rhs.getLevel());
		setMeleeAttackDamage(rhs.getMeleeAttackDamage());
		setRangedAttackDamage(rhs.getRangedAttackDamage());
		setArmorDamageReduction(rhs.getArmorDamageReduction());
	}
	return *this;
}

void NinjaTrap::ninjaShoebox(FragTrap& target)
{
	std::cout << this->getName() << " Attack " << target.getName() << std::endl;
	std::cout << ".. < ' )" << std::endl;
	std::cout << "......//___" << std::endl;
	std::cout << "~~(_____ >" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& target)
{
	std::cout << " ninjaShoebox Scav attack :" << std::endl;
	std::cout << this->getName() << " Attack " << target.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
	std::cout << " ninjaShoebox Ninja attack :" << std::endl;
	std::cout << this->getName() << " Attack " << target.getName() << std::endl;
}
