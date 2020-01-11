/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:48:03 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:48:05 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon &newWeapon);

	Weapon *_weapon;
	std::string _name;
};
