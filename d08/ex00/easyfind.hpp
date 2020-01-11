#pragma once

#include <exception>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

class NoElement : public std::exception
{
public:
    NoElement() {}
    NoElement(NoElement const& src) { *this = src; }
    virtual ~NoElement() throw() {}
    NoElement& operator=(NoElement const& src) { (void)src; return *this; }
    virtual const char* what() const throw() { return "No such element"; }
};

template <typename T> 
void easyfind(T const& vec, int val)
{
    typename T::const_iterator it = std::find(vec.begin(), vec.end(), val);
    if (it != vec.end())
        std::cout << "Find elem: " << *it << ", found at " << std::distance(vec.begin(), it) << " position" << std::endl;
    else
        throw NoElement();
}