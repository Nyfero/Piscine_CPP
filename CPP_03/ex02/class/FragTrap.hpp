#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap : public ClapTrap
{
	public:
		//Orthodox Canonical Form
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const& src);
		FragTrap & operator=(FragTrap const& src);
		
		//Constructor
		FragTrap(std::string a_name);
		//Functions
};

#endif
