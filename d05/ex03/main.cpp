/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:24:05 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:24:06 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat b1("b1", 20);
		Intern someRandomIntern;
		Form* rrf;
	
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		if (rrf)
		{
			std::cout <<*rrf<< std::endl;
			rrf->beSigned(b1);
			rrf->execute(b1);
		}
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		if (rrf)
		{
			std::cout <<*rrf<< std::endl;
			rrf->beSigned(b1);
			rrf->execute(b1);
		}
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
