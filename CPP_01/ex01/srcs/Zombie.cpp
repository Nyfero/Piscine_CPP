#include "../class/Zombie.hpp"

Zombie::Zombie(): m_name("NULL")
{
	std::cout << "Constructor call" << std::endl;
}

Zombie::Zombie(std::string a_name): m_name(a_name)
{
	std::cout << "Constructor surcharged call on: " << m_name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructeur call on: " << m_name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string a_name)
{
	m_name = a_name;
}
