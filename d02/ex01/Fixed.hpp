/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:40:58 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 13:41:00 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const& src);
	Fixed(int const nb);
	Fixed(float const nb);

	Fixed& operator=(Fixed const& rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int					_fixedPointValue;
	static const int	_fractionalBitsNb;
};

std::ostream& operator<<(std::ostream & os, Fixed const & val);
