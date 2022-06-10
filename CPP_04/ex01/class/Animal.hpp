#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	protected:
		std::string	m_type;

	public:
		//Constructors
		Animal();
		virtual ~Animal();
		Animal(Animal const& src);
		Animal & operator=(Animal const& src);
		Animal(std::string a_type);
		
		//Functions
		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif
