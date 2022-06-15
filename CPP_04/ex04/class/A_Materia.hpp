#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <string>
# include <iostream>
# include <iomanip>

class AMateria
{
	protected:
		std::string	m_type;
	
	public:
		//Constructors
		AMateria(std::string const & type);
		
		//Functions
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
