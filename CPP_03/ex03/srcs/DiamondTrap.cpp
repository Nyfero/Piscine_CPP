#include "../class/DiamondTrap.hpp"

//					//
//	Canonical Form	//
//					//

DiamondTrap::DiamondTrap(): 
	ClapTrap("DiamondTrap_clap_name"), FragTrap("DiamondTrap"), ScavTrap("DiamondTrap"), m_name("DiamondTrap")
{
	std::cout << "DiamondTrap Constructor by default call" << std::endl;
	this->m_life = FragTrap::m_life;
	this->m_mana = ScavTrap::m_mana;
	this->m_dmg = FragTrap::m_dmg;
}

DiamondTrap::~DiamondTrap()
{ std::cout << "DiamondTrap Destructor call" << std::endl; }

DiamondTrap::DiamondTrap(DiamondTrap const& src): 
	ClapTrap(src.m_name + "_clap_name"), FragTrap(src.m_name), ScavTrap(src.m_name), m_name(src.m_name)
{
	std::cout << "DiamondTrap Constructor by copy call" << std::endl;
	this->m_life = src.m_life;
	this->m_mana = src.m_mana;
	this->m_dmg = src.m_dmg;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const& src)
{
	std::cout << "DiamondTrap Constructor by copy assignement call" << std::endl;
	ClapTrap::m_name = src.m_name + "_clap_name";
	this->m_name = src.m_name;
	this->m_life = src.m_life;
	this->m_mana = src.m_mana;
	this->m_dmg = src.m_dmg;
	return (*this);
}

//				//
//	Constructor	//
//				//

DiamondTrap::DiamondTrap(std::string a_name): 
	ClapTrap(a_name + "_clap_name"), FragTrap(a_name), ScavTrap(a_name), m_name(a_name)
{
	std::cout << "DiamondTrap Constructor surcharged call" << std::endl;
	this->m_life = FragTrap::m_life;
	this->m_mana = ScavTrap::m_mana;
	this->m_dmg = FragTrap::m_dmg;
}

//				//
//	Functions	//
//				//

void	DiamondTrap::whoAmI()
{
	std::cout << "\e[95m" << this->m_name << ": I'm " << m_name << " !\e[39m" << std::endl; 
	std::cout << "\e[95m" << this->m_name << ": but I'm " << ClapTrap::m_name << " too !\e[39m" << std::endl; 
}
