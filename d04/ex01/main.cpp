/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:31:11 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:31:13 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* zaz = new Character("zaz");

	std::cout << *zaz;

	Enemy * b = new RadScorpion();
	AWeapon * pr = new PlasmaRifle();
	AWeapon * pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);

	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	return 0;
}
