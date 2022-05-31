#include "../class/Dog.hpp"

//					//
//	Canonical Form	//
//					//

Dog::Dog(): Animal()
{
	std::cout << "Dog Constructor by default call" << std::endl;
	m_type = "Dog";
}

Dog::~Dog()
{ std::cout << "Dog Destructor call" << std::endl; }

Dog::Dog(Dog const& src): Animal(src)
{ std::cout << "Dog Constructor by copy call" << std::endl; }

Dog & Dog::operator=(Dog const& src)
{
	std::cout << "Dog Constructor by assignement call" << std::endl;
	m_type = src.m_type;
	return (*this);
}

//				//
//	Constructor	//
//				//

Dog::Dog(std::string a_type): Animal(a_type)
{ std::cout << "Dog Constructor surcharged call" << std::endl; }

//				//
//	Functions	//
//				//

void	Dog::makeSound() const
{ std::cout << "Bark Bark Bark" << std::endl; }
