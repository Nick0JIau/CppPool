/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:05:23 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:05:24 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default Scav constructor called" << std::endl;

	setName("Petryha default");
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(50);
	setMaxEnergyPoints(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Constructor Scav called" << std::endl;

	setName(name);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(50);
	setMaxEnergyPoints(50);
	setLevel(1);
	setMeleeAttackDamage(20);
	setRangedAttackDamage(15);
	setArmorDamageReduction(3);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Scav called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	std::cout << "Copy constructor Scav called" << std::endl;
	*this = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
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


void ScavTrap::challengeNewcomer(void)
{
	if (this->getEnergyPoints() >= 25)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 25);
		std::srand(std::time(nullptr));
		int index = std::rand() % 5;
		typedef void (ScavTrap:: * ptr[5])(void);
		ptr mptr = { &ScavTrap::iceBucketChallenge, &ScavTrap::runChallenge , &ScavTrap::sleepChallenge, &ScavTrap::wotChallenge, &ScavTrap::hotChilliChallenge };
		(this->*mptr[index])();
	}
	else
	{
		std::cout << "Energy points is low, you need 25 and more" << std::endl;
		if (this->getEnergyPoints() <= 75)
			this->setEnergyPoints(this->getEnergyPoints() + 25);
	}
}

void ScavTrap::iceBucketChallenge(void)
{
	std::cout << "Ice Bucket Challenge" << std::endl;
}

void ScavTrap::runChallenge(void)
{
	std::cout << "Run Challenge" << std::endl;
}

void ScavTrap::sleepChallenge(void)
{
	std::cout << "Sleep Challenge" << std::endl;
}

void ScavTrap::wotChallenge(void)
{
	std::cout << "World of Tanks Challenge" << std::endl;
}

void ScavTrap::hotChilliChallenge(void)
{
	std::cout << "Hot Chilli Challenge" << std::endl;
}
