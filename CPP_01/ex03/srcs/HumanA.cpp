# include "../class/HumanA.hpp"

HumanA::HumanA(std::string a_name, Weapon a_weapon)
{
	m_name = a_name;
	m_weapon = a_weapon;
}

void	HumanA::attack()
{
	std::cout << m_name << " attack with their " << this->m_weapon.getType() << std::endl;
}
