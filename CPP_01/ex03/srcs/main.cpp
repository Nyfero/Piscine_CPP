# include "../class/Weapon.hpp"
# include "../class/HumanA.hpp"
# include "../class/HumanB.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\e[92m---HUMAN A---\e[39m" << std::endl << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	
	std::cout << std::endl;
	std::cout << "\e[92m---HUMAN B---\e[39m" << std::endl << std::endl;
	/*{	
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}*/

	std::cout << std::endl;
	std::cout << "\e[92m---END---\e[39m" << std::endl << std::endl;
	return (0);
}
