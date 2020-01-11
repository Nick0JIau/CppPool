#pragma once

#include <iostream>
#include <exception>

class Conversion
{
public:
    Conversion();
    Conversion(Conversion const& src);
    ~Conversion();

    Conversion& operator=(Conversion const& src);

    void    toChar(char* input);
    void    toInt(char* input);
    void    toFloat(char* input);
    void    toDouble(char* input);

    class Impossible : public std::exception
    {
    public:
        Impossible();
        Impossible(Impossible const& src);
        ~Impossible() throw();

        Impossible& operator=(Impossible const& src);

        const char* what(void) const throw();
    };

    class NotPrintable : public std::exception
    {
    public:
        NotPrintable();
        NotPrintable(NotPrintable const& src);
        ~NotPrintable() throw();

        NotPrintable& operator=(NotPrintable const& src);

        const char* what() const throw();
    };
};