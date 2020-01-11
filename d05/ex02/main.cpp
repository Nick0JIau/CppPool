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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm s("ShrubberyCreationForm");
	RobotomyRequestForm r("RobotomyRequestForm");
	PresidentialPardonForm p("PresidentialPardonFormp");



	try {
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 100);
		std::cout <<"-----------------" << std::endl;
		s.beSigned(b1);
		s.execute(b1);
		std::cout <<"-----------------" << std::endl;
		s.beSigned(b2);
		s.execute(b2);
		std::cout <<"-----------------" << std::endl;
		r.beSigned(b1);
		r.execute(b1);
		std::cout <<"-----------------" << std::endl;
		r.beSigned(b2);
		r.execute(b2);
		std::cout <<"-----------------" << std::endl;
		p.beSigned(b1);
		p.execute(b1);
		std::cout <<"-----------------" << std::endl;
		p.beSigned(b2);
		p.execute(b2);


		
	} catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
