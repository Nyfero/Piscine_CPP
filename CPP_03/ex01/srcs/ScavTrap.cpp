#include "../class/ScavTrap.hpp"

//					//
//	Canonical Form	//
//					//

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Constructor by default call" << std::endl;
	m_life = 100;
	m_mana = 50;
	m_dmg = 20;
}

ScavTrap::~ScavTrap()
{ std::cout << "ScavTrap Destructor call on: " << m_name << std::endl; }

ScavTrap::ScavTrap(ScavTrap const& src): ClapTrap(src)
{ std::cout << "ScavTrap Constructor by copy call" << std::endl; }

ScavTrap & ScavTrap::operator=(ScavTrap const& src)
{
	ClapTrap::operator=(src);
	std::cout << "ScavTrap Constructor by copy assignement call" << std::endl;
	return (*this);
}

//				//
//	Constructor	//
//				//

ScavTrap::ScavTrap(std::string a_name): ClapTrap(a_name)
{
	std::cout << "ScavTrap Constructor surcharged call" << std::endl;
	m_life = 100;
	m_mana = 50;
	m_dmg = 20;
}

//				//
//	Functions	//
//				//

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "\e[96m";
	std::cout << m_name << ": try to Scavattack " << target << "\e[39m" << std::endl;
	if (m_mana == 0)
	{
		std::cout << m_name << ": can't Scavattack " << target << std::endl;
		return ;
	}
	std::cout << m_name << ": Scavattack " << target << std::endl;
	std::cout << target << ": take " << m_dmg << " dmg" << std::endl; 
	m_mana--;
}

void 	ScavTrap::guardGate()
{ std::cout << "\e[96m" << m_name << ": is entering in guard mode\e[39m" << std::endl;}
