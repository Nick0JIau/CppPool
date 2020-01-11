/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:03:59 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 14:04:01 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default Scav constructor called" << std::endl;

	_name = "Petryha";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string name) : _name(name)
{
	std::cout << "Constructor Scav called" << std::endl;

	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_level = rhs._level;
		this->_meleeAttackDamage = rhs._meleeAttackDamage;
		this->_rangedAttackDamage = rhs._rangedAttackDamage;
		this->_armorDamageReduction = rhs._armorDamageReduction;
	}
	return *this;
}

void ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage << " points of damage !";
	std::cout << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_meleeAttackDamage << " points of damage !";
	std::cout << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G - TP " << this->_name << " take ";
	std::cout << amount << " points of damage !";
	std::cout << std::endl;
	if ((this->_hitPoints + this->_armorDamageReduction) - amount > 0)
	{
		if (amount - this->_armorDamageReduction > 0)
			this->_hitPoints -= (amount - this->_armorDamageReduction);
	}
	else
		this->_hitPoints = 0;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G - TP " << this->_name << " increase energy and HP by " << amount;
	std::cout << std::endl;
	if (this->_hitPoints + amount <= this->_maxHitPoints)
		this->_hitPoints += amount;
	else
		this->_hitPoints = this->_maxHitPoints;
	if (this->_energyPoints + amount <= this->_maxEnergyPoints)
		this->_energyPoints += amount;
	else
		this->_energyPoints = this->_maxEnergyPoints;
}

void ScavTrap::challengeNewcomer(void)
{
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::srand(std::time(nullptr));
		int index = std::rand() % 5;
		typedef void (ScavTrap:: * ptr[5])(void);
		ptr mptr = { &ScavTrap::iceBucketChallenge, &ScavTrap::runChallenge , &ScavTrap::sleepChallenge, &ScavTrap::wotChallenge, &ScavTrap::hotChilliChallenge };
		(this->*mptr[index])();
	}
	else
	{
		std::cout << "Energy points is low, you need 25 and more" << std::endl;
		if (this->_energyPoints <= 75)
			this->_energyPoints += 25;
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

void ScavTrap::get_info(void)
{
	std::cout << "Info:" << std::endl;
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hit Points = " << this->_hitPoints << std::endl;
	std::cout << "Max Points = " << this->_maxHitPoints << std::endl;
	std::cout << "Energy Points =  " << this->_energyPoints << std::endl;
	std::cout << "Max Energy Points = " << this->_maxEnergyPoints << std::endl;
	std::cout << "Level = " << this->_level << std::endl;
	std::cout << "Melee Attack Damage = " << this->_meleeAttackDamage << std::endl;
	std::cout << "Ranged Attack Damage = " << this->_rangedAttackDamage << std::endl;
	std::cout << "Armor Damage Reduction = " << this->_armorDamageReduction << std::endl;
}

std::string ScavTrap::getName(void) const
{
	return this->_name;
}

int ScavTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

int ScavTrap::getMaxHitPoints(void) const
{
	return this->_maxHitPoints;
}

int ScavTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

int ScavTrap::getMaxEnergyPoints(void) const
{
	return this->_maxEnergyPoints;
}

int ScavTrap::getLevel(void) const
{
	return this->_level;
}

int ScavTrap::getMeleeAttackDamage(void) const
{
	return this->_meleeAttackDamage;
}

int ScavTrap::getRangedAttackDamage(void) const
{
	return this->_rangedAttackDamage;
}

int ScavTrap::getArmorDamageReduction(void) const
{
	return this->_armorDamageReduction;
}
