/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:09:12 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:09:13 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default Clap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Constructor Clap called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Clap called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "Copy constructor Clap called" << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
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

void ClapTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage << " points of damage !";
	std::cout << std::endl;
}

void ClapTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_meleeAttackDamage << " points of damage !";
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
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

void ClapTrap::get_info(void)
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

std::string ClapTrap::getName(void) const
{
	return this->_name;
}

int ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

int ClapTrap::getMaxHitPoints(void) const
{
	return this->_maxHitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

int ClapTrap::getMaxEnergyPoints(void) const
{
	return this->_maxEnergyPoints;
}

int ClapTrap::getLevel(void) const
{
	return this->_level;
}

int ClapTrap::getMeleeAttackDamage(void) const
{
	return this->_meleeAttackDamage;
}

int ClapTrap::getRangedAttackDamage(void) const
{
	return this->_rangedAttackDamage;
}

int ClapTrap::getArmorDamageReduction(void) const
{
	return this->_armorDamageReduction;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(unsigned int points)
{
	this->_hitPoints = points;
}

void ClapTrap::setMaxHitPoints(unsigned int points)
{
	this->_maxHitPoints = points;
}

void ClapTrap::setEnergyPoints(unsigned int points)
{
	this->_energyPoints = points;
}

void ClapTrap::setMaxEnergyPoints(unsigned int points)
{
	this->_maxEnergyPoints = points;
}

void ClapTrap::setLevel(unsigned int points)
{
	this->_level = points;
}

void ClapTrap::setMeleeAttackDamage(unsigned int points)
{
	this->_meleeAttackDamage = points;
}

void ClapTrap::setRangedAttackDamage(unsigned int points)
{
	this->_rangedAttackDamage = points;
}

void ClapTrap::setArmorDamageReduction(unsigned int points)
{
	this->_armorDamageReduction = points;
}
