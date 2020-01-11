/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:13:05 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:13:06 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void)
{
	_name = "Default_name";
	std::cout << "Some default victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim(Victim const& src)
{
	*this = src;
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim& Victim::operator=(Victim const& src)
{
	if (this != &src)
		_name = src.getName();
	return *this;
}

std::string Victim::getName(void) const
{
	return this->_name;
}

void Victim::setName(std::string name)
{
	_name = name;
}

void Victim::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream& operator<<(std::ostream& ost, Victim const& vict)
{
	ost << "I am " << vict.getName() << " and I like otters !" << std::endl;
	return ost;
}
