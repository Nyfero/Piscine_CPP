#include "../class/Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog Constructor by default call" << std::endl;
	this->m_type = "Dog";
	this->m_DogBrain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor call on: " << this->m_type << std::endl;
	delete	this->m_DogBrain;
}

Dog::Dog(Dog const& src): Animal(src)
{
	std::cout << "Dog Constructor by copy call" << std::endl;
	this->m_DogBrain = new Brain();
}

Dog & Dog::operator=(Dog const& src)
{
	std::cout << "Dog Constructor by assignement call" << std::endl;
	Animal::operator=(src);
	this->m_DogBrain = new Brain();
	return (*this);
}

Dog::Dog(std::string a_type): Animal(a_type)
{
	std::cout << "Dog Constructor surcharged call" << std::endl;
	this->m_type = "Dog";
	this->m_DogBrain = new Brain();
}

void	Dog::makeSound() const
{ std::cout << "Bark Bark Bark" << std::endl; }
