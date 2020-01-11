/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:34:09 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:34:12 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _max(32), _unitNB(0) {}

Squad::~Squad(void)
{
	for (int i = 0; i != _unitNB; ++i)
		delete _units[i];
}

Squad::Squad(Squad const& src)
{
	*this = src;
}

Squad& Squad::operator=(Squad const& src)
{
	ISpaceMarine* tmp;

	if (this != &src)
	{
		for (int i = 0; i != _unitNB; ++i)
		{
			tmp = _units[i]->clone();
			delete	_units[i];
			_units[i] = tmp;
		}
		_unitNB = src._unitNB;
		_max = src._max;
	}
	return *this;
}

int Squad::getCount(void) const
{
	return _unitNB;
}

int Squad::push(ISpaceMarine* marine)
{
	if (_unitNB < _max)
	{
		_units[_unitNB] = marine;
		_unitNB++;
	}
	return _unitNB;
}

ISpaceMarine* Squad::getUnit(int unit) const
{
	if (unit < _unitNB)
		return _units[unit];
	return NULL;
}
