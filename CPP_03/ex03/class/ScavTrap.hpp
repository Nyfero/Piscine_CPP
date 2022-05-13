#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		//Orthodox Canonical Form
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const& src);
		ScavTrap & operator=(ScavTrap const& src);
		
		//Constructor
		ScavTrap(std::string a_name);
		//Functions
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
