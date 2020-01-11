/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:31:00 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 13:31:03 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBitsNb = 8;

Fixed::Fixed()
{
	this->_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}
