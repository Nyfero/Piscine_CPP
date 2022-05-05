#include "../Class/Harl.hpp"

int main(int ac, char **av)
{
	Harl	name;
	
	if (ac == 2)
		name.complain(av[1]);
	else
	{
		std::cout << "---NO ARG---" << std::endl;
		name.complain("DEBUG");
		name.complain("INFO");
		name.complain("WARNING");
		name.complain("ERROR");
	}
	return (0);
}
