/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:12:49 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:12:50 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	_name = "Default_name";
	_tittle = "Default title";
}

Sorcerer::Sorcerer(std::string name, std::string tittle) : _name(name), _tittle(tittle)
{
	std::cout << _name << ", " << _tittle << " is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _tittle << ", " << "is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& src)
{
	*this = src;
	std::cout << _name << ", " << _tittle << " is born !" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const& src)
{
	if (this != &src)
	{
		this->_name = src.getName();
		this->_tittle = src.getTittle();
	}
	return *this;
}

std::string Sorcerer::getName(void) const
{
	return _name;
}

std::string Sorcerer::getTittle(void) const
{
	return _tittle;
}

void Sorcerer::polymorph(Victim const& victim) const
{
	victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& ost, Sorcerer const& sorc)
{
	ost << "I am " << sorc.getName() << ", " << sorc.getTittle() << ", " << "and I like ponies !" << std::endl;
	return ost;
}
