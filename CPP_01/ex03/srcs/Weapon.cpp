# include "../class/Weapon.hpp"

Weapon::Weapon(void)
{}

Weapon::Weapon(std::string a_type)
{
	m_type = a_type;
}

const std::string	&Weapon::getType(void)
{
	return (m_type);
}

void	Weapon::setType(std::string a_type)
{
	m_type = a_type;
}
