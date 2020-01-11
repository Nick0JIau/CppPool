#include "Conversion.hpp"
#include <iomanip>

Conversion::Conversion() {}

Conversion::Conversion(Conversion const& src)
{
	*this = src;
}

Conversion::~Conversion() {}

Conversion& Conversion::operator=(Conversion const& src)
{
	if (this != &src)
		*this = src;
	return *this;
}

void Conversion::toChar(char* input)
{
	std::cout << "Char: ";
	try
	{
		int c;
		if (input[0] > 32 && std::isdigit(input[0]))
			c = std::stoi(input);
		else
			c = static_cast<char>(input[0]);
		if (c < 0 || c > 255)
			throw Conversion::Impossible();
		if (std::isprint(static_cast<char>(c)))
			std::cout << static_cast<char>(c) << std::endl;
		else
			throw Conversion::NotPrintable();
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Conversion::toInt(char* input)
{
	std::cout << "Int: ";
	try
	{
		int i = std::stoi(input);
		std::cout << static_cast<int>(i) << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Conversion::toFloat(char* input)
{
	std::cout << "Float: ";
	try
	{
		float f = std::stof(input);
			std::cout << std::fixed << std::setprecision(1) << f  << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Conversion::toDouble(char* input)
{
	std::cout << "Double: ";
	try
	{
		double d = std::stod(input);
			std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

Conversion::Impossible::Impossible() {}

Conversion::Impossible::Impossible(Impossible const& src)
{
	*this = src;
}

Conversion::Impossible::~Impossible() throw() {}

Conversion::Impossible& Conversion::Impossible::operator=(Impossible const& src)
{
	(void)src;
	return *this;
}

const char* Conversion::Impossible::what() const throw()
{
	return "Impossible conversion";
}

Conversion::NotPrintable::NotPrintable() {}

Conversion::NotPrintable::NotPrintable(NotPrintable const& src)
{
	*this = src;
}

Conversion::NotPrintable::~NotPrintable() throw() {}

Conversion::NotPrintable& Conversion::NotPrintable::operator=(NotPrintable const& src)
{
	(void)src;
	return *this;
}

const char* Conversion::NotPrintable::what() const throw()
{
	return "Not printable conversion";
}
