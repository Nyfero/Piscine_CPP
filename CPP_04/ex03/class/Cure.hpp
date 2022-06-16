#ifndef CURE_HPP
# define CURE_HPP

# include "A_Materia.hpp"
# include "ICharacter.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class Cure: public AMateria
{
	private:
		
	public:
		//Constructors
		Cure();
		~Cure();
		Cure(Cure const& src);
		Cure & operator=(Cure const& src);
		
		//Functions
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
