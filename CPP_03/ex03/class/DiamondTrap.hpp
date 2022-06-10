#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string 	m_name;

	public:
		//Constructor
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(DiamondTrap const& src);
		DiamondTrap & operator=(DiamondTrap const& src);
		DiamondTrap(std::string a_name);
		
		//Functions
		void	whoAmI();
		
};

#endif
