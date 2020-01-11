/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:29:28 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:34:03 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"

int main()
{
	int	n = 8;
	ZombieHorde	zombie(n);

	zombie.announce();
	return 0;
}
