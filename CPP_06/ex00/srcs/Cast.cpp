# include "../class/Cast.hpp"

//					//
//	Canonical Form	//
//					//

Cast::Cast(char *av): m_type(0), m_char(0), m_charImpossible(0), m_charNonDisplay(0),
	m_int(0), m_intImpossible(0), m_float(0), m_double(0), m_precision(0)
{
	if (IsInt(av))
		SetFromInt();
	else if (IsChar(av))
		SetFromChar();
	else if (IsFloat(av))
		SetFromFloat();
	else if (IsDouble(av))
		SetFromDouble();
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
	if (av[1] != 0 || !std::isprint(av[0]))
		return (FALSE);
	this->m_type = 1;
	this->m_char = av[0];
	return (TRUE);
}

bool	Cast::IsInt(char *av)
{
	long int	nb = strtol(av, NULL, 10);
	int			i = 0;
	
	if (nb < INT_MIN || nb > INT_MAX)//Vérifie max et min int
		return (FALSE);
	if (std::isdigit(av[0]) || av[0] == '+' || av[0] == '-')
	{
		while (av[++i])
			if (!std::isdigit(av[i]))
				return (FALSE);
	}
	else
		return (FALSE);
	this->m_type = 2;
	this->m_int = static_cast<int>(nb);
	return (TRUE);
}

bool	Cast::IsFloat(char *av)
{
	int			i = 0;
	int			compt = 0;
	int			len = 0;
	std::string	tmp = av;
	float		f = strtof(av, NULL);
	
	if (tmp == "nanf" || tmp == "-inff" || tmp == "+inff")
	{
		this->m_type = 3;
		this->m_float = static_cast<float>(f);
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
	this->m_type = 3;
	this->m_precision = len;
	this->m_float = static_cast<float>(f);
	return (TRUE);
}

bool	Cast::IsDouble(char *av)
{
	double		d = strtod(av, NULL);
	int			i = 0;
	int			compt = 0;
	int			len = 0;
	std::string	tmp = av;
	
	if (tmp == "nan" || tmp == "-inf" || tmp == "+inf")
	{
		this->m_type = 4;
		this->m_float = static_cast<double>(d);
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
				if (av[i] != '.')//Vérifie que l'on a que des virgules en caractères non numérique
					return (FALSE);
			}
			i++;
		}
		if (compt > 1 || len > 15)
			return (FALSE);
	}
	else
		return (FALSE);
	this->m_type = 4;
	this->m_precision = len;
	this->m_double = static_cast<double>(d);
	return (TRUE);
}

//			//
//	Setter	//
//			//

void	Cast::SetFromChar()
{
	std::cout << "From Char" << std::endl;

	this->m_int = static_cast<int>(m_char);
	this->m_float = static_cast<float>(m_char);
	this->m_double = static_cast<double>(m_char);
}

void	Cast::SetFromInt()
{
	std::cout << "From Int" << std::endl;

	this->m_char = static_cast<char>(m_int);
	this->m_float = static_cast<float>(m_int);
	this->m_double = static_cast<double>(m_int);
}

void	Cast::SetFromFloat()
{
	std::cout << "From Float" << std::endl;

	this->m_char = static_cast<char>(m_float);
	this->m_int = static_cast<int>(m_float);
	this->m_double = static_cast<double>(m_float);
}
void	Cast::SetFromDouble()
{
	std::cout << "From Double" << std::endl;

	this->m_char = static_cast<char>(m_double);
	this->m_int = static_cast<int>(m_double);
	this->m_float = static_cast<float>(m_double);
}

void	Cast::SetSpec()
{
	double	d = this->m_double;
	
	if (d > INT_MAX || d < INT_MIN || std::isnan(d) || std::isinf(d))
	{
		this->m_charImpossible = TRUE;
		this->m_intImpossible = TRUE;
	}
	else if (d > CHAR_MAX || d < CHAR_MIN)
		this->m_charImpossible = TRUE;
	else if (!std::isprint(m_char))
		this->m_charNonDisplay = TRUE;
}

//			//
//	Display	//
//			//

void	Cast::Display() const
{
	std::cout << "Char: ";
	if (this->m_charNonDisplay == TRUE)
		std::cout << "Non displayable" << std::endl;
	else if (this->m_charImpossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->m_char << std::endl;
		
	std::cout << "Int: ";
	if (this->m_intImpossible)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->m_int << std::endl;
	
	std::cout << "Float: " << this->m_float;
	if (this->m_type == 2)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	
	std::cout << "Double: " << this->m_double;
	if (this->m_type == 2)
		std::cout << ".0";
	std::cout << std::endl;
}
