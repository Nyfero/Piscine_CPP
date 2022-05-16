#include "../class/ClapTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---OCF TEST---\e[39m" << std::endl << std::endl;
	{
		ClapTrap	a;
		ClapTrap	b(a);
		a = b;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---OCF END---\e[39m" << std::endl << std::endl;
	
	std::cout << "\t\e[92m---CLAPTRAP---\e[39m" << std::endl << std::endl;
	{
		ClapTrap	a("ClapTrap");
		
		std::cout << std::endl;
		a.attack("Something");
		a.attack("Something");

		std::cout << std::endl;
		a.takeDamage(4);
		a.takeDamage(2);
		
		std::cout << std::endl;
		a.beRepaired(1);
		a.beRepaired(7);
		
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---CLAPTRAP END---\e[39m" << std::endl << std::endl;
	return (0);
}
