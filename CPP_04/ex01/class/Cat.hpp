#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class	Cat: public Animal
{
	private:
		Brain	*m_brain;

	public:
		//Orthodox Canonical Form
		Cat();
		virtual ~Cat();
		Cat(Cat const& src);
		Cat & operator=(Cat const& src);
		
		//Constructor
		Cat(std::string a_type);

		//Functions
		virtual void	makeSound() const;
		void			setIdeas();
		void			printIdeas() const;

};

#endif
