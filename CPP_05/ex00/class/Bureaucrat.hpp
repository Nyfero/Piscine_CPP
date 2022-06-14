#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
	protected:
		Bureaucrat();
		const std::string	m_name;
		int					m_grade;

	public:
		//Constructors
		Bureaucrat(std::string a_name, int a_grade);
		Bureaucrat(Bureaucrat const& src);
		Bureaucrat & operator=(Bureaucrat const& src);
		~Bureaucrat();

		//throw
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
		
		//Functions
		std::string	GetName() const;
		int			GetGrade() const;
		void		PromoteGrade();
		void		DemoteGrade();
};

//Display
std::ostream & operator << (std::ostream &out, const Bureaucrat &c);
#endif
