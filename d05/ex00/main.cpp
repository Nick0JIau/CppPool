/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:37:13 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:37:15 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	Bodya("Bodya", 2);

		std::cout << Bodya;
		Bodya.incrementGrade();
		std::cout << Bodya;
		Bodya.incrementGrade();
		std::cout << Bodya;
	}
	catch (std::exception& exception)
	{
		std::cout << "ERROR Bodya " << exception.what() << std::endl;
	}
	try
	{
		Bureaucrat	Petryha("Petryha", 0);
	}
	catch (std::exception& exception)
	{
		std::cout << "ERROR Petryha " << exception.what() << std::endl;
	}
	try
	{
		Bureaucrat	John("John", 200);
	}
	catch (std::exception& exception)
	{
		std::cout << "ERROR John " << exception.what() << std::endl;
	}

	return (0);
}
