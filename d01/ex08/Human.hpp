/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:50:57 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:50:58 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Human
{
private:
	void meleeAttack(std::string const& target);
	void rangedAttack(std::string const& target);
	void intimidatingShout(std::string const& target);

public:
	void action(std::string const& action_name, std::string const& target);
};
