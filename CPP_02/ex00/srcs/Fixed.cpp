#include "../class/Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "\e[92m---Default Constructor Call---\e[39m" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "\e[92m---Destructor Call---\e[39m" << std::endl;
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "\e[92m---Copy Constructor Call---\e[39m" << std::endl;
	m_fixed = src.getRawBits();
}

void	Fixed::operator=(Fixed const& src)
{
	std::cout << "\e[92m---Assignement Constructor Call---\e[39m" << std::endl;
	m_fixed = src.getRawBits();
}

int		Fixed::getRawBits() const
{
	std::cout << "\e[93m---getRawBits---\e[39m" << std::endl;
	return (m_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "\e[93m---setRawBits---\e[39m" << std::endl;
	m_fixed = raw;
}
