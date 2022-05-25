# include "../class/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string a_name, int a_grade): m_name(a_name)
{
	if (m_grade <= 0)
		throw GradeTooHighException();
	if (m_grade >= 151)
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

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\e[0;31mGrade is too high\e[0m");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\e[0;31mGrade is too low\e[0m");
}
