# include "../class/A_Materia.hpp"

//					//
//	Constructors	//
//					//

AMateria::AMateria(): m_type("AMateria") {
	std::cout << "AMateria Constructor by default call" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor call" << std::endl;
}

AMateria::AMateria(AMateria const& src): m_type(src.m_type) {
	std::cout << "AMateria Constructor by copy call" << std::endl;
}

AMateria & AMateria::operator=(AMateria const& src) {
	std::cout << "AMateria Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	return (*this);
}

AMateria::AMateria(std::string const& type): m_type(type) {
	std::cout << "A_Materia Constructor surcharged call" << std::endl;
}

//				//
//	Functions	//
//				//

std::string const&	AMateria::getType() const {
	return (this->m_type);
}
