#include "Zombie.hpp"

Zombie* newZombie(std::string a_name)
{
	return new Zombie(a_name);
}
