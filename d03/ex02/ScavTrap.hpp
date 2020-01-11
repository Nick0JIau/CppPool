/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:02:31 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:02:32 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const& src);

	ScavTrap& operator=(ScavTrap const& rhs);

	void			challengeNewcomer(void);

	void			iceBucketChallenge(void);
	void			runChallenge(void);
	void			sleepChallenge(void);
	void			wotChallenge(void);
	void			hotChilliChallenge(void);

};

