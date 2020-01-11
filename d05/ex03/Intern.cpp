#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern() {}

Intern::Intern(Intern const& src)
{
	*this = src;
}

Intern& Intern::operator=(Intern const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

Form* Intern::makeForm(std::string name, std::string target)
{
	if (name == "PresidentialPardonForm")
	{
		std::cout << "Intern create Presidential Pardon Form" << std::endl;
		return new PresidentialPardonForm(target);
	}
	else if (name == "RobotomyRequestForm")
	{
		std::cout << "Intern create Robotomy Request Form" << std::endl;
		return new RobotomyRequestForm(target);
	}
	else if (name == "ShrubberyCreationForm")
	{
		std::cout << "Intern create Shrubbery Creation Form" << std::endl;
		return new ShrubberyCreationForm(target);
	}
	else
		std::cout << "Don't correct form. Error." << std::endl;
	return NULL;
}