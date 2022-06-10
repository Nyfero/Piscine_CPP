#include "../class/Fixed.hpp"

//					//
//	Canonical Form	//
//					//

Fixed::Fixed(): m_value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(Fixed const& src): m_value(src.m_value) {}

Fixed & Fixed::operator=(Fixed const& src) {
	this->m_value = src.m_value;
	return (*this);
}

//					//
//	Constructors	//
//					//

Fixed::Fixed(const int nb) {
	this->m_value = (nb << Fixed::m_bits);
}

Fixed::Fixed(const float nb) {
	this->m_value = roundf(nb * (1 << Fixed::m_bits));
}

//				//
//	Functions	//
//				//

int		Fixed::getRawBits() const {
	return (this->m_value);
}

void	Fixed::setRawBits(int const raw) {
	this->m_value = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)m_value / (float)(1 << Fixed::m_bits));
}

int		Fixed::toInt(void) const {
	return (m_value >> Fixed::m_bits);
}

//				//
//	Min		Max	//
//				//

Fixed & Fixed::min(Fixed & a, Fixed & b) {
	return (a < b ? a : b);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
	return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
	return (a > b ? a : b);
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
	return (a > b ? a : b);
}


//				//
//	Operators	//
//				//

bool	Fixed::operator>(Fixed const& a) const {
	return (this->m_value > a.m_value);
}

bool	Fixed::operator<(Fixed const& a) const {
	return (this->m_value < a.m_value);
}

bool	Fixed::operator>=(Fixed const& a) const {
	return (this->m_value >= a.m_value);
}

bool	Fixed::operator<=(Fixed const& a) const {
	return (this->m_value <= a.m_value);
}

bool	Fixed::operator==(Fixed const& a) const {
	return (this->m_value == a.m_value);
}

bool	Fixed::operator!=(Fixed const& a) const {
	return (this->m_value != a.m_value);
}

Fixed	Fixed::operator+(Fixed const& a) {
	Fixed	res;

	res.m_value = this->m_value + a.m_value;
	return (res);
}

Fixed	Fixed::operator-(Fixed const& a) {
	Fixed	res;
	
	res.m_value = this->m_value - a.m_value;
	return (res);
}

//On cast en long pour pouvoir dépasser max int
Fixed	Fixed::operator*(Fixed const& a) {
	Fixed		res;
	long int	x;
	long int	y;

	x = (long)this->m_value;
	y = (long)a.m_value;
	res.m_value = (x * y) / (1 << res.m_bits);
	return res;
}

Fixed	Fixed::operator/(Fixed const& a) {
	Fixed		res;
	long int	x;
	long int	y;

	x = (long)this->m_value;
	y = (long)a.m_value;
	res.m_value = (x * (1 << res.m_bits) / y);
	return res;
}

Fixed & Fixed::operator++() {
	++this->m_value;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp;

	tmp = *this;
	++this->m_value;
	return (tmp);
}

Fixed & Fixed::operator--() {
	--this->m_value;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp;

	tmp = *this;
	--this->m_value;
	return (tmp);
}

//			//
//	Display	//
//			//

std::ostream & operator << (std::ostream &out, const Fixed &c) {
	return (out << c.toFloat());
}
