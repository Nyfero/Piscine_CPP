#include "../class/ClapTrap.hpp"
#include "../class/ScavTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---OCF TEST---\e[39m" << std::endl << std::endl;
	{
		std::cout << std::endl;
		{
			ScavTrap	a;
			ScavTrap	b(a);
			a = b;
		}
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---OCF END---\e[39m" << std::endl << std::endl;
	
	std::cout << "\t\e[92m---CLAPTRAP---\e[39m" << std::endl << std::endl;
	{
		ClapTrap	a("ClapTrap");
		
		std::cout << std::endl;
		a.attack("Something");

		std::cout << std::endl;
		a.takeDamage(4);
		
		std::cout << std::endl;
		a.beRepaired(1);
		
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---CLAPTRAP END---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\e[92m---SCAVTRAP---\e[39m" << std::endl << std::endl;
	{
		ScavTrap	a("ScavTrap");
		ClapTrap	b("ClapTrap");
	
		std::cout << std::endl;
		a.attack("Something");
		b.attack("Something");
	
		std::cout << std::endl;
		a.takeDamage(4);
		b.takeDamage(4);
		
		std::cout << std::endl;
		a.beRepaired(1);
		b.beRepaired(1);
		
		std::cout << std::endl;
		a.guardGate();
		
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---SCAVTRAP END---\e[39m" << std::endl << std::endl;
	return (0);
}
