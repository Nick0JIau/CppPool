/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:29:58 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:30:01 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) : _hp(0), _type("Default_type")
{
	std::cout << "Default constructor Enemy called" << std::endl;
}

Enemy::Enemy(int hp, std::string const& type) : _hp(hp), _type(type)
{
	std::cout << "Constructor Enemy called" << std::endl;
}

Enemy::~Enemy()
{
	std::cout << "Destructor Enemy called" << std::endl;
}

Enemy::Enemy(Enemy const& src)
{
	std::cout << "Copy constructor Enemy called" << std::endl;
	*this = src;
}

std::string const Enemy::getType(void) const
{
	return _type;
}

int Enemy::getHP(void) const
{
	return _hp;
}

void Enemy::setType(std::string type)
{
	_type = type;
}

void Enemy::setHP(int hp)
{
	_hp = hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	else if (damage > _hp)
		_hp = 0;
	else
		_hp -= damage;
}

Enemy& Enemy::operator=(Enemy const& src)
{
	if (this != &src)
	{
		_type = src.getType();
		_hp = src.getHP();
	}
	return *this;
}
