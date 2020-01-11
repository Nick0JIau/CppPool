#include "PresidentialPardonForm.hpp"
#include <time.h>

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Default PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	executor.executeForm(*this);
	Form::execute(executor);
    std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
