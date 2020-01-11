/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:29:41 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:29:42 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Default_name"), _ap(0), _weapon(NULL)
{
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(std::string const& name) : _name(name), _ap(40), _weapon(NULL)
{
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(Character const& src)
{
	*this = src;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

void Character::recoverAP(void)
{
	if (_ap <= 30)
		_ap += 10;
	else
		_ap = 40;
}

void Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (_weapon && enemy)
		if (_weapon->getAPCost() <= _ap)
		{
			std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			enemy->takeDamage(_weapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
			_ap -= _weapon->getAPCost();
		}
}

std::string const Character::getName(void) const
{
	return _name;
}

int Character::getAP(void) const
{
	return _ap;
}

AWeapon* Character::getWeapon(void) const
{
	return _weapon;
}

Character& Character::operator=(Character const& src)
{
	if (this != &src)
	{
		_name = src.getName();
		_ap = src._ap;
		_weapon = src._weapon;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& ost, Character const& src)
{
	if (src.getWeapon())
		ost << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		ost << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	return ost;
}
