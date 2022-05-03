#include "../class/Zombie.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\e[92m---START---\e[39m" << std::endl << std::endl;
	
	Zombie zombie("First_Zombie");
	zombie.announce();
	
	std::cout << std::endl;
	std::cout << "\e[92m---INIT---\e[39m" << std::endl << std::endl;
	
	Zombie *horde = zombieHorde(4, "Robert");
	
	std::cout << std::endl;
	std::cout << "\e[92m---ANNOUNCE---\e[39m" << std::endl << std::endl;
	
	std::cout << "zombie 0: ";
	horde[0].announce();
	
	std::cout << std::endl;
	std::cout << "\e[92m---ANNOUNCE ALL---\e[39m" << std::endl << std::endl;
	
	int	i = -1;
	while (++i < 4)
		horde[i].announce();
	
	std::cout << std::endl;
	std::cout << "\e[92m---DELETE---\e[39m" << std::endl << std::endl;
	
	delete [] horde;
	
	std::cout << std::endl;
	std::cout << "\e[92m---END---\e[39m" << std::endl << std::endl;
}
