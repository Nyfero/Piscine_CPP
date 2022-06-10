#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

# include <string>
# include <iostream>

class	A_Animal
{
	protected:
		std::string	m_type;

	public:
		//Constructors
		A_Animal();
		virtual ~A_Animal();
		A_Animal(A_Animal const& src);
		A_Animal & operator=(A_Animal const& src);
		A_Animal(std::string a_type);
		
		//Functions
		virtual void	makeSound() const = 0;
		std::string		getType() const;
};

#endif
