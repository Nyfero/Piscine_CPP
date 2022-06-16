# include "../class/Cure.hpp"

//					//
//	Constructors	//
//					//

Cure::Cure() {
	std::cout << "Cure Constructor by default call" << std::endl;
	this->m_type = "cure";
}

Cure::~Cure() {
	std::cout << "Cure Destructor call" << std::endl;
}

Cure::Cure(Cure const& src) {
	std::cout << "Cure Constructor by copy call" << std::endl;
	this->m_type = src.m_type;
}

Cure & Cure::operator=(Cure const& src) {
	std::cout << "Cure Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	return (*this);
}

//				//
//	Functions	//
//				//

AMateria	*Cure::clone() const {
	AMateria	*dup = new Cure();
	
	*dup = *this;
	return (dup);
}

void	Cure::use(ICharacter& target) {
	std::cout << "\e[92m* heals " << target.getName() << "’s wounds *\e[39m" << std::endl;
}
