#include "../class/Zombie.hpp"

void randomChump(std::string a_name)
{
	Zombie	chump(a_name);
	chump.announce();
}
