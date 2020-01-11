/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:30:33 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:30:35 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist(void);
	~PowerFist(void);
	PowerFist(PowerFist const& src);

	void	attack(void) const;

	PowerFist& operator=(PowerFist const& src);
};
