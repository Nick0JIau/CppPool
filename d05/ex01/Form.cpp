/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 16:23:57 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 16:23:58 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException(void) {}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const& src)
{
	*this = src;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return "Too high Sign Grade";
}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(GradeTooHighException const& src)
{
	if (this != &src)
		* this = src;
	return *this;
}

Form::GradeTooLowException::GradeTooLowException(void) {}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const& src)
{
	*this = src;
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return "Too low Sign Grade";
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(GradeTooLowException const& src)
{
	if (this != &src)
		* this = src;
	return *this;
}

Form::Form(std::string name, int const signedGrade, int const executeGrade) :
	_name(name), \
	_signedGrade(signedGrade), \
	_executeGrade(executeGrade), \
	_isSigned(false)
{
	if (_signedGrade > 150 || _executeGrade > 150)
		throw(Form::GradeTooLowException());
	if (_signedGrade < 1 || _executeGrade < 1)
		throw(Form::GradeTooHighException());
}

Form::~Form(void) {}

Form::Form(Form const& src) :
	_name(src.getName()), \
	_signedGrade(src.getSignetGrade()), \
	_executeGrade(src.getExecuteGrade()), \
	_isSigned(false)
{
	*this = src;
}

std::string const& Form::getName(void) const
{
	return _name;
}

int Form::getSignetGrade(void) const
{
	return _signedGrade;
}

int Form::getExecuteGrade(void) const
{
	return _executeGrade;
}

bool Form::getIsSigned(void) const
{
	return _isSigned;
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (_signedGrade > bureaucrat.getGrade())
		_isSigned = true;
}

Form& Form::operator=(Form const& src)
{
	if (this != &src)
		* this = src;
	return *this;
}

std::ostream& operator<<(std::ostream& ost, Form const& src)
{
	if (src.getIsSigned())
		ost << "Form " + src.getName() + " is signed" << std::endl;
	else
		ost << "Form " + src.getName() + " is not signed" << std::endl;
	return ost;
}
