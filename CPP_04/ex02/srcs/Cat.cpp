#include "../class/Cat.hpp"

//					//
//	Constructors	//
//					//

Cat::Cat(): A_Animal() {
	std::cout << "Cat Constructor by default call" << std::endl;
	this->m_type = "Cat";
	this->m_brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat Destructor call" << std::endl;
	delete this->m_brain;
}

Cat::Cat(Cat const& src): A_Animal(src) {
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

Cat::Cat(std::string a_type): A_Animal(a_type) {
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
	this->m_brain->set3Ideas("Destroy", "all", "Human");
}

void	Cat::printIdeas() const {
	this->m_brain->printIdeas();
}
