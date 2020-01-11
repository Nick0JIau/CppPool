/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:48:22 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:48:24 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB() {}

void HumanB::attack()
{
	if (_weapon != 0)
		std::cout << this->_name << " attacks with his " << this->_weapon->_type << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
}
