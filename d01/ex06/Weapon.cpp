/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:48:49 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:48:51 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

std::string const& Weapon::getType(void)
{
	return this->_type;
}

void Weapon::setType(std::string newType)
{
	this->_type = newType;
}
