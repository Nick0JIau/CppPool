/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:34:32 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:34:34 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine*	bob = new TacticalMarine;
	ISpaceMarine*	jim = new AssaultTerminator;
	ISquad*			vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	return 0;
}
