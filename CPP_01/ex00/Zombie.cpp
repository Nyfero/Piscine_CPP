#include "Zombie.hpp"

Zombie::Zombie(std::string a_name): m_name(a_name)
{
	std::cout << "Constructor call on: " << m_name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor call on: " << m_name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
