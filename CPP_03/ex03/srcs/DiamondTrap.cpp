#include "../class/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): 
	ClapTrap(), FragTrap(), ScavTrap(), m_name("NULL")
{ std::cout << "DiamondTrap Constructor by default call" << std::endl; }

DiamondTrap::~DiamondTrap()
{ std::cout << "DiamondTrap Destructor call on: " << this->m_name << std::endl; }

DiamondTrap::DiamondTrap(DiamondTrap const& src): 
	ClapTrap(src), FragTrap(src), ScavTrap(src), m_name(src.m_name)
{ std::cout << "DiamondTrap Constructor by copy call" << std::endl; }

DiamondTrap & DiamondTrap::operator=(DiamondTrap const& src)
{
	std::cout << "DiamondTrap Constructor by copy assignement call" << std::endl;
	ClapTrap::operator=(src);
	return (*this);
}

DiamondTrap::DiamondTrap(std::string a_name): 
	ClapTrap(a_name + "_clap_name"), FragTrap(a_name), ScavTrap(a_name), m_name(a_name)
{
	std::cout << "DiamondTrap Constructor surcharged call" << std::endl;
	this->m_life = FragTrap::m_life;
	this->m_mana = ScavTrap::m_mana;
	this->m_dmg = FragTrap::m_dmg;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\e[95m" << this->m_name << ": I'm " << m_name << " !\e[39m" << std::endl; 
	std::cout << "\e[95m" << this->m_name << ": but I'm " << ClapTrap::m_name << " too !\e[39m" << std::endl; 
}
