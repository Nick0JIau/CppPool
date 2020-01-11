/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 18:29:44 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 18:29:46 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "String : " << str << std::endl;
	std::cout << "Pointer : " << *ptr << std::endl;
	std::cout << "Reference : " << ref << std::endl;

	return 0;
}
