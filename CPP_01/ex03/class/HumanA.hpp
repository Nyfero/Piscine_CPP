#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
	public:
		HumanA(std::string a_name, Weapon &a_weapon);
		void	attack();
	
	private:
		std::string	m_name;
		Weapon	&m_weapon;
};

#endif
