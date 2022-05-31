#include "../class/Animal.hpp"

//					//
//	Canonical Form	//
//					//

Animal::Animal(): m_type("Animal")
{ std::cout << "Animal Constructor by default call" << std::endl; }

Animal::~Animal()
{ std::cout << "Animal Destructor call" << std::endl; }

Animal::Animal(Animal const& src): m_type(src.m_type)
{ std::cout << "Animal Constructor by copy call" << std::endl; }

Animal & Animal::operator=(Animal const& src)
{
	std::cout << "Animal Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	return (*this);
}

//				//
//	Constructor	//
//				//

Animal::Animal(std::string a_type): m_type(a_type)
{ std::cout << "Animal Constructor surcharged call" << std::endl; }

//				//
//	Functions	//
//				//

void	Animal::makeSound() const
{ std::cout << "Salut" << std::endl; }

std::string	Animal::getType() const
{ return (this->m_type); }
