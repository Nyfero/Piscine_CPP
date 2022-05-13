#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		//Orthodox Canonical Form
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(DiamondTrap const& src);
		DiamondTrap & operator=(DiamondTrap const& src);
		
		//Constructor
		DiamondTrap(std::string a_name);
		//Functions
	private:
		std::string 	m_name;
};

#endif
