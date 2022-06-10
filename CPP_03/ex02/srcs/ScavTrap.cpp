#include "../class/ScavTrap.hpp"

//					//
//	Constructors	//
//					//

ScavTrap::ScavTrap(): ClapTrap("ScavTrap") {
	std::cout << "ScavTrap Constructor by default call" << std::endl;
	this->m_life = 100;
	this->m_mana = 50;
	this->m_dmg = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor call on: " << this->m_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src): ClapTrap(src) {
	std::cout << "ScavTrap Constructor by copy call" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const& src) {
	this->m_name = src.m_name;
	this->m_life = src.m_life;
	this->m_mana = src.m_mana;
	this->m_dmg = src.m_dmg;
	std::cout << "ScavTrap Constructor by assignement call" << std::endl;
	return (*this);
}

ScavTrap::ScavTrap(std::string a_name): ClapTrap(a_name) {
	std::cout << "ScavTrap Constructor surcharged call" << std::endl;
	this->m_life = 100;
	this->m_mana = 50;
	this->m_dmg = 20;
}

//				//
//	Functions	//
//				//

void	ScavTrap::attack(const std::string& target) {
	std::cout << "\e[96m";
	std::cout << this->m_name << ": try to Scavattack " << target << "\e[39m" << std::endl;
	if (this->m_mana == 0)
	{
		std::cout << this->m_name << ": can't Scavattack " << target << std::endl;
		return ;
	}
	std::cout << this->m_name << ": Scavattack " << target << std::endl;
	std::cout << target << ": take " << this->m_dmg << " dmg" << std::endl; 
	this->m_mana--;
}

void 	ScavTrap::guardGate() {
	std::cout << "\e[96m" << this->m_name << ": is entering in guard mode\e[39m" << std::endl;
}
