#ifndef CAST_HPP
# define CAST_HPP

# define TRUE 1
# define FALSE 0

# include <string>
# include <iostream>
# include <iomanip>
# include <climits>
# include <limits>
# include <cmath>
# include <cctype>
# include <stdlib.h>

class Cast
{
	private:
		int			m_type;
		char		m_char;
		bool		m_charImpossible;
		bool		m_charNonDisplay;
		int			m_int;
		bool		m_intImpossible;
		float		m_float;
		double		m_double;
		int			m_precision;

	public:
		//Orthodox Canonical Form
		Cast(char *av);
		~Cast();
		Cast(Cast const& src);
		Cast & operator=(Cast const& src);
		
		// throw exception
		class ErrorNoType : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		//Functions
		bool	IsChar(char *av);
		bool	IsInt(char *av);
		bool	IsFloat(char *av);
		bool	IsDouble(char *av);
		
		//Setter
		void	SetFromChar();
		void	SetFromInt();
		void	SetFromFloat();
		void	SetFromDouble();
		void	SetSpec();
		
		//Display
		void	Display() const;
};


#endif
