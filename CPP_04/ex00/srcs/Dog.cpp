#include "../class/Dog.hpp"

Dog::Dog(): Animal()
{ std::cout << "Dog Constructor by default call" << std::endl; }

Dog::~Dog()
{ std::cout << "Dog Destructor call on: " << this->m_type << std::endl; }

Dog::Dog(Dog const& src): Animal(src)
{ std::cout << "Dog Constructor by copy call" << std::endl; }

Dog Dog::operator=(Dog const& src)
{
	std::cout << "Dog Constructor by assignement call" << std::endl;
	return (*this);
}

Dog::Dog(std::string a_type): Animal(a_type)
{
	std::cout << "Dog Constructor surcharged call" << std::endl;
	this->m_type = "Dog";
}

void	Dog::makeSound() const
{ std::cout << "Bark Bark Bark" << std::endl; }
