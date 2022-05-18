#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class	Dog: public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(Dog const& src);
		Dog & operator=(Dog const& src);
		Dog(std::string a_type);
		
		virtual void 	makeSound() const;
};

#endif
