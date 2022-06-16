#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "A_Form.hpp"
# include <string>
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public A_Form
{
	private:
		std::string	m_target;

	public:
		//Constructors
		ShrubberyCreationForm(std::string a_target);
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const& src);
		virtual ~ShrubberyCreationForm();
		
		//Functions
		virtual void	execute(Bureaucrat const& executor) const;
		std::string		GetTarget() const;
};

//Display
std::ostream & operator << (std::ostream &out, const ShrubberyCreationForm &c);
#endif
