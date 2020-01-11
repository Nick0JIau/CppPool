/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:48:57 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:48:59 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon();

	std::string const & getType(void);
	void		setType(std::string newType);

	std::string	_type;
};

#endif // !WEAPON_HPP
