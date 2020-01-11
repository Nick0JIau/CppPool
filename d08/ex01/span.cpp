#include "span.hpp"

Span::Span(unsigned int nums)
{
	if (nums > 0)
		_N = nums;
	else
		throw EmptyArray();
}

Span::Span(Span const& src)
{
	*this = src;
}

Span::~Span() {}

Span& Span::operator=(Span const& src)
{
	(void)src;
	return *this;
}

void Span::addNumber(int num)
{
	if (std::distance(_vec.begin(), _vec.end()) < _N)
	{
		_vec.push_back(num);
	}
	else
		throw FullArray();
}

int Span::shortestSpan()
{
	if (_vec.size() == 0)
		throw EmptyArray();
	else if (_vec.size() == 1)
		throw SmallArray();

	std::sort(_vec.begin(), _vec.end());

	int min = abs(_vec[1] - _vec[0]);

	return min;
}

int Span::longestSpan()
{
	if (_vec.size() == 0)
		throw EmptyArray();
	else if (_vec.size() == 1)
		throw SmallArray();

	std::vector<int>::const_iterator itMin = min_element(_vec.begin(), _vec.end());
	std::vector<int>::const_iterator itMax = max_element(_vec.begin(), _vec.end());

	int max = *itMax - *itMin;

	return max;
}

Span::EmptyArray::EmptyArray() {}

Span::EmptyArray::EmptyArray(EmptyArray const& src)
{
	*this = src;
}

Span::EmptyArray::~EmptyArray() throw() {}

Span::EmptyArray& Span::EmptyArray::operator=(EmptyArray const& src)
{
	(void)src;
	return *this;
}

const char* Span::EmptyArray::what() const throw()
{
	return "Array is empty";
}

Span::FullArray::FullArray() {}

Span::FullArray::FullArray(FullArray const& src)
{
	*this = src;
}

Span::FullArray::~FullArray() throw() {}

Span::FullArray& Span::FullArray::operator=(FullArray const& src)
{
	(void)src;
	return *this;
}

const char* Span::FullArray::what() const throw()
{
	return "Array is full";
}

Span::SmallArray::SmallArray() {}

Span::SmallArray::SmallArray(SmallArray const& src)
{
	*this = src;
}

Span::SmallArray::~SmallArray() throw() {}

Span::SmallArray& Span::SmallArray::operator=(SmallArray const& src)
{
	(void)src;
	return *this;
}

const char* Span::SmallArray::what() const throw()
{
	return "Array has only one element";
}