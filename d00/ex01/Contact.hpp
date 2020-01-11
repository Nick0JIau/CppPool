/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:30:32 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/09/30 15:30:34 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		int		index;
		char	first_name[64];
		char	last_name[64];
		char	nickname[64];
		char	login[64];
		char	postal_adress[64];
		char	email_adress[64];
		char	phone_number[64];
		char	birthday[64];
		char	favorite_meal[64];
		char	underwear_color[64];
		char	darkest_secret[64];

		Contact(void);
		~Contact(void);

		void	addContact();
		void	print();
		void	print_contact();
};

#endif
