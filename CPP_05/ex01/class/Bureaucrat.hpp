#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <string>
# include <iostream>

class Form;

class Bureaucrat
{
	protected:
		Bureaucrat();
		const std::string	m_name;
		int					m_grade;

	public:
		Bureaucrat(std::string a_name, int a_grade);
		Bureaucrat(Bureaucrat const& src);
		Bureaucrat & operator=(Bureaucrat const& src);
		~Bureaucrat();

		std::string	GetName() const;
		int			GetGrade() const;
		void		PromoteGrade();
		void		DemoteGrade();
		
		void		signForm(Form const& src);
	
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

std::ostream & operator << (std::ostream &out, const Bureaucrat &c);
#endif
