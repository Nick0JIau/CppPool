/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:12:54 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:12:55 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string tittle);
	~Sorcerer(void);
	Sorcerer(Sorcerer const& src);

	Sorcerer& operator=(Sorcerer const& src);

	std::string	getName(void) const;
	std::string	getTittle(void) const;

	void polymorph(Victim const& victim) const;

private:
	std::string	_name;
	std::string	_tittle;
	Sorcerer(void);
};

std::ostream& operator<<(std::ostream& ost, Sorcerer const& sorc);
