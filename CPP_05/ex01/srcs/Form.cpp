# include "../class/Form.hpp"

//					//
//	Constructors	//
//					//

Form::Form(std::string a_name, int a_sign, int a_exec):m_name(a_name), m_isSigned(false),
	m_sign(a_sign), m_exec(a_exec) {
	std::cout << "Form Constructor surcharged call" << std::endl;
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

const char* Form::GradeTooLowToSign::what() const throw() {
	return ("\e[91mNo i can't sign this\e[39m");
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

void Form::beSigned(Bureaucrat const& src) {
	std::cout << src.GetName() << " could you sign " << this->m_name << " ?" << std::endl;
	if (src.GetGrade() > this->m_sign)
		throw GradeTooLowToSign();
	std::cout << "Yes" << std::endl;
	this->m_isSigned = true;
}

//			//
//	Display	//
//			//

std::ostream & operator << (std::ostream &out, const Form &c) {
	return (out << c.GetName() << ", Form is signed: " << c.IsSigned() << ", Form level to signed: " << c.GetSign() << ", Form level to execute: " << c.GetExec());
}
