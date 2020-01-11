#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Default RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	executor.executeForm(*this);
	Form::execute(executor);
    std::srand(time(nullptr));
    std::cout << "* some drilling noises *" << std::endl;
    if (std::rand() % 2)
        std::cout << this->getName() << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->getName() << " robotomized fail" << std::endl;
}
