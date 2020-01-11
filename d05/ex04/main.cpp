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
#include "OfficeBlock.hpp"

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 10);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 10);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("ShrubberyCreationForm", "Pigley");
	}
	catch (OfficeBlock::NoIntern & e)
	{
		 std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoSigner & e)
	{
		 std::cout << e.what() << std::endl;
	}
	catch (OfficeBlock::NoExecutor & e)
	{
		 std::cout << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
