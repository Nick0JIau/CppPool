/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:41:52 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 13:41:53 by ntrusevi         ###   ########.fr       */
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
	Fixed operator+(Fixed const& rhs);
	Fixed operator-(Fixed const& rhs);
	Fixed operator*(Fixed const& rhs);
	Fixed operator/(Fixed const& rhs);
	Fixed& operator++(void);
	Fixed& operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	bool	operator<(Fixed const& rhs) const;
	bool	operator>(Fixed const& rhs) const;
	bool	operator<=(Fixed const& rhs) const;
	bool	operator>=(Fixed const& rhs) const;
	bool	operator==(Fixed const& rhs) const;
	bool	operator!=(Fixed const& rhs) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed const & min(Fixed const& a, Fixed const& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed const& max(Fixed const& a, Fixed const& b);

private:
	int					_fixedPointValue;
	static const int	_fractionalBitsNb;
};

std::ostream& operator<<(std::ostream& os, Fixed const& val);
