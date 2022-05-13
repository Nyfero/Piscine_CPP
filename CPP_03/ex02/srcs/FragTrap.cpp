#include "../class/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{ std::cout << "FragTrap Constructor by default call" << std::endl; }

FragTrap::~FragTrap()
{ std::cout << "FragTrap Destructor call on: " << m_name << std::endl; }

FragTrap::FragTrap(FragTrap const& src): ClapTrap(src)
{ std::cout << "FragTrap Constructor by copy call" << std::endl; }

FragTrap & FragTrap::operator=(FragTrap const& src)
{
	std::cout << "FragTrap Constructor by copy assignement call" << std::endl;
	ClapTrap::operator=(src);
	return (*this);
}

FragTrap::FragTrap(std::string a_name): ClapTrap(a_name)
{
	std::cout << "FragTrap Constructor surcharged call" << std::endl;
	m_life = 100;
	m_mana = 50;
	m_dmg = 20;
}
