/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:50:47 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:50:49 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const& target)
{
	std::cout << "Melee Attack " << target << std::endl;
}

void Human::rangedAttack(std::string const& target)
{
	std::cout << "Ranged Attack " << target << std::endl;
}

void Human::intimidatingShout(std::string const& target)
{
	std::cout << "Intimidating Shout " << target << std::endl;
}

void Human::action(std::string const& action_name, std::string const& target)
{
	std::string actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	typedef void (Human:: * ptr[3])(std::string const& target);
	ptr mptr = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout };

	for (int i = 0; i != 3; ++i)
	{
		if (actions[i] == action_name)
		{
			(this->*mptr[i])(target);
			break;
		}
	}
}
