/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:09:56 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:09:57 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : FragTrap(), NinjaTrap()
{
	std::cout << "Default Super constructor called" << std::endl;

	FragTrap::setName("Super Bodya default");
	FragTrap::setHitPoints(100);
	FragTrap::setMaxHitPoints(100);
	FragTrap::setEnergyPoints(120);
	FragTrap::setMaxEnergyPoints(120);
	FragTrap::setLevel(1);
	FragTrap::setMeleeAttackDamage(60);
	FragTrap::setRangedAttackDamage(20);
	FragTrap::setArmorDamageReduction(5);
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap()
{
	std::cout << "Constructor Super called" << std::endl;

	FragTrap::setName(name);
	FragTrap::setHitPoints(100);
	FragTrap::setMaxHitPoints(100);
	FragTrap::setEnergyPoints(120);
	FragTrap::setMaxEnergyPoints(120);
	FragTrap::setLevel(1);
	FragTrap::setMeleeAttackDamage(60);
	FragTrap::setRangedAttackDamage(20);
	FragTrap::setArmorDamageReduction(5);
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor Super called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& src)
{
	std::cout << "Copy constructor Super called" << std::endl;
	*this = src;
}

SuperTrap& SuperTrap::operator=(SuperTrap const& rhs)
{
	if (this != &rhs)
	{
		FragTrap::setName(rhs.FragTrap::getName());
		FragTrap::setHitPoints(rhs.FragTrap::getHitPoints());
		FragTrap::setMaxHitPoints(rhs.FragTrap::getMaxHitPoints());
		FragTrap::setEnergyPoints(rhs.FragTrap::getEnergyPoints());
		FragTrap::setMaxEnergyPoints(rhs.FragTrap::getMaxEnergyPoints());
		FragTrap::setLevel(rhs.FragTrap::getLevel());
		FragTrap::setMeleeAttackDamage(rhs.FragTrap::getMeleeAttackDamage());
		FragTrap::setRangedAttackDamage(rhs.FragTrap::getRangedAttackDamage());
		FragTrap::setArmorDamageReduction(rhs.FragTrap::getArmorDamageReduction());
	}
	return *this;
}

void SuperTrap::rangedAttack(std::string const& target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const& target)
{
	NinjaTrap::meleeAttack(target);
}
