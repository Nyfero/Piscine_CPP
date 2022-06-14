# include "../class/A_Form.hpp"

//					//
//	Constructors	//
//					//

A_Form::A_Form(std::string a_name, int a_sign, int a_exec):m_name(a_name), m_isSigned(false),
	m_sign(a_sign), m_exec(a_exec) {
	std::cout << "A_Form Constructor surcharged call" << std::endl;
}

A_Form::A_Form(A_Form const& src): m_name(src.m_name), m_isSigned(src.m_isSigned),
	m_sign(src.m_sign), m_exec(src.m_exec) {
	std::cout << "A_Form Constructor by copy call" << std::endl;
}

A_Form & A_Form::operator=(A_Form const& src) {
	this->m_isSigned = src.m_isSigned;
	std::cout << "A_Form Constructor by assignement call" << std::endl;
	return (*this);
}

A_Form::~A_Form() {
	std::cout << "A_Form Destructor by default" << std::endl;
}

//				//
//	Functions	//
//				//

std::string A_Form::GetName() const {
	return (this->m_name);
}

bool A_Form::IsSigned() const {
	return (this->m_isSigned);
}

int A_Form::GetSign() const {
	return (this->m_sign);
}

int A_Form::GetExec() const {
	return (this->m_exec);
}

void A_Form::beSigned(Bureaucrat & src) {
	std::cout << src.GetName() << " sign " << this->m_name << " ?" << std::endl;
	if (src.GetGrade() > this->m_sign)
		throw GradeTooLowSigned();
	this->m_isSigned = true;
}

//			//
//	Throw	//
//			//

const char* A_Form::GradeTooLowExecute::what() const throw() {
	return ("\e[91mGrade is too low to execute\e[39m");
}

const char* A_Form::GradeTooLowSigned::what() const throw() {
	return ("\e[91mGrade is too low to signed\e[39m");
}

const char* A_Form::FormNotSigned::what() const throw() {
	return ("\e[91mThe Form isn't signed yet\e[39m");
}

//			//
//	Display	//
//			//

std::ostream & operator << (std::ostream &out, const A_Form &c) {
	return (out << c.GetName() << ", A_Form is signed: " << c.IsSigned() << ", A_Form level to signed: " << c.GetSign() << ", A_Form level to execute: " << c.GetExec());
}
