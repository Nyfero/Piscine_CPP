#ifndef ICE_HPP
# define ICE_HPP

# include "A_Materia.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class Ice: public AMateria
{
	private:
		
	public:
		//Constructors
		Ice();
		~Ice();
		Ice(Ice const& src);
		Ice & operator=(Ice const& src);
		
		//Functions
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
