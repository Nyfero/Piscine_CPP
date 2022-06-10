#include "../class/ClapTrap.hpp"

//					//
//	Constructors	//
//					//

ClapTrap::ClapTrap(): m_name("ClapTrap"), m_life(10), m_mana(10), m_dmg(0) {
	std::cout << "Constructor by default call" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor call on: " << this->m_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src): m_name(src.m_name), m_life(src.m_life)
	, m_mana(src.m_mana), m_dmg(src.m_dmg) {
	std::cout << "Constructor by copy call" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const& src) {
	std::cout << "Constructor by assignement call" << std::endl;
	this->m_name = src.m_name;
	this->m_life = src.m_life;
	this->m_mana = src.m_mana;
	this->m_dmg = src.m_dmg;
	return (*this);
}

ClapTrap::ClapTrap(std::string a_name): m_name(a_name), m_life(10), m_mana(10)
	, m_dmg(0) {
	std::cout << "Constructor surcharged call" << std::endl;
}

//				//
//	Functions	//
//				//

void	ClapTrap::attack(const std::string& target) {
	std::cout << "\e[93m";
	std::cout << this->m_name << ": try to attack " << target << "\e[39m" << std::endl;
	if (this->m_mana == 0)
	{
		std::cout << this->m_name << ": can't attack " << target << std::endl;
		return ;
	}
	std::cout << this->m_name << ": attack " << target << std::endl;
	std::cout << target << ": take " << this->m_dmg << " dmg" << std::endl; 
	this->m_mana--;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "\e[91m";
	std:: cout << this->m_name << ": take " << amount << " dmg" << "\e[39m" << std::endl; 
	this->m_life -= amount;
	if (this->m_life <= 0)
		this->m_life = 0;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "\e[93m";
	std:: cout << this->m_name << ": try to repair" << "\e[39m" << std::endl;
	if (this->m_mana == 0)
	{
		std:: cout << this->m_name << ": can't get fixed" << std::endl;
		return ;
	}
	std:: cout << this->m_name << ": is reparing" << std::endl;
	this->m_mana--;
	this->m_life += amount;
}
