#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string a_type);
		const std::string	&getType(void);
		void		setType(std::string a_type);
		
	private:
		std::string m_type;
};

#endif
