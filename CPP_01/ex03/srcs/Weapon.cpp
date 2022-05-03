# include "../class/Weapon.hpp"

Weapon::Weapon(void)
{}

Weapon::Weapon(std::string a_type)
{
	this->setType(a_type);
}

const std::string	&Weapon::getType(void)
{
	return (this->m_type);
}

void	Weapon::setType(std::string a_type)
{
	this->m_type = a_type;
}
