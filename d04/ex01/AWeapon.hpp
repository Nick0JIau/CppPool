/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:29:35 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:29:36 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AWeapon
{
private:
	std::string	_name;
	int			_apcost;
	int			_damage;

public:
	AWeapon(void);
	AWeapon(std::string const& name, int apcost, int damage);
	virtual ~AWeapon(void);
	AWeapon(AWeapon const& src);

	std::string const	getName(void) const;
	int					getAPCost(void) const;
	int					getDamage(void) const;

	void				setName(std::string name);
	void				setAPCost(int apcost);
	void				setDamage(int damage);

	virtual void		attack(void) const = 0;

	AWeapon& operator=(AWeapon const& src);
};
