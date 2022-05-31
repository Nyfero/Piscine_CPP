#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <string>
# include <iostream>

class	WrongCat: public WrongAnimal
{
	public:
		//Orthodox Canonical Form
		WrongCat();
		virtual ~WrongCat();
		WrongCat(WrongCat const& src);
		WrongCat & operator=(WrongCat const& src);
		
		//Constructor
		WrongCat(std::string a_type);
		
		//Functions
		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif
