#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string name);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    virtual ~RobotomyRequestForm(void);

	virtual void execute(Bureaucrat const & executor) const;

    RobotomyRequestForm& operator=(RobotomyRequestForm const & src);
};