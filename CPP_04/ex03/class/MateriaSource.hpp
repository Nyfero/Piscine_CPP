#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "A_Materia.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*m_memory[4];
		int			m_index;

	public:
		//Constructors
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource const& src);
		MateriaSource & operator=(MateriaSource const& src);
		
		//Functions
		virtual void learnMateria(AMateria *m);
		virtual AMateria * createMateria(std::string const& type);
};

#endif
