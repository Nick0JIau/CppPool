#pragma once

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern(void);
    ~Intern(void);
    Intern(Intern const& src);

    Intern& operator=(Intern const& src);

    Form *makeForm(std::string name, std::string target);
};