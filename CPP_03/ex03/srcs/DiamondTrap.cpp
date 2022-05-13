#include "../class/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap()
{ std::cout << "DiamondTrap Constructor by default call" << std::endl; }

DiamondTrap::~DiamondTrap()
{ std::cout << "DiamondTrap Destructor call on: " << m_name << std::endl; }

DiamondTrap::DiamondTrap(DiamondTrap const& src): ClapTrap(src)
{ std::cout << "DiamondTrap Constructor by copy call" << std::endl; }

DiamondTrap & DiamondTrap::operator=(DiamondTrap const& src)
{
	std::cout << "DiamondTrap Constructor by copy assignement call" << std::endl;
	ClapTrap::operator=(src);
	return (*this);
}

DiamondTrap::DiamondTrap(std::string a_name): ClapTrap(a_name)
{
	std::cout << "DiamondTrap Constructor surcharged call" << std::endl;
	m_life = 100;
	m_mana = 100;
	m_dmg = 30;
}
