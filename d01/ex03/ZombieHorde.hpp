/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:29:21 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:29:22 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int n);
	ZombieHorde();
	~ZombieHorde();

	void	announce(void);

	Zombie* _zombie;
	int		_number;
};

#endif // !ZOMBIEHORDE_HPP
