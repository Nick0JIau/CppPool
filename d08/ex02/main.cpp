

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;


	mstack.push(5);
	mstack.push(17);

	std::cout << "top = " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size = " << mstack.size() << std::endl;
	std::cout << "top = " << mstack.top() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	for (int i = 0; i < 100; i++)
	{
		mstack.push(i);
		std::cout << "*it = " << mstack.top() << std::endl;
	}

	std::cout << "size = " << mstack.size() << std::endl;

	for (int i = 0; i < 100; i++)
	{
		mstack.pop();
		std::cout << "*it = " << mstack.top() << std::endl;
	}

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << "*it = " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
