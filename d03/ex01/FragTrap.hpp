/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:03:44 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 14:03:46 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class FragTrap
{
public:

	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const& src);

	FragTrap& operator=(FragTrap const& rhs);

	void			rangedAttack(std::string const& target);
	void			meleeAttack(std::string const& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			vaultHunter_dot_exe(std::string const& target);
	void			knifeAttack(std::string const& target);
	void			gunAttack(std::string const& target);
	void			panzerAttack(std::string const& target);
	void			ballAttack(std::string const& target);
	void			shitAttack(std::string const& target);

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
	unsigned int	_knifeAttackDamage;
	unsigned int	_gunAttackDamage;
	unsigned int	_panzerAttackDamage;
	unsigned int	_ballAttackDamage;
	unsigned int	_shitAttackDamage;
};

