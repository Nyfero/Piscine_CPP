#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	Animal
{
	private:
		Animal();
		virtual ~Animal();
		Animal(Animal const& src);
		Animal & operator=(Animal const& src);
		Animal(std::string a_type);
	
	public:
		
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string	m_type;
};

#endif
