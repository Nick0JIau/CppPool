#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Default ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream    to_file;
	std::string      filename;

	executor.executeForm(*this);
	Form::execute(executor);
	filename = this->getName() + "_shrubbery";
	to_file.open(filename, std::ios::out | std::ios::trunc);
	if (to_file.is_open())
	{
		to_file << "      _-_" << std::endl;
		to_file << "   /~~   ~~\\" << std::endl;
		to_file << " /~~         ~~\\" << std::endl;
		to_file << "{               }" << std::endl;
		to_file << " \\  _-     -_  /" << std::endl;
		to_file << "   ~  \\ //  ~" << std::endl;
		to_file << " _- -  | | _- _" << std::endl;
		to_file << "  _ -  | |   - _" << std::endl;
		to_file << "      // \\" << std::endl;
		to_file.close();
	}
}
