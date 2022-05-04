# include "../class/HumanB.hpp"

HumanB::HumanB(std::string a_name): m_name(a_name)
{}

void	HumanB::attack()
{
	std::cout << m_name << " attack with their " << m_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &a_weapon)
{
	m_weapon = &a_weapon;
}
