#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie("First_Zombie");
	zombie.announce();
	
	std::cout << "----------" << std::endl;
	randomChump("Zombie_temp_0");
	randomChump("Zombie_temp_1");
	
	std::cout << "---------" << std::endl;
	Zombie *def = newZombie("Zombie_perma_0");
	def->announce();
	delete def;
	
	std::cout << "---------" << std::endl;
	return (0);
}
