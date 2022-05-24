#include "../class/A_Animal.hpp"

A_Animal::A_Animal(): m_type("A_Animal")
{ std::cout << "A_Animal Constructor by default call" << std::endl; }

A_Animal::~A_Animal()
{ std::cout << "A_Animal Destructor call" << std::endl; }

A_Animal::A_Animal(A_Animal const& src): m_type(src.m_type)
{ std::cout << "A_Animal Constructor by copy call" << std::endl; }

A_Animal & A_Animal::operator=(A_Animal const& src)
{
	std::cout << "A_Animal Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	return (*this);
}

A_Animal::A_Animal(std::string a_type): m_type(a_type)
{ std::cout << "A_Animal Constructor surcharged call" << std::endl; }

std::string	A_Animal::getType() const
{ return (this->m_type); }
