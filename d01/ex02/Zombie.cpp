/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:27:48 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:27:49 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "Zombie is watching you" << std::endl;
}

Zombie::~Zombie() 
{
	std::cout << "Zombie destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << "(" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
