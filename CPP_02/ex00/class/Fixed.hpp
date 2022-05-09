#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const& src);
		void	operator=(Fixed const& src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int	m_fixed;
		static const int	m_frac;
};

#endif
