#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vecInt;
    std::list<float> listF;

    for(int i = 0; i < 10; i++)
        vecInt.push_back(i);

    for(float i = 0; i < 10; i++)
        listF.push_back(i);

	try
    {
		easyfind(vecInt, 5); 		
		easyfind(vecInt, 9);
		easyfind(listF, 5.0); 
		easyfind(listF, 20.0); 
	}
    catch (std::exception &e)
    {
		std::cout << e.what() << std::endl;
	}
    return 0;
}