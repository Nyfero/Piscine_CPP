# include "../class/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string a_target): A_Form("Robotomy", 72, 45), m_target(a_target)
{ std::cout << "RobotomyRequestForm Constructor surcharged call" << std::endl; }

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src): A_Form(src), m_target(src.m_target)
{ std::cout << "RobotomyRequestForm Constructor by copy call" << std::endl; }

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const& src)
{
	A_Form::operator=(src);
	this->m_target = src.m_target;
	std::cout << "RobotomyRequestForm Constructor by assignement call" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{ std::cout << "RobotomyRequestForm Destructor by default" << std::endl; }

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	srand (time(NULL));
	int	i = rand() % 1;

	if (this->IsSigned() && executor.GetGrade() <= this->GetExec())
	{
		std::cout << "BBBZZZZzzzzz...." << std::endl;
		if (i == 0)
			std::cout << this->m_target << " has been robotomized" << std::endl;
		else
			std::cout << "The robotomy failed !" << std::endl;
	}
	else
	{
		if (this->IsSigned())
			throw GradeTooLowExecute();
		else
			throw FormNotSigned();
	}
}

std::string	RobotomyRequestForm::GetTarget() const
{ return (this->m_target); }

std::ostream & operator << (std::ostream &out, const RobotomyRequestForm &c)
{ return (out << c.GetName() << ", RobotomyRequestForm is signed: " << c.IsSigned() << ", RobotomyRequestForm level to signed: " << c.GetSign() << ", RobotomyRequestForm level to execute: " << c.GetExec() << ", File to execute: " << c.GetTarget()); }