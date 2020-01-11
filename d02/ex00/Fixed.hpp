/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:31:08 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 13:31:11 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const & src);

	Fixed& operator=(Fixed const & rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);


private:
	int					_fixedPointValue;
	static const int	_fractionalBitsNb;
};

