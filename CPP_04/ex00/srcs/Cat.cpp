#include "../class/Cat.hpp"

//					//
//	Constructors	//
//					//

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat Constructor by default call" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat Destructor call" << std::endl;
}

Cat::Cat(Cat const& src): Animal(src) {
	std::cout << "Cat Constructor by copy call" << std::endl;
}

Cat & Cat::operator=(Cat const& src) {
	std::cout << "Cat Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	return (*this);
}

Cat::Cat(std::string a_type): Animal(a_type) {
	std::cout << "Cat Constructor surcharged call" << std::endl;
}

//				//
//	Functions	//
//				//

void	Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}
