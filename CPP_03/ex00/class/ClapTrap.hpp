#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <time.h>
# include <stdlib.h>

class ClapTrap
{
	private:
		std::string	m_name;
		int			m_life;
		int			m_mana;
		int			m_dmg;

	public:
		//Constructors
		ClapTrap();
		~ClapTrap();
		ClapTrap(ClapTrap const& src);
		ClapTrap & operator=(ClapTrap const& src);
		ClapTrap(std::string a_name);

		//Functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

//Display
void	DisplayNoEnergy(void);
void	DisplayRepaired(void);
void	DisplayTakeDmg(void);
void	DisplayAttack(void);
void	DisplayDeath(void);

#endif
