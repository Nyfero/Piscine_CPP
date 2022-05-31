#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	m_type;

	public:
		//Orthodox Canonical Form
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const& src);
		WrongAnimal & operator=(WrongAnimal const& src);
		
		//Constructor
		WrongAnimal(std::string a_type);
		
		//Functions
		virtual void	makeSound() const;
		std::string		getType() const;

};

#endif
