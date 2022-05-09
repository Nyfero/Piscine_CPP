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
	m_value = src.getRawBits();
}

void	Fixed::operator=(Fixed const& src)
{
	std::cout << "\e[92m---Assignement Constructor Call---\e[39m" << std::endl;
	m_value = src.getRawBits();
}

Fixed::Fixed(const int nb)
{
	std::cout << "\e[92m---Int Constructor Call---\e[39m" << std::endl;
	this->setRawBits(nb);
}

Fixed::Fixed(const float nb)
{
	std::cout << "\e[92m---Float Constructor Call---\e[39m" << std::endl;
	this->setRawBits(roundf(nb));
}

int		Fixed::getRawBits() const
{
	// std::cout << "\e[93m---getRawBits---\e[39m" << std::endl;
	return (m_value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "\e[93m---setRawBits---\e[39m" << std::endl;
	m_value = raw;
}

float Fixed::toFloat(void) const
{
	// std::cout << "\e[93m---toFloat---\e[39m" << std::endl;
	return ((float)m_value);
}

int Fixed::toInt(void) const
{
	// std::cout << "\e[93m---toInt---\e[39m" << std::endl;
	return (roundf(m_value));
}

std::ostream & operator << (std::ostream &out, const Fixed &c)
{
	out << c.toFloat();
	return out;
}
