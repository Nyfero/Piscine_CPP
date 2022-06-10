#include "../class/FragTrap.hpp"

//					//
//	Constructors	//
//					//

FragTrap::FragTrap(): ClapTrap("FragTrap") {
	std::cout << "FragTrap Constructor by default call" << std::endl;
	this->m_life = 100;
	this->m_mana = 100;
	this->m_dmg = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor call on: " << this->m_name << std::endl;
}

FragTrap::FragTrap(FragTrap const& src): ClapTrap(src) {
	std::cout << "FragTrap Constructor by copy call" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const& src) {
	std::cout << "FragTrap Constructor by assignement call" << std::endl;
	this->m_name = src.m_name;
	this->m_life = src.m_life;
	this->m_mana = src.m_mana;
	this->m_dmg = src.m_dmg;
	return (*this);
}

FragTrap::FragTrap(std::string a_name): ClapTrap(a_name) {
	std::cout << "FragTrap Constructor surcharged call" << std::endl;
	this->m_life = 100;
	this->m_mana = 100;
	this->m_dmg = 30;
}

//				//
//	Functions	//
//				//

void	FragTrap::highFivesGuys() {
	std::cout << "\e[95m" << this->m_name << ": High Fives Guys !\e[39m" << std::endl;
}
