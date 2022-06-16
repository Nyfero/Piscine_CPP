#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <string>
# include <iostream>

class	WrongCat: public WrongAnimal
{
	public:
		//Constructors
		WrongCat();
		virtual ~WrongCat();
		WrongCat(WrongCat const& src);
		WrongCat & operator=(WrongCat const& src);
		WrongCat(std::string a_type);
		
		//Functions
		void	makeSound() const;
};

#endif
