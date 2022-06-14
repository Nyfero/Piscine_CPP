#include "../class/Cat.hpp"

//					//
//	Constructors	//
//					//

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat Constructor by default call" << std::endl;
	this->m_brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat Destructor call" << std::endl;
	delete this->m_brain;
}

Cat::Cat(Cat const& src): Animal(src) {
	std::cout << "Cat Constructor by copy call" << std::endl;
	this->m_brain = new Brain(*src.m_brain);
}

Cat & Cat::operator=(Cat const& src) {
	std::cout << "Cat Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	if (this->m_brain)
		delete this->m_brain;
	this->m_brain = new Brain(*src.m_brain);
	return (*this);
}

Cat::Cat(std::string a_type): Animal(a_type) {
	std::cout << "Cat Constructor surcharged call" << std::endl;
	this->m_brain = new Brain();
}

//				//
//	Functions	//
//				//

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}

void	Cat::setIdeas() {
	std::cout << "---Set Ideas---" << std::endl;
	this->m_brain->set3Ideas("Destroy", "all", "Human");
}

void	Cat::printIdeas() const {
	std::cout << "---Show Ideas---" << std::endl;
	this->m_brain->printIdeas();
}
