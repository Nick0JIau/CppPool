/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:10:09 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:10:10 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap a("hello");

	a.rangedAttack("a");
	a.meleeAttack("b");
	return 0;
}
