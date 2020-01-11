/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:47:54 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:47:56 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon & club);
	~HumanA();

	void	attack();

	Weapon & _weapon;
	std::string _name;
};
