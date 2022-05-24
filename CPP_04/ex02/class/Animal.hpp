#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const& src);
		Animal & operator=(Animal const& src);
		Animal(std::string a_type);
		
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string	m_type;
};

#endif
