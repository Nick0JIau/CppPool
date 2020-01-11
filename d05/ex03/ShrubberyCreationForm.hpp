#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string name);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    virtual ~ShrubberyCreationForm(void);

	virtual void execute(Bureaucrat const & executor) const;

    ShrubberyCreationForm& operator=(ShrubberyCreationForm const & src);
};