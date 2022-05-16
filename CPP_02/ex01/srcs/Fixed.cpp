#include "../class/Fixed.hpp"

Fixed::Fixed()
{ std::cout << "\e[92m---Default Constructor Call---\e[39m" << std::endl; }

Fixed::~Fixed()
{ std::cout << "\e[92m---Destructor Call---\e[39m" << std::endl; }

Fixed::Fixed(Fixed const& src): m_value(src.m_value)
{ std::cout << "\e[92m---Copy Constructor Call---\e[39m" << std::endl; }

Fixed & Fixed::operator=(Fixed const& src)
{
	std::cout << "\e[92m---Assignement Constructor Call---\e[39m" << std::endl;
	m_value = src.m_value;
	return (*this);
}

Fixed::Fixed(const int nb)
{
	std::cout << "\e[92m---Int Constructor Call---\e[39m" << std::endl;
	this->m_value = (nb << Fixed::m_bits);
}

Fixed::Fixed(const float nb)
{
	std::cout << "\e[92m---Float Constructor Call---\e[39m" << std::endl;
	this->m_value = roundf(nb * (1 << Fixed::m_bits));
}

int		Fixed::getRawBits() const
{ return (m_value); }

void	Fixed::setRawBits(int const raw)
{ m_value = raw; }

float Fixed::toFloat(void) const
{ return ((float)this->m_value / (float)(1 << Fixed::m_bits)); }

int Fixed::toInt(void) const
{ return (this->m_value >> Fixed::m_bits); }

std::ostream & operator << (std::ostream &out, const Fixed &c)
{ return (out << c.toFloat()); }
