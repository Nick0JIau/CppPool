/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:28:29 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:33:25 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string	randomasd(void)
{
	const char* names[] = { "Tom", "Tim", "Andy", "Peter" };
	std::srand(time(nullptr));
	int random = std::rand() % 4;
	return names[random];
}

void		randomChump(void)
{
	ZombieEvent	event = ZombieEvent();
	event.setZombieType("Archer");
	Zombie *newZombie = event.newZombie(randomasd());
	newZombie->announce();
	delete newZombie;
}

int			main()
{
	std::cout << "Zombie is coming" << std::endl;
	randomChump();
	std::cout << "Zombie on the stack!" << std::endl;
	Zombie	mark = Zombie("Mark", "Warrior");
	mark.announce();
	return 0;
}
