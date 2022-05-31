#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class	Dog: public Animal
{
	private:
		Brain	*m_brain;

	public:
		//Orthodox Canonical Form
		Dog();
		virtual ~Dog();
		Dog(Dog const& src);
		Dog & operator=(Dog const& src);
		
		//Constructor
		Dog(std::string a_type);

		//Functions
		virtual void 	makeSound() const;

};

#endif
