#pragma once

#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	std::vector<T> _vec;
public:
	MutantStack<T>() {}
	MutantStack<T>(MutantStack<T> const& src) { *this = src; }
	virtual ~MutantStack<T>() {}

	MutantStack& operator=(MutantStack<T> const& src)
	{
		_vec = src._vec;
		return *this;
	}

	typedef typename std::vector<T>::iterator iterator;

	iterator	begin() { return _vec.begin(); }
	iterator	end() { return _vec.end(); }
	void		push(T val) { _vec.push_back(val); }
	void		pop() { _vec.pop_back(); }
	T			top() { return (*(_vec.end() - 1)); }
	int			size() { return _vec.size(); }
};
