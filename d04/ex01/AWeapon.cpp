/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:29:30 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:29:31 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	std::cout << "Constructor AWeapon called" << std::endl;
}

AWeapon::AWeapon(void) : _name("Default_name"), _apcost(0), _damage(0)
{
	std::cout << "Default constructor AWeapon called" << std::endl;
}

AWeapon::~AWeapon(void) {}

AWeapon::AWeapon(AWeapon const& src)
{
	*this = src;
	std::cout << "Copy AWeapon constructor called" << std::endl;
}

std::string const AWeapon::getName(void) const
{
	return _name;
}

int AWeapon::getAPCost(void) const
{
	return _apcost;
}

int AWeapon::getDamage(void) const
{
	return _damage;
}

void AWeapon::setName(std::string name)
{
	_name = name;
}

void AWeapon::setAPCost(int apcost)
{
	_apcost = apcost;
}

void AWeapon::setDamage(int damage)
{
	_damage = damage;
}

AWeapon& AWeapon::operator=(AWeapon const& src)
{
	if (this != &src)
	{
		_name = src.getName();
		_apcost = src.getAPCost();
		_damage = src.getDamage();
	}
	return *this;
}
