/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:30:43 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 15:30:45 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

int main()
{
	int			index = 0;
	int			tmpIndex = 0;
	std::string	indc = "";
	std::string	command;
	Contact		contact[8];

	while (command != "EXIT")
	{
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
		std::cin >> command;
		if (command == "SEARCH")
		{
			std::cout << "     index|first name| last name|  nickname|" << std::endl;
			for (int c = 0; c != index; ++c)
				contact[c].print();
			std::cout << "Precise an index to get more information or write anything else to leave." << std::endl;
			std::cin >> indc;
			tmpIndex = std::atoi(indc.c_str());
			if (tmpIndex >= 1 && tmpIndex <= 8 && tmpIndex <= index)
				contact[tmpIndex - 1].print_contact();
			else
				std::cout << "Wrong contact" << std::endl;
		}
		else if (command == "ADD")
		{
			if (index == 8)
				std::cout << "Phonebook is full, please restart the program to delete them" << std::endl;
			else
			{
				contact[index++].addContact();
			}
		}
		else if (command != "EXIT")
			std::cout << "Sorry , I don`t understand what do you mean" << std::endl;
	}
	std::cout << "Phonebook is closed" << std::endl;
	return 0;
}
