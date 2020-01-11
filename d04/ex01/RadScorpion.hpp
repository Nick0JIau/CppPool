/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:30:49 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:30:51 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion(void);
	~RadScorpion(void);
	RadScorpion(RadScorpion const& src);

	void	takeDamage(int damage);

	RadScorpion& operator=(RadScorpion const& src);
};
