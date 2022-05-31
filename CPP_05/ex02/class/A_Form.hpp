#ifndef A_FORM_HPP
# define A_FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class A_Form
{
	private:
		const std::string	m_name;
		bool				m_isSigned;
		const int			m_sign;
		const int			m_exec;

	public:
		A_Form(std::string a_name, int a_sign, int a_exec);
		A_Form(A_Form const& src);
		A_Form & operator=(A_Form const& src);
		virtual ~A_Form();
		
		std::string	GetName() const;
		bool		IsSigned() const;
		int			GetSign() const;
		int			GetExec() const;
		
		void			beSigned(Bureaucrat & src);
		virtual void	execute() const = 0;
		
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

std::ostream & operator << (std::ostream &out, const A_Form &c);

#endif
