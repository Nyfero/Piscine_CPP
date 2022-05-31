#include "../class/ClapTrap.hpp"

//					//
//	Canonical Form	//
//					//

ClapTrap::ClapTrap(): m_name("ClapTrap"), m_life(10), m_mana(10), m_dmg(0)
{ std::cout << "ClapTrap Constructor by default call" << std::endl; }

ClapTrap::~ClapTrap()
{ std::cout << "ClapTrap Destructor call" << std::endl; }

ClapTrap::ClapTrap(ClapTrap const& src): m_name(src.m_name),  m_life(src.m_life), m_mana(src.m_mana), m_dmg(src.m_dmg)
{ std::cout << "ClapTrap Constructor by copy call" << std::endl; }

ClapTrap & ClapTrap::operator=(ClapTrap const& src)
{
	std::cout << "ClapTrap Constructor by copy assignement call" << std::endl;
	m_name = src.m_name;
	m_life = src.m_life;
	m_mana = src.m_mana;
	m_dmg = src.m_dmg;
	return (*this);
}

//				//
//	Constructor	//
//				//

ClapTrap::ClapTrap(std::string a_name): m_name(a_name), m_life(10), m_mana(10), m_dmg(0)
{ std::cout << "ClapTrap Constructor surcharged call" << std::endl; }

//				//
//	Functions	//
//				//

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "\e[93m";
	std::cout << m_name << ": try to attack " << target << "\e[39m" << std::endl;
	if (m_mana == 0)
	{
		std::cout << m_name << ": can't attack " << target << std::endl;
		return ;
	}
	std::cout << m_name << ": attack " << target << std::endl;
	std::cout << target << ": take " << m_dmg << " dmg" << std::endl; 
	m_mana--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\e[91m";
	std:: cout << m_name << ": take " << amount << " dmg" << "\e[39m" << std::endl; 
	m_life -= amount;
	if (m_life <= 0)
		m_life = 0;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "\e[93m";
	std:: cout << m_name << ": try to repair" << "\e[39m" << std::endl;
	if (m_mana == 0)
	{
		std:: cout << m_name << ": can't get fixed" << std::endl;
		return ;
	}
	std:: cout << m_name << ": is reparing" << std::endl;
	m_mana--;
	m_life += amount;
}
