/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:05:31 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:05:33 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap a;
	ScavTrap b;
	NinjaTrap c;

	c.ninjaShoebox(a);
	c.ninjaShoebox(b);
	c.ninjaShoebox(c);
	return 0;
}
