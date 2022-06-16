#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "A_Materia.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class Character: public ICharacter
{
	private:
		std::string	m_name;
		int			m_index;
		int			m_max;
		AMateria	*m_inventory[4];
		
	public:
		//Constructors
		Character();
		~Character();
		Character(Character const& src);
		Character & operator=(Character const& src);
		Character(std::string a_name);
		
		//Functions
		std::string const& getName() const;
		void		equip(AMateria *m);
		void		unequip(int idx);
		void		use(int idx, ICharacter& target);
		AMateria	*getSpell(int idx) const;
};

#endif
