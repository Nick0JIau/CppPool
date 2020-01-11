/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:23:51 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:23:53 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		~GradeTooHighException(void) throw();
		GradeTooHighException(GradeTooHighException const& src);

		const char* what(void) const throw();

		GradeTooHighException& operator=(GradeTooHighException const& src);
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		~GradeTooLowException(void) throw();
		GradeTooLowException(GradeTooLowException const& src);

		const char* what(void) const throw();

		GradeTooLowException& operator=(GradeTooLowException const& src);
	};

	Bureaucrat(std::string name, int grade);
	virtual ~Bureaucrat(void);
	Bureaucrat(Bureaucrat const& src);

	std::string const&	getName(void) const;
	int					getGrade(void) const;

	void	incrementGrade(void);
	void	decrementGrade(void);

	void	signForm(Form& form);

	Bureaucrat& operator=(Bureaucrat const& src);

private:
	Bureaucrat(void);
	std::string const	_name;
	int					_grade;
};

std::ostream& operator<<(std::ostream& ost, Bureaucrat const& buer);
