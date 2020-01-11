#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) :
	_intern(NULL), _signer(NULL), _executor(NULL) {}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor) :
_intern(intern), _signer(signer), _executor(executor) {}

OfficeBlock::~OfficeBlock(void) {}

OfficeBlock::OfficeBlock(OfficeBlock const& src)
{
	*this = src;
}

OfficeBlock& OfficeBlock::operator=(OfficeBlock const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

void OfficeBlock::setIntern(Intern &intern)
{
	_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat &signer)
{
	_signer = &signer;
}

void OfficeBlock::setExecutor(Bureaucrat &executor)
{
	_executor = &executor;
}

void OfficeBlock::doBureaucracy(std::string name, std::string target)
{
	Form	*form = NULL;

	if (!_intern)
		throw OfficeBlock::NoIntern();
	if (!_signer)
		throw OfficeBlock::NoSigner();
	if (!_executor)
		throw OfficeBlock::NoExecutor();
	form = _intern->makeForm(name, target);
	if (!form)
		throw OfficeBlock::IncorrectForm();
	if (_signer->getGrade() >= form->getSignetGrade())
	{
		delete form;
		throw OfficeBlock::LowSignerGrade();
	}
	form->beSigned(*_signer);
	if (_executor->getGrade() > form->getExecuteGrade())
	{
		delete form;
		throw OfficeBlock::LowExecutorGrade();
	}
	_executor->executeForm(*form);
	delete form;
}

OfficeBlock::NoIntern::NoIntern(void) {}

OfficeBlock::NoIntern::~NoIntern(void) throw() {}

OfficeBlock::NoIntern::NoIntern(NoIntern const& src)
{
	*this = src;
}

const char* OfficeBlock::NoIntern::what(void) const throw()
{
	return "Intern not found";
}

OfficeBlock::NoIntern& OfficeBlock::NoIntern::operator=(NoIntern const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

OfficeBlock::NoSigner::NoSigner(void) {}

OfficeBlock::NoSigner::~NoSigner(void) throw() {}

OfficeBlock::NoSigner::NoSigner(NoSigner const& src)
{
	*this = src;
}

const char* OfficeBlock::NoSigner::what(void) const throw()
{
	return "Signer not found";
}

OfficeBlock::NoSigner& OfficeBlock::NoSigner::operator=(NoSigner const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

OfficeBlock::NoExecutor::NoExecutor(void) {}

OfficeBlock::NoExecutor::~NoExecutor(void) throw() {}

OfficeBlock::NoExecutor::NoExecutor(NoExecutor const& src)
{
	*this = src;
}

const char* OfficeBlock::NoExecutor::what(void) const throw()
{
	return "Executor not found";
}

OfficeBlock::NoExecutor& OfficeBlock::NoExecutor::operator=(NoExecutor const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

OfficeBlock::LowSignerGrade::LowSignerGrade(void) {}

OfficeBlock::LowSignerGrade::~LowSignerGrade(void) throw() {}

OfficeBlock::LowSignerGrade::LowSignerGrade(LowSignerGrade const& src)
{
	*this = src;
}

const char* OfficeBlock::LowSignerGrade::what(void) const throw()
{
	return "Signer grade is too low";
}

OfficeBlock::LowSignerGrade& OfficeBlock::LowSignerGrade::operator=(LowSignerGrade const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

OfficeBlock::LowExecutorGrade::LowExecutorGrade(void) {}

OfficeBlock::LowExecutorGrade::~LowExecutorGrade(void) throw() {}

OfficeBlock::LowExecutorGrade::LowExecutorGrade(LowExecutorGrade const& src)
{
	*this = src;
}

const char* OfficeBlock::LowExecutorGrade::what(void) const throw()
{
	return "Executor grade is too low";
}

OfficeBlock::LowExecutorGrade& OfficeBlock::LowExecutorGrade::operator=(LowExecutorGrade const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

OfficeBlock::IncorrectForm::IncorrectForm(void) {}

OfficeBlock::IncorrectForm::~IncorrectForm(void) throw() {}

OfficeBlock::IncorrectForm::IncorrectForm(IncorrectForm const& src)
{
	*this = src;
}

const char* OfficeBlock::IncorrectForm::what(void) const throw()
{
	return "Incorrect form";
}

OfficeBlock::IncorrectForm& OfficeBlock::IncorrectForm::operator=(IncorrectForm const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}
