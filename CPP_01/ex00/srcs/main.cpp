#include "../class/Zombie.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\e[92m---START---\e[39m" << std::endl << std::endl;
	Zombie zombie("First_Zombie");
	zombie.announce();
	
	std::cout << std::endl;
	std::cout << "\e[92m---RANDOM CHUMP---\e[39m" << std::endl << std::endl;
	randomChump("Zombie_0");
	randomChump("Zombie_1");
	
	std::cout << std::endl;
	std::cout << "\e[92m---NEW ZOMBIE---\e[39m" << std::endl << std::endl;
	Zombie *def = newZombie("Zombie_0");
	def->announce();
	delete def;
	
	std::cout << std::endl;
	std::cout << "\e[92m---END---\e[39m" << std::endl << std::endl;
	return (0);
}
