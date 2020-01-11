/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:30:16 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:30:17 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(void);
	~PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & src);

	void	attack(void) const;

	PlasmaRifle& operator=(PlasmaRifle const& src);
};
