#ifndef CAT_HPP
# define CAT_HPP

# include "A_Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class	Cat: public A_Animal
{
	private:
		Brain	*m_brain;

	public:
		//Constructors
		Cat();
		virtual ~Cat();
		Cat(Cat const& src);
		Cat & operator=(Cat const& src);
		Cat(std::string a_type);

		//Functions
		virtual void	makeSound() const;
		void			setIdeas();
		void			printIdeas() const;
};

#endif
