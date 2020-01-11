/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:51:13 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:37:39 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main()
{
	Human	human;

	human.action("meleeAttack", "bad guy");
	human.action("rangedAttack", "very bad guy");
	human.action("intimidatingShout", "some guy");

	return 0;
}
