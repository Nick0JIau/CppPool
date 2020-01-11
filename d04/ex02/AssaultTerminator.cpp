/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:33:36 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:33:37 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const& src)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = src;
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const& src)
{
	if (this != &src)
		* this = src;
	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

