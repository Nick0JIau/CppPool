/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:29:45 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:29:48 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string	_name;
	int			_ap;
	AWeapon*	_weapon;

public:
	Character(void);
	Character(std::string const& name);
	Character(Character const& src);
	~Character();

	void recoverAP(void);
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);

	std::string const	getName(void) const;
	int					getAP(void) const;
	AWeapon				*getWeapon(void) const;

	Character& operator=(Character const & src);
};

std::ostream& operator<<(std::ostream& ost, Character const& src);
