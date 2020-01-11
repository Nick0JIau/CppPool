/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:30:05 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:30:06 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Enemy
{
private:
	int			_hp;
	std::string	_type;

public:
	Enemy(void);
	Enemy(int hp, std::string const& type);
	virtual ~Enemy();
	Enemy(Enemy const& src);

	std::string const	getType(void) const;
	int					getHP(void) const;

	void				setType(std::string type);
	void				setHP(int hp);

	virtual void		takeDamage(int damage);

	Enemy& operator=(Enemy const & src);
};
