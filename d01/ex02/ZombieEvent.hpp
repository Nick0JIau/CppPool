/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:28:13 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:28:15 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie* newZombie(std::string name);

	std::string _type;
};

#endif // !ZOMBIEEVENT_HPP
