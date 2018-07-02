#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <ios>

void	my_cat(char **av)
{
	int	count;
	count = 0;
	char chara;
	while (av[++count] != NULL)
	{
		std::ifstream file(av[count], std::ios::in);
		if (!file)
			std::cerr << "my_cat: " << av[count] <<": No such file or directory"<< std::endl;
		else
		while (file.get(chara))
			std::cout << chara;
	}
}

int main(int ac, char **av)
{
	if (ac >= 2)
		my_cat(av);
	else
		std::cout << "my_cat: Usage : ./my_cat file [...]\n";
	return 0;
}
