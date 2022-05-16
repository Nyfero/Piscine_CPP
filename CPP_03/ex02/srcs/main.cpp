#include "../class/ClapTrap.hpp"
#include "../class/ScavTrap.hpp"
#include "../class/FragTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---OCF TEST---\e[39m" << std::endl << std::endl;
	{
		{
			ClapTrap	a;
			ClapTrap	b(a);
			a = b;
		}
		std::cout << std::endl;
		{
			ScavTrap	a;
			ScavTrap	b(a);
			a = b;
		}
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
	std::cout << "\t\e[92m---CLAPTRAP---\e[39m" << std::endl << std::endl;
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
	std::cout << "\t\e[91m---CLAPTRAP END---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\e[92m---SCAVTRAP---\e[39m" << std::endl << std::endl;
	{
		ScavTrap	a("ScavTrap");
		ScavTrap	b("Jean");
		ClapTrap	c("ClapTrap");
		
		a.attack("Something");
		b.takeDamage(4);
		c.attack("Screen");
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
		a.guardGate();
		b.guardGate();
		a.beRepaired(1);
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---SCAVTRAP END---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\e[92m---FragTrap---\e[39m" << std::endl << std::endl;
	{
		FragTrap	a("FragTrap");
		FragTrap	b("Robert");
		ClapTrap	c("ClapTrap");
		ScavTrap	d("ScavTrap");
		
		a.attack("Something");
		b.takeDamage(4);
		c.attack("Screen");
		d.attack("RNG");
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
		a.highFivesGuys();
		b.highFivesGuys();
		a.beRepaired(1);
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---FragTrap END---\e[39m" << std::endl << std::endl;
	return (0);
}
