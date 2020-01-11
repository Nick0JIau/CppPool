/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:48:02 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:42:24 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main()
{
	FragTrap	first;
	FragTrap	second("Moldovan");

	std::cout << "attack:" << std::endl;
	first.rangedAttack("gavnuk");

	first.meleeAttack("gavnuk");

	first.takeDamage(50);
	std::cout << "HitPoints" << first.getHitPoints() << std::endl;

	first.beRepaired(100);
	std::cout << "HitPoints" << first.getHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << first.getEnergyPoints() << std::endl;

	first.vaultHunter_dot_exe("gavnuk");
	std::cout << "HitPoints = " << first.getHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << first.getEnergyPoints() << std::endl;

	first.vaultHunter_dot_exe("gavnuk");
	std::cout << "HitPoints = " << first.getHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << first.getEnergyPoints() << std::endl;

	FragTrap loser("Chuvack");
	loser.vaultHunter_dot_exe("gavnuk");
	std::cout << "HitPoints = " << loser.getHitPoints() << std::endl;
	std::cout << "EnergyPoints = " << loser.getEnergyPoints() << std::endl;

	FragTrap newfirst(first);
	newfirst.get_info();
	return 0;
}
