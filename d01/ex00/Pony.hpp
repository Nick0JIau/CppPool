/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:25:04 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:27:01 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
 #define PONY_HPP

#include <string>

class Pony
{
	public:
		Pony(std::string name, std::string color);
		~Pony();

		std::string	getname(void);
		std::string	getcolor(void);

	private:
		std::string	_name;
		std::string	_color;
};

#endif
