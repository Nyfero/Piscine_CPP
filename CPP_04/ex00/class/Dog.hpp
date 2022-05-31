#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class	Dog: public Animal
{
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
