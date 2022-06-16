#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "A_Materia.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class IMateriaSource
{
	public:
		//Destructor
		virtual ~IMateriaSource() {}
		
		//Functions
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
