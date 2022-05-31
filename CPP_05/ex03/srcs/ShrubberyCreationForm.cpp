#include "../class/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string a_target): A_Form("Shrubbery", 145, 137), m_target(a_target)
{ std::cout << "ShrubberyCreationForm Constructor surcharged call" << std::endl; }

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src): A_Form(src), m_target(src.m_target)
{ std::cout << "ShrubberyCreationForm Constructor by copy call" << std::endl; }

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
	A_Form::operator=(src);
	this->m_target = src.m_target;
	std::cout << "ShrubberyCreationForm Constructor by assignement call" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{ std::cout << "ShrubberyCreationForm Destructor by default" << std::endl; }

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->IsSigned() && executor.GetGrade() <= this->GetExec())
	{	
		std::string outFileName;
		outFileName = this->m_target + "_shruberry";
		std::ofstream	outfile(outFileName.c_str());

		if (outfile.fail())
		{
			std::cout << "Error" << std::endl;
			return ;
		}
		outfile << "ASCII trees" << std::endl;
		outfile.close();
	}
	else
	{
		if (this->IsSigned())
			throw GradeTooLowExecute();
		else
			throw FormNotSigned();
	}
}

std::string	ShrubberyCreationForm::GetTarget() const
{ return (this->m_target); }

std::ostream & operator << (std::ostream &out, const ShrubberyCreationForm &c)
{ return (out << c.GetName() << ", ShrubberyCreationForm is signed: " << c.IsSigned() << ", ShrubberyCreationForm level to signed: " << c.GetSign() << ", ShrubberyCreationForm level to execute: " << c.GetExec() << ", File to execute: " << c.GetTarget()); }
