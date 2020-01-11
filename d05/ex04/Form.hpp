/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:24:01 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:24:02 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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

	class NotSignedException : public std::exception
	{
	public:
		NotSignedException(void);
		~NotSignedException(void) throw();
		NotSignedException(NotSignedException const & src);

		const char* what(void) const throw();

		NotSignedException& operator=(NotSignedException const& src);
	};

	Form(void);
	Form(std::string name, int const signedGrade, int const executeGrade);
	virtual ~Form(void);
	Form(Form const & src);

	std::string const&	getName(void) const;
	int					getSignetGrade(void) const;
	int					getExecuteGrade(void) const;
	bool				getIsSigned(void) const;

	void				beSigned(Bureaucrat const& bureaucrat);

	Form&	operator=(Form const & src);

	virtual void execute(Bureaucrat const & executor) const;

private:
	std::string const	_name;
	int const			_signedGrade;
	int const			_executeGrade;
	bool				_isSigned;
};

std::ostream& operator<<(std::ostream& ost, Form const& src);
