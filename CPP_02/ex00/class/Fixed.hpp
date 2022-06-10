#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

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
		
		//Functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
