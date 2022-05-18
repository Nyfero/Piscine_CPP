#include "../class/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat Constructor by default call" << std::endl;
	m_type = "WrongCat";
}

WrongCat::~WrongCat()
{ std::cout << "WrongCat Destructor call on: " << this->m_type << std::endl; }

WrongCat::WrongCat(WrongCat const& src): WrongAnimal(src)
{ std::cout << "WrongCat Constructor by copy call" << std::endl; }

WrongCat & WrongCat::operator=(WrongCat const& src)
{
	std::cout << "WrongCat Constructor by assignement call" << std::endl;
	WrongAnimal::operator=(src);
	return (*this);
}

WrongCat::WrongCat(std::string a_type): WrongAnimal(a_type)
{
	std::cout << "WrongCat Constructor surcharged call" << std::endl;
	this->m_type = "WrongCat";
}

void	WrongCat::makeSound() const
{ std::cout << "Pas Miaou" << std::endl; }
