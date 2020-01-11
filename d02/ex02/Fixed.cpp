/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:41:47 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 13:41:48 by ntrusevi         ###   ########.fr       */
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

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = nb << _fractionalBitsNb;
}

Fixed::Fixed(float const nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(nb * (1 << _fractionalBitsNb));
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const& rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const& rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const& rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const& rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++(void)
{
	_fixedPointValue += 1;
	return *this;
}

Fixed& Fixed::operator--(void)
{
	_fixedPointValue -= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

bool Fixed::operator==(Fixed const& rhs) const
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(Fixed const& rhs) const
{
	return !(this->toFloat() == rhs.toFloat());
}

bool Fixed::operator<(Fixed const& rhs) const
{
	return this->toFloat() < rhs.toFloat();
}

bool Fixed::operator>(Fixed const& rhs) const
{
	return rhs.toFloat() < this->toFloat();
}

bool Fixed::operator<=(Fixed const& rhs) const
{
	return (!rhs.toFloat()) < (this->toFloat());
}

bool Fixed::operator>=(Fixed const& rhs) const
{
	return (!this->toFloat()) < (rhs.toFloat());
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

float Fixed::toFloat(void) const
{
	return (float)this->_fixedPointValue / (1 << _fractionalBitsNb);
}

int Fixed::toInt(void) const
{
	return (int)this->_fixedPointValue >> _fractionalBitsNb;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a > b ? b : a);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b)
{
	return (a > b ? b : a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b)
{
	return (a > b ? a : b);
}

std::ostream& operator<<(std::ostream& ost, Fixed const& nb)
{
	ost << nb.toFloat();
	return ost;
}
