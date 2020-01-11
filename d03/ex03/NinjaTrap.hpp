/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:05:16 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:05:18 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const& src);

	NinjaTrap& operator=(NinjaTrap const& rhs);

	void	ninjaShoebox(FragTrap & target);
	void	ninjaShoebox(ScavTrap& target);
	void	ninjaShoebox(NinjaTrap& target);
};

