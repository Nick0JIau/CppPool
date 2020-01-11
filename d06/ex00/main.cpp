#include "Conversion.hpp"

int main(int ac, char **av)
{
	Conversion conversion;

	for (int i = 1; i < ac; i++)
	{
		conversion.toChar(av[i]);
		conversion.toInt(av[i]);
		conversion.toFloat(av[i]);
		conversion.toDouble(av[i]);
	}
	return 0;
}