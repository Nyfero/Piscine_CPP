#include "../class/Animal.hpp"

Animal::Animal()
{ std::cout << "Animal Constructor by default call" << std::endl; }

Animal::~Animal()
{ std::cout << "Animal Destructor call on: " << this->m_type << std::endl; }

Animal::Animal(Animal const& src): m_type(src.m_type)
{ std::cout << "Animal Constructor by copy call" << std::endl; }

Animal Animal::operator=(Animal const& src)
{
	std::cout << "Animal Constructor by assignement call" << std::endl;
	return (*this);
}
