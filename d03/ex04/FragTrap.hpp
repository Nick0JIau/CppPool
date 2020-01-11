/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:09:28 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:09:29 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap const& src);

	FragTrap& operator=(FragTrap const& rhs);

	void			vaultHunter_dot_exe(std::string const& target);
	void			knifeAttack(std::string const& target);
	void			gunAttack(std::string const& target);
	void			panzerAttack(std::string const& target);
	void			ballAttack(std::string const& target);
	void			shitAttack(std::string const& target);

private:
	unsigned int	_knifeAttackDamage;
	unsigned int	_gunAttackDamage;
	unsigned int	_panzerAttackDamage;
	unsigned int	_ballAttackDamage;
	unsigned int	_shitAttackDamage;
};

