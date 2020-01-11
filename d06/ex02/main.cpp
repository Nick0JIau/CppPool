#include <iostream>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{

	Base *tmp = NULL;
	int i = rand() % 3;

	if (i == 0)
	{
		std::cout << "Create A class" << std::endl;
		tmp = new A;
	}
	if (i == 1)
	{
		std::cout << "Create B class" << std::endl;
		tmp = new B;
	}
	if (i == 2)
	{
		std::cout << "Create C class" << std::endl;
		tmp = new C;
	}
	return tmp;
}

void identify_from_pointer( Base * p )
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a == p)
	{
		std::cout << "Identify A class from pointer" << std::endl;
	}
	if (b == p)
	{
		std::cout << "Identify B class from pointer" << std::endl;
	}
	if (c == p)
	{
		std::cout << "Identify C class from pointer" << std::endl;
	}
}

void identify_from_reference( Base & p )
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "Identify A class from reference" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{
		std::cerr << "It's not A class" << '\n';
	}
	try
	{
		B &b = dynamic_cast<B &>(p);	
		std::cout << "Identify B class from reference" << std::endl;
		(void)b;
	}
	catch(const std::exception& e)
	{
		std::cerr << "It's not B class" << '\n';
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "Identify C class from reference" << std::endl;
		(void)c;
	}
	catch(const std::exception& e)
	{
		std::cerr << "It's not C class" << '\n';
	}
}

int main()
{
	Base *ptr;

	std::srand(time(nullptr));
	ptr = generate();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);

	return (0);
}
