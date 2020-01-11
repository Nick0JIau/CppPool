/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:02:08 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:02:10 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(ClapTrap const& src);

	ClapTrap& operator=(ClapTrap const& rhs);

	void			rangedAttack(std::string const& target);
	void			meleeAttack(std::string const& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

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

	void			setName(std::string const name);
	void			setHitPoints(unsigned int points);
	void			setMaxHitPoints(unsigned int points);
	void			setEnergyPoints(unsigned int points);
	void			setMaxEnergyPoints(unsigned int points);
	void			setLevel(unsigned int points);
	void			setMeleeAttackDamage(unsigned int points);
	void			setRangedAttackDamage(unsigned int points);
	void			setArmorDamageReduction(unsigned int points);

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

