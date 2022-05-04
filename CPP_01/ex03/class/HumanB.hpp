#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
	public:
		HumanB(std::string a_name);
		void	setWeapon(Weapon &a_weapon);
		void	attack();
	
	private:
		std::string	m_name;
		Weapon	*m_weapon;
};

#endif
