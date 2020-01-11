#pragma once

#include <vector>
#include <exception>
#include <algorithm>

class Span
{
public:
    Span(unsigned int nums);
    Span(Span const& src);
    ~Span();

    Span& operator=(Span const& src);

    void addNumber(int num);
    int shortestSpan();
    int longestSpan();

    class EmptyArray : public std::exception
    {
    public:
        EmptyArray();
        EmptyArray(EmptyArray const& src);
        virtual ~EmptyArray() throw();

        EmptyArray& operator=(EmptyArray const& src);

        virtual const char* what() const throw();
    };

    class FullArray : public std::exception
    {
    public:
        FullArray();
        FullArray(FullArray const& src);
        virtual ~FullArray() throw();

        FullArray& operator=(FullArray const& src);

        virtual const char* what() const throw();
    };

    class SmallArray : public std::exception
    {
    public:
        SmallArray();
        SmallArray(SmallArray const& src);
        virtual ~SmallArray() throw();

        SmallArray& operator=(SmallArray const& src);

        virtual const char* what() const throw();
    };

private:
    Span();
    std::vector <int>  _vec;
    unsigned int    _N;
};