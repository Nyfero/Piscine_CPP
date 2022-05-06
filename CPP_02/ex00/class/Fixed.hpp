#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &f);
		~Fixed();
		Fixed & operator = (const Fixed &f);
	
	private:
		int	m_fixed;
		static const int	m_frac;
};

#endif
