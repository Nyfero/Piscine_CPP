#ifndef DOG_HPP
# define DOG_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class	Dog: public A_Animal
{
	private:
		Brain	*m_brain;

	public:
		//Constructors
		Dog();
		virtual ~Dog();
		Dog(Dog const& src);
		Dog & operator=(Dog const& src);
		Dog(std::string a_type);

		//Functions
		virtual void 	makeSound() const;
};

#endif
