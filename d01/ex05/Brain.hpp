/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:30:20 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:30:22 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
public:
	Brain();
	~Brain();

	std::string identify(void);
};

#endif
