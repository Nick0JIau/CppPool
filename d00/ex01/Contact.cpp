/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:29:15 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 15:29:17 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact(void)
{
	return;
}

Contact::Contact(void)
{
	return;
}

void	Contact::addContact()
{
	static int i = 1;

	std::cout << "Enter your first name" << std::endl;
	std::cin >> this->first_name;
	std::cout << "Enter your last name" << std::endl;
	std::cin >> this->last_name;
	std::cout << "Enter your nickname" << std::endl;
	std::cin >> this->nickname;
	std::cout << "Enter your login" << std::endl;
	std::cin >> this->login;
	std::cout << "Enter your postal adress" << std::endl;
	std::cin >> this->postal_adress;
	std::cout << "Enter your email adress" << std::endl;
	std::cin >> this->email_adress;
	std::cout << "Enter your phone number" << std::endl;
	std::cin >> this->phone_number;
	std::cout << "Enter your birthday date" << std::endl;
	std::cin >> this->birthday;
	std::cout << "Enter your favorite meal" << std::endl;
	std::cin >> this->favorite_meal;
	std::cout << "Enter your underwear color" << std::endl;
	std::cin >> this->underwear_color;
	std::cout << "Enter your darkest secret" << std::endl;
	std::cin >> this->darkest_secret;
	this->index = i++;
}

void	Contact::print()
{
	int space = 0;

	std::cout << "         " << index << "|";
	if (std::strlen(first_name) >= 10)
	{
		for (int i = 0; i != 9; ++i)
			std::cout << first_name[i];
		std::cout << "." << "|";
	}
	else
	{
		space = 10 - std::strlen(first_name);
		for (int i = 0; i != space; ++i)
			std::cout << " ";
		std::cout << first_name << "|";
	}
	if (std::strlen(last_name) >= 10)
	{
		for (int i = 0; i != 9; ++i)
			std::cout << last_name[i];
		std::cout << "." << "|";
	}
	else
	{
		space = 10 - std::strlen(last_name);
		for (int i = 0; i != space; ++i)
			std::cout << " ";
		std::cout << last_name << "|";
	}
	if (std::strlen(nickname) >= 10)
	{
		for (int i = 0; i != 9; ++i)
			std::cout << nickname[i];
		std::cout << "." << "|";
	}
	else
	{
		space = 10 - std::strlen(nickname);
		for (int i = 0; i != space; ++i)
			std::cout << " ";
		std::cout << nickname << "|";
	}
	std::cout << std::endl;
}

void	Contact::print_contact()
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nickname << std::endl;
	std::cout << login << std::endl;
	std::cout << postal_adress << std::endl;
	std::cout << email_adress << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << birthday << std::endl;
	std::cout << favorite_meal << std::endl;
	std::cout << underwear_color << std::endl;
	std::cout << darkest_secret << std::endl;
}
