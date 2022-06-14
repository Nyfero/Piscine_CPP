#include "../class/Dog.hpp"

//					//
//	Constructors	//
//					//

Dog::Dog(): A_Animal("Dog") {
	std::cout << "Dog Constructor by default call" << std::endl;
	this->m_brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog Destructor call" << std::endl;
	delete	this->m_brain;
}

Dog::Dog(Dog const& src): A_Animal(src) {
	std::cout << "Dog Constructor by copy call" << std::endl;
	this->m_brain = new Brain(*src.m_brain);
}

Dog & Dog::operator=(Dog const& src) {
	std::cout << "Dog Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	if (this->m_brain)
		delete this->m_brain;
	this->m_brain = new Brain(*src.m_brain);
	return (*this);
}

Dog::Dog(std::string a_type): A_Animal(a_type) {
	std::cout << "Dog Constructor surcharged call" << std::endl;
	this->m_brain = new Brain();
}

//				//
//	Functions	//
//				//

void	Dog::makeSound() const {
	std::cout << "Bark Bark Bark" << std::endl;
}
