/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:12:38 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:12:39 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void)
{
	setName("Default_name");
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	setName(name);
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const& src)
{
	*this = src;
	std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << getName() << " has been turned into a pink pony !" << std::endl;
}

Peon & Peon::operator=(Peon const& src)
{
	if (this != &src)
		setName(src.getName());
	return *this;
}
