/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:02:37 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:02:39 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap hero("Rick");
	ScavTrap newHero("Morty");

	hero.getName();

	std::cout << "attack1:" << std::endl;
	hero.rangedAttack("gavnuk");

	hero.meleeAttack("gavnuk");

	hero.getEnergyPoints();

	hero.takeDamage(5);
	hero.getHitPoints();

	hero.beRepaired(100);
	hero.getHitPoints();
	hero.getEnergyPoints();

	hero.vaultHunter_dot_exe("gavnuk");
	hero.getHitPoints();
	hero.getEnergyPoints();

	hero.vaultHunter_dot_exe("gavnuk");
	hero.getHitPoints();
	hero.getEnergyPoints();

	FragTrap loser("Chuvack");
	loser.setEnergyPoints(20);
	loser.vaultHunter_dot_exe("gavnuk");
	loser.getHitPoints();
	loser.getEnergyPoints();

	newHero.getName();

	std::cout << "attack2:" << std::endl;
	newHero.rangedAttack("gavnuk");

	newHero.meleeAttack("gavnuk");

	newHero.getEnergyPoints();

	newHero.takeDamage(5);
	newHero.getHitPoints();

	newHero.beRepaired(100);
	newHero.getHitPoints();
	newHero.getEnergyPoints();

	std::cout << "challenges:" << std::endl;
	newHero.challengeNewcomer();
	newHero.challengeNewcomer();

	ScavTrap newLoser("newChuvack");
	newLoser.setEnergyPoints(5);
	newLoser.challengeNewcomer();
	newLoser.getEnergyPoints();
	return 0;
}
