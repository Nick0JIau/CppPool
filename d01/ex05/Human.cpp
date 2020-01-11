/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:30:27 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:30:30 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify()
{
	return this->brain.identify();
}

Brain & Human::getBrain()
{
	return this->brain;
}
