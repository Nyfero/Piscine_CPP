#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class	Cat: public Animal
{
	public:
		//Constructors
		Cat();
		virtual ~Cat();
		Cat(Cat const& src);
		Cat & operator=(Cat const& src);
		Cat(std::string a_type);
		
		//Functions
		virtual void 	makeSound() const;
};

#endif
