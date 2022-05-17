#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	public:
		Animal();
		~Animal();
		Animal(Animal const& src);
		Animal & operator=(Animal const& src);

	protected:
		std::string	m_type;
};

#endif
