# include "../class/Bureaucrat.hpp"

//					//
//	Canonical Form	//
//					//

Bureaucrat::Bureaucrat(std::string a_name, int a_grade): m_name(a_name)
{
	if (a_grade <= 0)
		throw GradeTooHighException();
	if (a_grade >= 151)
		throw GradeTooLowException();
	m_grade = a_grade;
	std::cout << "Bureaucrat is created" << std::endl;
}

Bureaucrat::~Bureaucrat()
{ std::cout << "Bureaucrat Destructor call" << std::endl; }

Bureaucrat::Bureaucrat(Bureaucrat const& src): m_name(src.m_name), m_grade(src.m_grade)
{ std::cout << this->m_name << " Bureaucrat copy constuctor call; rank: " << this->m_grade << std::endl; }

Bureaucrat & Bureaucrat::operator=(Bureaucrat const& src)
{
	if (this != &src)
		this->m_grade = src.m_grade;
	std::cout << this->m_name << " Bureaucrat assignement constuctor call; rank: " << this->m_grade << std::endl;
	return (*this);
}

//			//
//	Getter	//
//			//

std::string	Bureaucrat::GetName() const
{ return this->m_name; }

int Bureaucrat::GetGrade() const
{ return this->m_grade; }

std::ostream & operator << (std::ostream &out, const Bureaucrat &c)
{ return (out << c.GetName() << ", bureaucrat grade " << c.GetGrade()); }

//			//
//	throw	//
//			//

const char* Bureaucrat::GradeTooHighException::what() const throw()
{ return ("\e[0;31mGrade is too high\e[0m"); }

const char* Bureaucrat::GradeTooLowException::what() const throw()
{ return ("\e[0;31mGrade is too low\e[0m"); }

//				//
//	Functions	//
//				//

void	Bureaucrat::PromoteGrade()
{
	std::cout << this->m_name << " his promoted" << std::endl;
	if (this->m_grade == 1)
		throw GradeTooHighException();
	this->m_grade--;
}

void	Bureaucrat::DemoteGrade()
{
	std::cout << this->m_name << " his demoted" << std::endl;
	if (this->m_grade == 150)
		throw GradeTooLowException();
	this->m_grade++;
}

void	Bureaucrat::signForm(A_Form & src)
{
	src.beSigned(*this);
	if (src.IsSigned() == true)
		std::cout << this->m_name << " signed " << src.GetName() << std::endl;
	else
		std::cout << this->m_name << " couldn't sign " << src.GetName() << " because he is to low level" << std::endl;
}

void	Bureaucrat::executeForm(A_Form & src)
{
	std::cout << this->m_name << " execute " << src.GetName() << " ?" << std::endl;
	try
	{
		src.execute(*this);
		std::cout << this->m_name << " execute " << src.GetName() << std::endl;
	}
	catch (const std::exception& e)
	{ std::cout << e.what() << std::endl; }	
}
