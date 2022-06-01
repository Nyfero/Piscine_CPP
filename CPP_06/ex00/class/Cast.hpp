#ifndef CAST_HPP
# define CAST_HPP

# define TRUE 1
# define FALSE 0

# include <string>
# include <iostream>
# include <climits>
# include <cctype>
# include <stdlib.h>

class Cast
{
	private:
		char		m_char;
		int			m_int;
		float		m_float;
		double		m_double;

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
		bool	IsChar(char *av) const;
		bool	IsInt(char *av) const;
		bool	IsFloat(char *av) const;
		bool	IsDouble(char *av) const;
		
		//Setter
		void	SetFromChar(char *av);
		void	SetFromInt(char *av);
		void	SetFromFloat(char *av);
		void	SetFromDouble(char *av);
		
		//Getter
		char	GetChar() const;
		int		GetInt() const;
		float	GetFloat() const;
		double	GetDouble() const;
};

//Display
std::ostream & operator << (std::ostream &out, const Cast &c);

#endif
