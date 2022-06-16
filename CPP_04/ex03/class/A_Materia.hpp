#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include "ICharacter.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class ICharacter;

class AMateria
{
	protected:
		std::string	m_type;
	
	public:
		//Constructors
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const& src);
		AMateria & operator=(AMateria const& src);
		AMateria(std::string const & type);
		
		//Functions
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};

#endif
