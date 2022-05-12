#include "../class/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{ std::cout << "ScavTrap Constructor by default call" << std::endl; }

ScavTrap::~ScavTrap()
{ std::cout << "ScavTrap Destructor call on: " << m_name << std::endl; }

ScavTrap::ScavTrap(ScavTrap const& src): ClapTrap(src)
{ std::cout << "ScavTrap Constructor by copy call" << std::endl; }

ScavTrap & ScavTrap::operator=(ScavTrap const& src)
{
	std::cout << "ScavTrap Constructor by copy assignement call" << std::endl;
	m_name = src.m_name;
	m_life = src.m_life;
	m_mana = src.m_mana;
	m_dmg = src.m_dmg;
	return (*this);
}

ScavTrap::ScavTrap(std::string a_name): ClapTrap(a_name)
{ std::cout << "ScavTrap Constructor surcharged call" << std::endl; }
