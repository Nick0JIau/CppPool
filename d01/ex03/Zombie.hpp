/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:29:05 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:29:06 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	Zombie(void);
	Zombie(std::string name, std::string type);
	~Zombie();

	void	announce();
	void	setName();
	void	setType(std::string str);

	std::string	_name;
	std::string	_type;
};

#endif // !ZOMBIE_HPP
