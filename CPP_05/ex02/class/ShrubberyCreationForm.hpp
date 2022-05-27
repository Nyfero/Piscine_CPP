#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "A_Form.hpp"
# include <string>
# include <iostream>

class A_Form;

class ShrubberyCreationForm
{
	protected:
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string a_name, int a_grade);
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const& src);
		~ShrubberyCreationForm();
	
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

std::ostream & operator << (std::ostream &out, const ShrubberyCreationForm &c);
#endif
