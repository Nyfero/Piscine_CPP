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
};

//Display
std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif
