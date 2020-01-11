/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:31:03 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:31:04 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant(void);
	~SuperMutant(void);
	SuperMutant(SuperMutant const& src);

	void	takeDamage(int damage);

	SuperMutant& operator=(SuperMutant const& src);
};
