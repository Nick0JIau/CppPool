/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 15:37:02 by ntrusevi          #+#    #+#             */
/*   Updated: 2019/10/01 15:37:03 by ntrusevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	_grade = grade;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(Bureaucrat const& src)
{
	*this = src;
}

std::string const& Bureaucrat::getName(void) const
{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (_grade <= 1)
		throw(Bureaucrat::GradeTooHighException());
	_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade >= 150)
		throw(Bureaucrat::GradeTooLowException());
	_grade++;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& src)
{
	if (this != &src)
		* this = src;
	return *this;
}

std::ostream& operator<<(std::ostream& ost, Bureaucrat const& buer)
{
	ost << buer.getName() << " , bureaucrat grade " << buer.getGrade() << std::endl;
	return ost;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const& src)
{
	*this = src;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Too high Grade";
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const& src)
{
	if (this != &src)
		* this = src;
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const& src)
{
	*this = src;
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Too low Grade";
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const& src)
{
	if (this != &src)
		* this = src;
	return *this;
}
