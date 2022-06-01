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
	(void)src;
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
	(void)av;
	return (FALSE);
}

bool	Cast::IsInt(char *av) const
{
	(void)av;
	return (TRUE);
}

bool	Cast::IsFloat(char *av) const
{
	(void)av;
	return (TRUE);
}

bool	Cast::IsDouble(char *av) const
{
	(void)av;
	return (TRUE);
}

//			//
//	Setter	//
//			//

void	Cast::SetFromChar(char *av)
{
	char	from;
	
	from = av[0];
	this->m_char = from;
	this->m_int = from;
	this->m_float = from;
	this->m_double = from;
}

void	Cast::SetFromInt(char *av)
{
	int		from;
	// long int strtol (const char* str, char** endptr, int base);
	from = strtol(av, NULL, 10);
	this->m_char = from;
	this->m_int = from;
	this->m_float = from;
	this->m_double = from;
}

void	Cast::SetFromFloat(char *av)
{
	float	from;
	//float strtof (const char* str, char** endptr);
	from = strtof(av, NULL);
	this->m_char = from;
	this->m_int = from;
	this->m_float = from;
	this->m_double = from;
}
void	Cast::SetFromDouble(char *av)
{
	double	from;
	//double strtod (const char* str, char** endptr);
	from = strtod(av, NULL);
	this->m_char = from;
	this->m_int = from;
	this->m_float = from;
	this->m_double = from;
}

//			//
//	Getter	//
//			//

char	Cast::GetChar() const
{ return (this->m_char); }

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
{ return (out << "Char: " << c.GetChar() << "\nInt: " << c.GetInt() << "\nFloat: " << c.GetFloat() << "\nDouble: " << c.GetDouble() << std::endl); }
