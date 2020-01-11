#include <iostream>
#include "span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span span2 = Span(10000);
	try
    {
		for (int i = 0; i < 10000; ++i)
			span2.addNumber(i);

		std::cout << span2.shortestSpan() << std::endl;
		std::cout << span2.longestSpan() << std::endl;
	}
    catch (std::exception &e)
    {
		std::cout << e.what() << std::endl;
	}

    return 0;
}