#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const& src);
		WrongAnimal & operator=(WrongAnimal const& src);
		WrongAnimal(std::string a_type);
		
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string	m_type;
};

#endif
