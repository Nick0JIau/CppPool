/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:24:54 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:24:56 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) : _name(name), _color(color)
{
	std::cout << "Constructor called" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Destructor called" << std::endl;
}

std::string Pony::getcolor(void)
{
	return this->_color;
}

std::string Pony::getname(void)
{
	return this->_name;
}
