#include "../Class/Harl.hpp"

int main(int ac, char **av)
{
	Harl	harl;
	
	if (ac >= 2)
		harl.complain(av[1]);
	else
	{
		std::cout << "\e[91m---NO ARG---\e[39m" << std::endl << std::endl;
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
	}
	return (0);
}
