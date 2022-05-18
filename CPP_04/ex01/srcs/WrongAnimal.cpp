# include "../class/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): m_type("WrongAnimal")
{ std::cout << "WrongAnimal Constructor by default call" << std::endl; }

WrongAnimal::~WrongAnimal()
{ std::cout << "WrongAnimal Destructor call on: " << this->m_type << std::endl; }

WrongAnimal::WrongAnimal(WrongAnimal const& src): m_type(src.m_type)
{ std::cout << "WrongAnimal Constructor by copy call" << std::endl; }

WrongAnimal & WrongAnimal::operator=(WrongAnimal const& src)
{
	std::cout << "WrongAnimal Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	return (*this);
}

WrongAnimal::WrongAnimal(std::string a_type): m_type(a_type)
{ std::cout << "WrongAnimal Constructor surcharged call" << std::endl; }

void	WrongAnimal::makeSound() const
{ std::cout << "Au revoir" << std::endl; }

std::string	WrongAnimal::getType() const
{ return (this->m_type); }
