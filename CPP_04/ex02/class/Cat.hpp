#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class	Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(Cat const& src);
		Cat & operator=(Cat const& src);
		Cat(std::string a_type);

		virtual void	makeSound() const;
		void			setIdeas();
		void			printIdeas() const;

	private:
		Brain	*m_brain;
};

#endif
