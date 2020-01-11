/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:27:08 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:32:29 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony *twilight_sparkle = new Pony("Twilight Sparkle", "Violet");
	std::cout << "Hi I am " << twilight_sparkle->getname() << " and my colour is " << twilight_sparkle->getcolor() << std::endl;
	std::cout << "Now deleting ponyOnTheHeap" << std::endl;
	delete twilight_sparkle;
}

void	ponyOnTheStack(void)
{
	Pony applejack = Pony("Applejack", "Yellow");
	std::cout << "Hi I am " << applejack.getname() << " and my colour is " << applejack.getcolor() << std::endl;
}

int		main()
{
	std::cout << "Calling ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << "ponyOnTheHeap finished" << std::endl;
	std::cout << "Calling ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	std::cout << "ponyOnTheStack finished" << std::endl;
	return 0;
}
