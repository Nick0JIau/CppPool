/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:34:16 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:34:17 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISquad.hpp"

class Squad : public ISquad
{
public:
	Squad(void);
	~Squad(void);
	Squad(Squad const& src);

	Squad& operator=(Squad const& src);

	int				getCount(void) const;
	int				push(ISpaceMarine* marine);
	ISpaceMarine*	getUnit(int unit) const;

private:
	int				_max;
	int				_unitNB;
	ISpaceMarine*	_units[32];
};

