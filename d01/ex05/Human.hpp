/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:30:33 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:30:35 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
public:
	Human();
	~Human();

	std::string identify();
	Brain		& getBrain();

	Brain	brain;
};

#endif // !HUMAN_HPP
