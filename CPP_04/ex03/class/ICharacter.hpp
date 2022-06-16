#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "A_Materia.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class AMateria;

class ICharacter
{
	public:
		//Destructor
		virtual ~ICharacter() {}
		
		//Functions
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		virtual AMateria *getSpell(int idx) const = 0;
};

#endif
