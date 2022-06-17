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
		int					m_sign;
		int					m_exec;

	public:
		//Constructors
		A_Form(std::string a_name, int a_sign, int a_exec);
		A_Form(A_Form const& src);
		A_Form & operator=(A_Form const& src);
		virtual ~A_Form();
		
		//Throw
		class GradeTooLowExecute : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class FormNotSigned : public std::exception
		{
		public:
			virtual const char* what() const throw();
		};

		//Functions
		std::string	GetName() const;
		bool		IsSigned() const;
		int			GetSign() const;
		int			GetExec() const;
		void			beSigned(Bureaucrat & src);
		virtual void	execute(Bureaucrat const& executor) const = 0;
		void			beExecuted(Bureaucrat const &executor) const;
};

//Display
std::ostream & operator << (std::ostream &out, const A_Form &c);

#endif
