/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:47:51 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 13:47:53 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default Frag constructor called" << std::endl;

	_name = "Petryha";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_knifeAttackDamage = 10;
	_gunAttackDamage = 20;
	_panzerAttackDamage = 50;
	_ballAttackDamage = 1;
	_shitAttackDamage = 0;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << "Constructor Frag called" << std::endl;

	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_knifeAttackDamage = 10;
	_gunAttackDamage = 20;
	_panzerAttackDamage = 50;
	_ballAttackDamage = 1;
	_shitAttackDamage = 0;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs)
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
		this->_knifeAttackDamage = rhs._knifeAttackDamage;
		this->_gunAttackDamage = rhs._gunAttackDamage;
		this->_panzerAttackDamage = rhs._panzerAttackDamage;
		this->_ballAttackDamage = rhs._ballAttackDamage;
		this->_shitAttackDamage = rhs._shitAttackDamage;
	}
	return *this;
}

void FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage << " points of damage !";
	std::cout << std::endl;
}

void FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at melee, causing " << this->_meleeAttackDamage << " points of damage !";
	std::cout << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::vaultHunter_dot_exe(std::string const& target)
{
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		int	index = std::rand() % 4;

		typedef void (FragTrap:: * ptr[5])(std::string const& str);
		ptr mptr = { &FragTrap::knifeAttack, &FragTrap::gunAttack, &FragTrap::panzerAttack, &FragTrap::ballAttack, &FragTrap::shitAttack };

		(this->*mptr[index])(target);
	}
	else
	{
		std::cout << "Energy points is low, you need 25 and more" << std::endl;
		if (this->_energyPoints <= 75)
			this->_energyPoints += 25;
	}
}

void FragTrap::knifeAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at knife, causing " << this->_knifeAttackDamage << " points of damage !";
	std::cout << std::endl;
	this->beRepaired(5);
}

void FragTrap::gunAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at gun, causing " << this->_gunAttackDamage << " points of damage !";
	std::cout << std::endl;
}

void FragTrap::panzerAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at panzer, causing " << this->_panzerAttackDamage << " points of damage !";
	std::cout << std::endl;
	this->takeDamage(10);
}

void FragTrap::ballAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at ball, causing " << this->_ballAttackDamage << " points of damage !";
	std::cout << std::endl;
	this->_level += 1;
}

void FragTrap::shitAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << this->_name << " attacks " << target;
	std::cout << " at shit, causing " << this->_shitAttackDamage << " points of damage !";
	std::cout << std::endl;
	vaultHunter_dot_exe(target);
}

void FragTrap::get_info(void)
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
	std::cout << "Knife Attack Damage = " << this->_knifeAttackDamage << std::endl;
	std::cout << "Gun Attack Damage = " << this->_gunAttackDamage << std::endl;
	std::cout << "Panzer Attack Damage = " << this->_panzerAttackDamage << std::endl;
	std::cout << "Ball Attack Damage = " << this->_ballAttackDamage << std::endl;
	std::cout << "Shit Attack Damage = " << this->_shitAttackDamage << std::endl;
}

std::string FragTrap::getName(void) const
{
	return this->_name;
}

int FragTrap::getHitPoints(void) const
{ 
	return this->_hitPoints; 
}

int FragTrap::getMaxHitPoints(void) const 
{ 
	return this->_maxHitPoints; 
}

int FragTrap::getEnergyPoints(void) const 
{ 
	return this->_energyPoints; 
}

int FragTrap::getMaxEnergyPoints(void) const
{
	return this->_maxEnergyPoints; 
}

int FragTrap::getLevel(void) const 
{ 
	return this->_level; 
}

int FragTrap::getMeleeAttackDamage(void) const
{
	return this->_meleeAttackDamage; 
}

int FragTrap::getRangedAttackDamage(void) const 
{
	return this->_rangedAttackDamage;
}

int FragTrap::getArmorDamageReduction(void) const 
{
	return this->_armorDamageReduction;
}
