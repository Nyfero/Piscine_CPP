# include "../class/Ice.hpp"

//					//
//	Constructors	//
//					//

Ice::Ice() {
	std::cout << "Ice Constructor by default call" << std::endl;
	this->m_type = "ice";
}

Ice::~Ice() {
	std::cout << "Ice Destructor call" << std::endl;
}

Ice::Ice(Ice const& src) {
	std::cout << "Ice Constructor by copy call" << std::endl;
	this->m_type = src.m_type;
}

Ice & Ice::operator=(Ice const& src) {
	std::cout << "Ice Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	return (*this);
}

//				//
//	Functions	//
//				//

AMateria	*Ice::clone() const {
	
}
