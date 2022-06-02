# include "../class/Cast.hpp"

//					//
//	Canonical Form	//
//					//

Cast::Cast(char *av): m_char(0), m_charImpossible(0), m_charNonDisplay(0),
	m_int(0), m_intImpossible(0), m_float(0), m_double(0)
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

bool	Cast::IsChar(char *av)
{
	double	d = strtod(av, NULL);
	
	if (d < CHAR_MIN || d > CHAR_MAX)
	{
		this->m_charImpossible = TRUE;
		return (FALSE);
	}
	if (!std::isprint(av[0]))
	{
		this->m_charNonDisplay = TRUE;
		return (FALSE);
	}
	if (av[1] != 0)
		return (FALSE);
	this->m_char = static_cast<char>(d);
	return (TRUE);
}

bool	Cast::IsInt(char *av)
{
	double	d = strtod(av, NULL);
	int		i = 0;
	
	if (d < INT_MIN || d > INT_MAX)//Vérifie max et min int
	{
		this->m_intImpossible = TRUE;
		return (FALSE);
	}
	if (std::isdigit(av[0]) || av[0] == '+' || av[0] == '-')
	{
		while (av[++i])
			if (!std::isdigit(av[i]))
				return (FALSE);
	}
	else
		return (FALSE);
	this->m_int = static_cast<int>(d);
	return (TRUE);
}

bool	Cast::IsFloat(char *av)
{
	int			i = 0;
	int			compt = 0;
	int			len = 0;
	std::string	tmp = av;
	double		d = strtod(av, NULL);
	
	if (tmp == "nanf" || tmp == "-inff" || tmp == "+inff")
	{
		this->m_charImpossible = TRUE;
		this->m_intImpossible = TRUE;
		this->m_float = static_cast<float>(d);
		return (TRUE);
	}
	if (std::isdigit(av[0]) || av[0] == '+' || av[0] == '-' || av[0] == '.')
	{
		while (av[i])
		{
			if (!std::isdigit(av[i]))
			{
				if (av[i] == '.')//Vérifie que l'on a qu'une virgule
					compt++;
				if (compt != 0)//Vérifie le nombre de chiffre après la virgule
					len++;
				if (av[i] != '.' && av[i] != 'f')//Vérifie que l'on a bien que des chiffres ou des lettres valides
					return (FALSE);
			}
			i++;
		}
		if (av[i - 1] != 'f' || compt > 1 || len > 6)
			return (FALSE);
	}
	else
		return (FALSE);
	this->m_float = static_cast<float>(d);
	return (TRUE);
}

bool	Cast::IsDouble(char *av)
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
//	Display	//
//			//

void	Cast::Display() const
{
	std::cout << "Char: ";
	if (this->m_charImpossible)
		std::cout << "impossible" << std::endl;
	else if (this->m_charNonDisplay)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << this->m_char << std::endl;
		
	std::cout << "Int: ";
	if (this->m_intImpossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->m_int << std::endl;
	
	std::cout << "Float: " << this->m_float << "f" << std::endl;
	std::cout << "Double: " << this->m_double << std::endl;
}
