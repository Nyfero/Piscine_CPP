#include "../class/ClapTrap.hpp"
#include "../class/ScavTrap.hpp"
#include "../class/FragTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---OCF TEST---\e[39m" << std::endl << std::endl;
	{
		std::cout << std::endl;
		{
			FragTrap	a;
			FragTrap	b(a);
			a = b;
		}
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---OCF END---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\e[92m---FragTrap---\e[39m" << std::endl << std::endl;
	{
		FragTrap	a("FragTrap");
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
		a.highFivesGuys();
		
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---FragTrap END---\e[39m" << std::endl << std::endl;
	return (0);
}
