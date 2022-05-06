#include "../class/Fixed.hpp"

Fixed::Fixed(): m_fixed(0)
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
	if (this != &f)
		m_fixed.setRawBits(f.getRawBits());
	return (*this);
}

int		Fixed::getRawBits(void)
{
	std::cout << "\e[92m---GETRAWBITS---\e[39m" << std::endl;
	return (m_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "\e[92m---SETRAWBITS---\e[39m" << std::endl;
	m_fixed = raw;
}
