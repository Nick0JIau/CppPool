/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:33:41 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:33:42 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator(void);
	~AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const& src);

	AssaultTerminator& operator=(AssaultTerminator const& src);

	ISpaceMarine* clone(void) const;
	void			battleCry(void) const;
	void			rangedAttack(void) const;
	void			meleeAttack(void) const;
};

