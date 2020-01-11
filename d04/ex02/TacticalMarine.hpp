/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:34:26 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:34:28 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine(void);
	~TacticalMarine(void);
	TacticalMarine(TacticalMarine const& src);

	TacticalMarine& operator=(TacticalMarine const & src);

	ISpaceMarine*	clone(void) const;
	void			battleCry(void) const;
	void			rangedAttack(void) const;
	void			meleeAttack(void) const;
};

