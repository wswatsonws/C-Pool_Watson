#include <iostream>
#include <fstream>

void my_cat(char **files)
{
	int i = 1;
	char chara;

	while(files[i])
	{
		std::ifstream fd(files[i], std::ios::in);
		if(fd)
		{
			while (fd.get(chara))
			std::cout << chara;
		}
		else
		std::cout << "my_cat: " << files[i] << ": No such file or directory" << std::endl;
		fd.close();
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "my_cat: Usage ./my_cat file [...]" << std::endl;
	else
		my_cat(av);
	return 0;
}
