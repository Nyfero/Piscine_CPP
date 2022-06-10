#include "../class/Fixed.hpp"

//					//
//	Canonical Form	//
//					//

Fixed::Fixed(): m_value(0) {
	std::cout << "\e[92m---DEFAULT CONSTUCTOR CALL---\e[39m" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "\e[92m---Destructor Call---\e[39m" << std::endl;
}

Fixed::Fixed(Fixed const& src): m_value(src.m_value) {
	std::cout << "\e[92m---Copy Constructor Call---\e[39m" << std::endl;
}

Fixed	& Fixed::operator=(Fixed const& src) {
	std::cout << "\e[92m---Assignement Constructor Call---\e[39m" << std::endl;
	this->m_value = src.m_value;
	return (*this);
}

//				//
//	Functions	//
//				//

int		Fixed::getRawBits() const
{
	std::cout << "\e[93m---getRawBits---\e[39m" << std::endl;
	return (this->m_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "\e[93m---setRawBits---\e[39m" << std::endl;
	this->m_value = raw;
}
