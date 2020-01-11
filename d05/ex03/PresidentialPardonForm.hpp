#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    virtual ~PresidentialPardonForm(void);

	virtual void execute(Bureaucrat const & executor) const;

    PresidentialPardonForm& operator=(PresidentialPardonForm const & src);
};