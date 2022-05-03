#include "Zombie.hpp"

Zombie::Zombie(std::string a_name): m_name(a_name)
{}

Zombie::~Zombie()
{
	std::cout << "Destructeur call on: " << m_name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
