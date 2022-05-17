#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>

class	Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(Cat const& src);
		Cat & operator=(Cat const& src);
		Cat(std::string a_type);
		
		virtual void 	makeSound() const;
};

#endif
