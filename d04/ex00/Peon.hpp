/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:12:43 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:12:44 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(Peon const& src);
	Peon(std::string name);
	Peon(void);
	~Peon(void);

	void getPolymorphed(void) const;

	Peon& operator=(Peon const& src);
};

