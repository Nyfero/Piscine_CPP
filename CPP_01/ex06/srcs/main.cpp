#include "../class/Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;
	
	if (ac < 2)
		std::cout << "\e[91m---NO ARG---\e[39m" << std::endl;
	else
		harl.complain(av[1]);
	return (0);
}
