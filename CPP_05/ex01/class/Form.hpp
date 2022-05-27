#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	m_name;
		bool				m_isSigned;
		const int			m_sign;
		const int			m_exec;

	public:
		Form(std::string a_name, int a_sign, int a_exec);
		Form(Form const& src);
		Form & operator=(Form const& src);
		~Form();
		
		std::string	GetName() const;
		bool		IsSigned() const;
		int			GetSign() const;
		int			GetExec() const;
		
		void		beSigned(Bureaucrat const& src);
		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream & operator << (std::ostream &out, const Form &c);

#endif
