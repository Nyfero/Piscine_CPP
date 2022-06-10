#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class FragTrap : public ClapTrap
{
	public:
		//Constructors
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const& src);
		FragTrap & operator=(FragTrap const& src);
		FragTrap(std::string a_name);
		
		//Functions
		void	highFivesGuys(void);
};

#endif
