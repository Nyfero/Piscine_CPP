# include "../class/PresidentialPardonForm.hpp"

//					//
//	Constructors	//
//					//

PresidentialPardonForm::PresidentialPardonForm(std::string a_target): A_Form("Presidential", 25, 5),
	m_target(a_target) {
	std::cout << "PresidentialPardonForm Constructor surcharged call" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src): A_Form(src),
	m_target(src.m_target) {
	std::cout << "PresidentialPardonForm Constructor by copy call" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const& src) {
	A_Form::operator=(src);
	this->m_target = src.m_target;
	std::cout << "PresidentialPardonForm Constructor by assignement call" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm Destructor by default" << std::endl;
}

//				//
//	Functions	//
//				//

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	if (this->IsSigned() && executor.GetGrade() <= this->GetExec())
		std::cout << this->m_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
	{
		if (this->IsSigned())
			throw GradeTooLowExecute();
		else
			throw FormNotSigned();
	}
}

std::string	PresidentialPardonForm::GetTarget() const {
	return (this->m_target);
}

//			//
//	Display	//
//			//

std::ostream & operator << (std::ostream &out, const PresidentialPardonForm &c) {
	return (out << c.GetName() << ", PresidentialPardonForm is signed: " << c.IsSigned() << ", PresidentialPardonForm level to signed: " << c.GetSign() << ", PresidentialPardonForm level to execute: " << c.GetExec() << ", File to execute: " << c.GetTarget());
}
