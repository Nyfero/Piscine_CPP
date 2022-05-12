#include "../class/ClapTrap.hpp"
#include "../class/ScavTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---OCF TEST---\e[39m" << std::endl << std::endl;
	{
		ScavTrap	a;
		ScavTrap	b(a);
		a = b;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---OCF END---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		ScavTrap	a("bonjour");
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---MAIN END---\e[39m" << std::endl << std::endl;
	return (0);
}
