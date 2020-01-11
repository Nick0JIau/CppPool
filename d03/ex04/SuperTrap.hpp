/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:10:05 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:10:06 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public virtual FragTrap, public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(std::string name);
	~SuperTrap();
	SuperTrap(SuperTrap const& src);

	SuperTrap& operator=(SuperTrap const& rhs);

	void rangedAttack(std::string const& target);
	void meleeAttack(std::string const& target);
};

