#include "../class/DiamondTrap.hpp"

//					//
//	Constructors	//
//					//

DiamondTrap::DiamondTrap(): ClapTrap("DiamondTrap_clap_name"), FragTrap()
	, ScavTrap(), m_name("DiamondTrap") {
	std::cout << "DiamondTrap Constructor by default call" << std::endl;
	this->m_life = 100;
	this->m_mana = 100;
	this->m_dmg = 30;
	std::cout << "m_life: " << this->m_life << "\nm_mana: " << this->m_mana << "\nm_dmg: " << this->m_dmg << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor call on: " << this->m_name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src): ClapTrap(src.m_name + "_clap_name")
	, FragTrap(), ScavTrap(), m_name(src.m_name) {
	std::cout << "DiamondTrap Constructor by copy call" << std::endl;
	this->m_life = src.m_life;
	this->m_mana = src.m_mana;
	this->m_dmg = src.m_dmg;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const& src) {
	std::cout << "DiamondTrap Constructor by assignement call" << std::endl;
	ClapTrap::m_name = src.m_name + "_clap_name";
	this->m_name = src.m_name;
	this->m_life = src.m_life;
	this->m_mana = src.m_mana;
	this->m_dmg = src.m_dmg;
	return (*this);
}

DiamondTrap::DiamondTrap(std::string a_name):  ClapTrap(a_name + "_clap_name")
	, FragTrap(a_name), ScavTrap(a_name), m_name(a_name) {
	std::cout << "DiamondTrap Constructor surcharged call" << std::endl;
	this->m_life = FragTrap::m_life;
	this->m_mana = ScavTrap::m_mana;
	this->m_dmg = FragTrap::m_dmg;
}

//				//
//	Functions	//
//				//

void	DiamondTrap::whoAmI() {
	std::cout << "\e[95m" << this->m_name << ": I'm " << this->m_name << " !\e[39m" << std::endl; 
	std::cout << "\e[95m" << this->m_name << ": but I'm " << ClapTrap::m_name << " too !\e[39m" << std::endl; 
}
