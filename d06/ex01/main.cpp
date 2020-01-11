#include <iostream>
#include <ctime>
#include <string>


typedef struct  Data
{
	std::string s1;
	int         n;
	std::string s2;
}				data;

void * serialize( void )
{
	Data *tmp = new Data;
	std::string str = "0123456789qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvbnm";

	for(int i = 0; i < 8; i++)
	{
		tmp->s1 = str[rand() % 62];
	}

	tmp->n = rand() % 62;

	for(int i = 0; i < 8; i++)
	{
		tmp->s2 += str[rand() % 62];
	}

	std::cout << '\n' << "Serialize: " << '\n' << tmp->s1 << '\n' << tmp->n << '\n' << tmp->s2 << '\n' << '\n';

	return tmp;
}

Data * deserialize( void * raw )
{
	Data *result;

	result = static_cast<Data *>(raw);

	std::cout << '\n' << "Deserialize: " << '\n' << result->s1 << '\n' << result->n << '\n' << result->s2 << '\n' << '\n';

	return result;
}

int main()
{
	Data	*data;
	void	*raw;

	std::srand(time(nullptr));
	raw = serialize();
	data = deserialize(raw);

	std::cout << '\n' << "Result: " << '\n' << data->s1 << '\n' << data->n << '\n' << data->s2 << '\n' << '\n';

	return 0;
}
