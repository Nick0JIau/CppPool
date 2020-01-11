/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:13:10 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:13:11 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Victim
{
public:
	Victim(void);
	Victim(std::string name);
	~Victim(void);
	Victim(Victim const& src);

	Victim& operator=(Victim const& src);

	std::string	getName(void) const;
	void		setName(std::string name);

	virtual void getPolymorphed(void) const;

private:
	std::string	_name;
};

std::ostream& operator<<(std::ostream& ost, Victim const& sorc);
