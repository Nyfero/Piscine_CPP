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
	
	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		ClapTrap	a("ClapTrap");
		ClapTrap	b("Boris");
		
		a.attack("Something");
		b.takeDamage(4);
		b.beRepaired(1);
		b.beRepaired(1);
		b.beRepaired(1);
		a.beRepaired(5);
		a.attack("Wall");
		a.attack("Door");
		a.attack("Windows");
		a.takeDamage(10);
		a.beRepaired(1);
		a.beRepaired(1);
		a.attack("Jack");
		a.beRepaired(1);
		a.beRepaired(1);
		std::cout << "\e[96m---ClapTrap out of energy---\e[39m" << std::endl;
		a.beRepaired(1);
		a.attack("Nothing");
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---MAIN END---\e[39m" << std::endl << std::endl;
	return (0);
}
