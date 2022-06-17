# include "../class/Form.hpp"

//					//
//	Constructors	//
//					//

Form::Form(std::string a_name, int a_sign, int a_exec):m_name(a_name), m_isSigned(false) {
	if (a_sign <= 0 || a_exec <= 0)
		throw GradeTooHighException();
	if (a_sign >= 151 || a_exec >= 151)
		throw GradeTooLowException();
	std::cout << "Form Constructor surcharged call" << std::endl;
	this->m_sign = a_sign;
	this->m_exec = a_exec;
}

Form::Form(Form const& src): m_name(src.m_name), m_isSigned(src.m_isSigned),
	m_sign(src.m_sign), m_exec(src.m_exec) {
	std::cout << "Form Constructor by copy call" << std::endl;
}

Form & Form::operator=(Form const& src) {
	this->m_isSigned = src.m_isSigned;
	std::cout << "Form Constructor by assignement call" << std::endl;
	return (*this);
}

Form::~Form() {
	std::cout << "Form Destructor by default" << std::endl;
}

//			//
//	Throw	//
//			//

const char* Form::GradeTooLowException::what() const throw() {
	return ("\e[91mI'm to low level\e[39m");
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("\e[91mI'm to high level\e[39m");
}

//				//
//	Functions	//
//				//

std::string Form::GetName() const {
	return (this->m_name);
}

bool Form::IsSigned() const {
	return (this->m_isSigned);
}

int Form::GetSign() const {
	return (this->m_sign);
}

int Form::GetExec() const {
	return (this->m_exec);
}

void Form::beSigned(Bureaucrat src) {
	std::cout << src.GetName() << " could you sign " << this->m_name << " ?" << std::endl;
	if (src.GetGrade() > this->m_sign)
		throw GradeTooLowException();
	if (src.GetGrade() <= 0)
		throw GradeTooHighException();
	this->m_isSigned = true;
}

//			//
//	Display	//
//			//

std::ostream & operator << (std::ostream &out, const Form &c) {
	return (out << c.GetName() << ", Form is signed: " << c.IsSigned() << ", Form level to signed: " << c.GetSign() << ", Form level to execute: " << c.GetExec());
}
