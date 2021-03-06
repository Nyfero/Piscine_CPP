#include "../class/ClapTrap.hpp"
#include "../class/ScavTrap.hpp"
#include "../class/FragTrap.hpp"
#include "../class/DiamondTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---OCF TEST---\e[39m" << std::endl << std::endl;
	{
		std::cout << std::endl;
		{
			DiamondTrap	a;
			std::cout << std::endl;
			DiamondTrap	b(a);
			std::cout << std::endl;
			a = b;
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---OCF END---\e[39m" << std::endl << std::endl;

	std::cout << std::endl;
	std::cout << "\t\e[92m---DIAMONDTRAP---\e[39m" << std::endl << std::endl;
	{
		DiamondTrap	a("Diamond");
		ScavTrap	b("Scav");
		FragTrap	c("Frag");
		ClapTrap	d("Clap");
		
		std::cout << std::endl;
		a.attack("Something");
		b.attack("Something");
		c.attack("Something");
		d.attack("Something");
		
		std::cout << std::endl;
		a.takeDamage(4);
		b.takeDamage(4);
		c.takeDamage(4);
		d.takeDamage(4);
		
		std::cout << std::endl;
		a.beRepaired(1);
		b.beRepaired(1);
		c.beRepaired(1);
		d.beRepaired(1);
		
		std::cout << std::endl;
		a.guardGate();
		b.guardGate();
		
		std::cout << std::endl;
		a.highFivesGuys();
		c.highFivesGuys();
		
		std::cout << std::endl;
		a.whoAmI();
		
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---DIAMONDTRAP END---\e[39m" << std::endl << std::endl;
	return (0);
}
