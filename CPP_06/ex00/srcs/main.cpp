#include "../class/Cast.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			Cast	convert(av[1]);
			convert.Display();
		}
		catch (const std::exception& e)
		{ std::cerr << e.what() << std::endl; }
	}
	else
		std::cerr << "Error arguments" << std::endl;
	return (0);
}
