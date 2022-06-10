#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					m_value;
		static const int	m_bits = 8;

	public:
		//Orthodox Canonical Form
		Fixed();
		~Fixed();
		Fixed(Fixed const& src);
		Fixed & operator=(Fixed const& src);
		
		//Constructor
		Fixed(const int nb);
		Fixed(const float nb);
		
		//Functions
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		//Min-Max
		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed const& min(Fixed const& a, Fixed const& b);
		static Fixed & max(Fixed & a, Fixed & b);
		static Fixed const& max(Fixed const& a, Fixed const& b);
		
		//Operators
		bool	operator > (Fixed const& a) const;
		bool	operator < (Fixed const& a) const;
		bool	operator >= (Fixed const& a) const;
		bool	operator <= (Fixed const& a) const;
		bool	operator == (Fixed const& a) const;
		bool	operator != (Fixed const& a) const;
		Fixed	operator + (Fixed const& a);
		Fixed	operator - (Fixed const& a);
		Fixed	operator * (Fixed const& a);
		Fixed	operator / (Fixed const& a);
		Fixed & operator++();		//Prefix increment
		Fixed	operator++(int);	//Postfix increment
		Fixed & operator--();		//Prefix increment
		Fixed	operator--(int);	//Postfix increment
};

//Display
std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif
