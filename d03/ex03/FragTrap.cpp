/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:04:57 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:04:59 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default Frag constructor called" << std::endl;

	setName("Bodya default");
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
	_knifeAttackDamage = 10;
	_gunAttackDamage = 20;
	_panzerAttackDamage = 50;
	_ballAttackDamage = 1;
	_shitAttackDamage = 0;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Constructor Frag called" << std::endl;

	setName(name);
	setHitPoints(100);
	setMaxHitPoints(100);
	setEnergyPoints(100);
	setMaxEnergyPoints(100);
	setLevel(1);
	setMeleeAttackDamage(30);
	setRangedAttackDamage(20);
	setArmorDamageReduction(5);
	_knifeAttackDamage = 10;
	_gunAttackDamage = 20;
	_panzerAttackDamage = 50;
	_ballAttackDamage = 1;
	_shitAttackDamage = 0;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Frag called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& src)
{
	std::cout << "Copy constructor Frag called" << std::endl;
	*this = src;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs)
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
		this->_knifeAttackDamage = rhs._knifeAttackDamage;
		this->_gunAttackDamage = rhs._gunAttackDamage;
		this->_panzerAttackDamage = rhs._panzerAttackDamage;
		this->_ballAttackDamage = rhs._ballAttackDamage;
		this->_shitAttackDamage = rhs._shitAttackDamage;
	}
	return *this;
}

void FragTrap::vaultHunter_dot_exe(std::string const& target)
{
	if (getEnergyPoints() >= 25)
	{
		this->setEnergyPoints(this->getEnergyPoints() - 25);
		std::srand(std::time(nullptr));
		unsigned int	index = std::rand() % 5;

		typedef void (FragTrap:: * ptr[5])(std::string const& str);
		ptr mptr = { &FragTrap::knifeAttack, &FragTrap::gunAttack, &FragTrap::panzerAttack, &FragTrap::ballAttack, &FragTrap::shitAttack };

		(this->*mptr[index])(target);
	}
	else
	{
		std::cout << "Energy points is low, you need 25 and more" << std::endl;
		if (getEnergyPoints() <= 75)
			setEnergyPoints(getEnergyPoints() + 25);
	}
}

void FragTrap::knifeAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << getName() << " attacks " << target;
	std::cout << " at knife, causing " << this->_knifeAttackDamage << " points of damage !";
	std::cout << std::endl;
	this->beRepaired(5);
}

void FragTrap::gunAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << getName() << " attacks " << target;
	std::cout << " at gun, causing " << this->_gunAttackDamage << " points of damage !";
	std::cout << std::endl;
}

void FragTrap::panzerAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << getName() << " attacks " << target;
	std::cout << " at panzer, causing " << this->_panzerAttackDamage << " points of damage !";
	std::cout << std::endl;
	this->takeDamage(10);
}

void FragTrap::ballAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << getName() << " attacks " << target;
	std::cout << " at ball, causing " << this->_ballAttackDamage << " points of damage !";
	std::cout << std::endl;
	setLevel(getLevel() + 1);
}

void FragTrap::shitAttack(std::string const& target)
{
	std::cout << "FR4G - TP " << getName() << " attacks " << target;
	std::cout << " at shit, causing " << this->_shitAttackDamage << " points of damage !";
	std::cout << std::endl;
	vaultHunter_dot_exe(target);
}
