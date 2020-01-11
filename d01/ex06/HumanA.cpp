/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:47:48 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:47:49 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & club) : _weapon(club), _name(name) {}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
