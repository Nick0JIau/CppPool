#include <iostream>

template <class T>
void    iter(T *array, unsigned int size, void (*ptr)(T))
{
	if (array)
	{
		for (int i = 0; i < size; i++)
			ptr(array[i]);
		std::cout << std::endl;		
	}
}

template <class T>
void    print(T a)
{
	std::cout << a;
}

int main()
{
	unsigned int	n = 10;
	float			f = 10;
	double			d = 10;
	unsigned int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::string str[] = {"Q","W","E","R","T","Y","U","I","O","P","A"};
	char str2[10] = {'m','n','b','v','c','x','z','l','k','j'};
	char *str3 = NULL;

	iter(array, n, &print);
	iter(str, f, &print);
	iter(str2, d, &print);
	iter(str3, n, &print);

	return 0;
}