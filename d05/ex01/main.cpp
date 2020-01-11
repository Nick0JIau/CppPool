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

int main()
{
	Form		form("Form 42C", 21, 21);
	std::cout << form;

	try
	{
		Bureaucrat	bob("Bob", 42);
		std::cout << bob;
		form.beSigned(bob);
		bob.signForm(form);
		std::cout << form;
	}
	catch (std::exception& exception)
	{
		std::cout << "ERROR Bob" << std::endl;
	}

	try
	{
		Bureaucrat	jule("Jule", 2);
		std::cout << jule;
		form.beSigned(jule);
		jule.signForm(form);
		std::cout << form;
	}
	catch (std::exception& exception)
	{
		std::cout << "ERROR Jule" << std::endl;
	}

	return (0);
}
