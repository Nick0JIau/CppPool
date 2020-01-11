/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:03:54 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 14:03:55 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScavTrap
{
public:

	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const& src);

	ScavTrap& operator=(ScavTrap const& rhs);

	void			rangedAttack(std::string const& target);
	void			meleeAttack(std::string const& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			challengeNewcomer(void);

	void			iceBucketChallenge(void);
	void			runChallenge(void);
	void			sleepChallenge(void);
	void			wotChallenge(void);
	void			hotChilliChallenge(void);

	void			get_info(void);
	std::string		getName(void)  const;
	int				getHitPoints(void) const;
	int				getMaxHitPoints(void) const;
	int				getEnergyPoints(void) const;
	int				getMaxEnergyPoints(void) const;
	int				getLevel(void) const;
	int				getMeleeAttackDamage(void) const;
	int				getRangedAttackDamage(void) const;
	int				getArmorDamageReduction(void) const;

private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;
};

