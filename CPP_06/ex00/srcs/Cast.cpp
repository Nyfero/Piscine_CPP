# include "../class/Cast.hpp"

//					//
//	Canonical Form	//
//					//

Cast::Cast(char *av): m_char(0), m_int(0), m_float(0), m_double(0)
{
	if (IsChar(av))
		SetFromChar(av);
	else if (IsInt(av))
		SetFromInt(av);
	else if (IsFloat(av))
		SetFromFloat(av);
	else if (IsDouble(av))
		SetFromDouble(av);
	else
		throw ErrorNoType();
}

Cast::~Cast()
{}

Cast::Cast(Cast const& src)
{ *this = src; }

Cast & Cast::operator=(Cast const& src)
{
	this->m_char = src.m_char;
	this->m_int = src.m_int;
	this->m_float = src.m_float;
	this->m_double = src.m_double;
	return (*this);
}

//					//
//	Throw Exception	//
//					//

const char* Cast::ErrorNoType::what() const throw()
{ return ("\e[0;31mWhat the hell is this !\e[0m"); }

//				//
//	Functions	//
//				//

bool	Cast::IsChar(char *av) const
{	
	if (av[1] != 0 && std::isprint(av[0]))
		return (FALSE);
	return (TRUE);
}

bool	Cast::IsInt(char *av) const
{
	double	d = strtod(av, NULL);
	int		i = 0;
	
	if (d < INT_MIN || d > INT_MAX)
		return (FALSE);
	if (std::isdigit(av[0]) || av[0] == '+' || av[0] == '-')
	{
		while (av[++i])
			if (!std::isdigit(av[i]))
				return (FALSE);
	}
	else
		return (FALSE);
	return (TRUE);
}

bool	Cast::IsFloat(char *av) const
{
	double	d = strtod(av, NULL);
	int		i = 0;
	
	if (std::isdigit(av[0]) || av[0] == '+' || av[0] == '-' || av[0] == '.')
	{
		w
	}
	else
		return (FALSE);
	return (TRUE);
}

bool	Cast::IsDouble(char *av) const
{
	(void)av;
	return (FALSE);
}

//			//
//	Setter	//
//			//

void	Cast::SetFromChar(char *av)
{
	char	from;
	
	std::cout << "From Char" << std::endl;
	from = av[0];
	this->m_char = static_cast<char>(from);
	this->m_int = static_cast<int>(from);
	this->m_float = static_cast<float>(from);
	this->m_double = static_cast<double>(from);
}

void	Cast::SetFromInt(char *av)
{
	int		from;
	
	std::cout << "From Int" << std::endl;
	// long int strtol (const char* str, char** endptr, int base);
	from = strtol(av, NULL, 10);
	this->m_char = static_cast<char>(from);
	this->m_int = static_cast<int>(from);
	this->m_float = static_cast<float>(from);
	this->m_double = static_cast<double>(from);
}

void	Cast::SetFromFloat(char *av)
{
	float	from;
	
	std::cout << "From Float" << std::endl;
	//float strtof (const char* str, char** endptr);
	from = strtof(av, NULL);
	this->m_char = static_cast<char>(from);
	this->m_int = static_cast<int>(from);
	this->m_float = static_cast<float>(from);
	this->m_double = static_cast<double>(from);
}
void	Cast::SetFromDouble(char *av)
{
	double	from;
	
	std::cout << "From Double" << std::endl;
	//double strtod (const char* str, char** endptr);
	from = strtod(av, NULL);
	this->m_char = static_cast<char>(from);
	this->m_int = static_cast<int>(from);
	this->m_float = static_cast<float>(from);
	this->m_double = static_cast<double>(from);
}

//			//
//	Getter	//
//			//

char	Cast::GetChar() const
{
	if (this->m_char < CHAR_MIN || this->m_char > CHAR_MAX)
	{
		std::cout << "impossible";
		return (0);
	}
	return (this->m_char);
}

int		Cast::GetInt() const
{ return (this->m_int); }

float	Cast::GetFloat() const
{ return (this->m_float); }

double	Cast::GetDouble() const
{ return (this->m_double); }

//			//
//	Display	//
//			//

std::ostream & operator << (std::ostream &out, const Cast &c)
{ return (out << "Char: " << c.GetChar() << "\nInt: " << c.GetInt() << "\nFloat: " << c.GetFloat() << "f\nDouble: " << c.GetDouble() << std::endl); }
