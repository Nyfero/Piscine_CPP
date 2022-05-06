#include "../class/Fixed.hpp"

Fixed::Fixed(): m_fixed(0), m_frac(0)
{
	std::cout << "\e[92m---DEFAULT CONSTUCTOR CALL---\e[39m" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "\e[92m---DESTRUCTOR CALL---\e[39m" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "\e[92m---COPY CONSTUCTOR CALL---\e[39m" << std::endl;
	*this = f;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "\e[92m---ASSIGNMENT CONSTUCTOR CALL---\e[39m" << std::endl;
	(void)f;
	return (*this);
}
