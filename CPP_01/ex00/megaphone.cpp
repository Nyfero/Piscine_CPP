#include <iostream>

void	up(char *str)
{
	int	i = -1;
	
	while (str[++i])
		str[i] = toupper(str[i]);
	std::cout << str;
	return ;
}

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (av[++i])
		{
			up(av[i]);
			if (av[i + 1])
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
